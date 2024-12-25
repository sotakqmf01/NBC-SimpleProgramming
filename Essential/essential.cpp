#include <iostream>
#include <vector>
using namespace std;

//double sum(double* score, int n) {
//	double total = 0.0;
//	for (int i = 0; i < n; i++)
//		total += score[i];
//
//	cout << "sum : " << total << endl;
//	return total;
//}
//
//double avg(double* score, int n) {
//	double avg = sum(score, n) / n;
//	cout << "avg : " << avg << endl;
//	return avg;
//}
//
//int main() {
//	//double score[5] = { 0 };
//	int n = 0;
//
//	cout << "�Է��� ���� ���� : ";
//	cin >> n;
//
//	double* score = new double[n];
//
//	cout << "���� N���� �Է��ϼ��� : ";
//	for (int i = 0; i < n; i++) {
//		cin >> score[i];
//	}
//
//	sum(score, n);
//	avg(score, n);
//
//	delete[] score;
//}

double sum(vector<double>& score, int n) {
	double total = 0.0;
	for (int i = 0; i < n; i++)
		total += score[i];

	return total;
}

double avg(vector<double>& score, int n) {
	return sum(score, n) / n;
}

int main() {
	int n = 0;
	int input;

	cout << "�Է��� ���� ���� : ";
	cin >> n;

	vector<double> v_score;
	v_score.resize(n);

	cout << "���� N���� �Է��ϼ��� : ";
	for (int i = 0; i < n; i++) {
		cin >> v_score[i];
	}

	cout << "sum : " << sum(v_score, n) << endl;
	cout << "avg : " << avg(v_score, n) << endl;

	return 0;
}


// reserve(5)�� ���� ���Ͱ� ������ �󸶳� ��� �������� ������ �ϴ� 5������ ����� �� �ִٴ� ��
// => �ϳ��� ����ϰ� ���� �ʴٰ� �����ϸ� iterator�� ù ���͸� ����Ŵ
// => index�� ������ �ȵ�
	//v_score.reserve(n);	

// resize(5)�� ���� ���Ͱ� ������ 5���� ���͸� ��� ���̶�� �� => iterator�� 6��° ���͸� ����Ŵ
//v_score.resize(n);
//
//cout << "���� N���� �Է��ϼ��� : ";
//for (int i = 0; i < n; i++) {
//	/*cin >> input;
//	v_score.push_back(input);*/
//	cin >> v_score[i];
//}



//void printV(vector<int>& v) {
//	for (int i = 0; i < v.size(); i++)
//		cout << v[i] << " ";
//
//	cout << endl;
//}
//
//int main() {
//	vector<int> v{ 1,2,3,4,5 };
//	vector<int> v2(v);
//
//	printV(v);
//	printV(v2);
//
//	v2[0] = 100;
//	v2[1] = 200;
//	cout << endl;
//
//	printV(v);
//	printV(v2);
//
//	return 0;
//}