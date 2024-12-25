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
//	cout << "입력할 점수 개수 : ";
//	cin >> n;
//
//	double* score = new double[n];
//
//	cout << "점수 N개를 입력하세요 : ";
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

	cout << "입력할 점수 개수 : ";
	cin >> n;

	vector<double> v_score;
	v_score.resize(n);

	cout << "점수 N개를 입력하세요 : ";
	for (int i = 0; i < n; i++) {
		cin >> v_score[i];
	}

	cout << "sum : " << sum(v_score, n) << endl;
	cout << "avg : " << avg(v_score, n) << endl;

	return 0;
}


// reserve(5)는 현재 벡터가 실제로 얼마나 사용 중인지는 모르지만 일단 5개까지 사용할 수 있다는 뜻
// => 하나도 사용하고 있지 않다고 가정하면 iterator는 첫 벡터를 가리킴
// => index로 접근이 안됨
	//v_score.reserve(n);	

// resize(5)는 현재 벡터가 실제로 5개의 벡터를 사용 중이라는 뜻 => iterator가 6번째 벡터를 가리킴
//v_score.resize(n);
//
//cout << "점수 N개를 입력하세요 : ";
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