#include <iostream>
#include <vector>
using namespace std;

void swapV(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void printV(vector<int>& v) {
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
}

void ascending(vector<int>& v) {
	for (int i = 0; i < v.size(); i++) {
		for (int j = i + 1; j < v.size(); j++) {
			if (v[i] > v[j]) {
				swapV(v[i], v[j]);
				printV(v);
			}
		}
	}
}

void descending(vector<int>& v) {
	for (int i = 0; i < v.size(); i++) {
		for (int j = i + 1; j < v.size(); j++) {
			if (v[i] < v[j]) {
				swapV(v[i], v[j]);
				printV(v);
			}
		}
	}
}

//----------------------------------------------------------
void BubbleSort(vector<int>& v) {
	for (int i = (int)(v.size() - 1); i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (v[j] > v[j + 1]) {
				swapV(v[j], v[j + 1]);
				printV(v);
			}
		}
	}
}

void SelectionSort(vector<int>& v) {
	for (int i = 0; i < v.size()-1; i++) {
		int index = i;
		for (int j = i+1; j < v.size(); j++) {
			if (v[index] > v[j])
				index = j;
		}
		swapV(v[i], v[index]);
		printV(v);
	}
}

void InsertionSort(vector<int>& v) {
	for (int i = 1; i < v.size(); i++) {
		for (int j = i; j > 0; j--) {
			if (v[j - 1] > v[j]) {
				swapV(v[j - 1], v[j]);
				printV(v);
			}
			else
				break;
		}
	}
}

void QuickSort(vector<int>& v, int start, int end) {
	if (start >= end)
		return;
	
	int pivot = start;
	int left = pivot + 1;
	int right = end;
	
	while (left <= right) {
		while (left <= end && v[pivot] >= v[left] )
			left++;
		while (right >= start + 1 && v[pivot] <= v[right])
			right--;
	
		if (left < right) {
			swapV(v[left], v[right]);
			printV(v);
		}
	}

	swapV(v[pivot], v[right]);
	printV(v);


	QuickSort(v, start, right-1);
	QuickSort(v, left, end);
}

int main() {
	int n = 0;
	int a;
	a = 10;
	int select = 0;

	cout << "입력할 점수 개수 : ";
	cin >> n;

	vector<int> v_score;
	v_score.resize(n);

	cout << "점수 N개를 입력하세요 : ";
	for (int i = 0; i < n; i++) {
		cin >> v_score[i];
	}

	//vector<int> v_score = { 2, 7, 4, 3, 5, 9, 6, 8, 1 };
	//vector<int> v_score = { 1,2,3,4,5,6,7,8,9 };
	//vector<int> v_score = { 9,8,7,6,5,4,3,2,1};

	cout << endl << "--- [1] 오름차순 [2] 내림차순 ---" << endl << ">> ";
	cin >> select;

	printV(v_score);
	cout << "--- 정렬 시작 ---" << endl;

	if (select == 1)
		//BubbleSort(v_score);
		QuickSort(v_score, 0, (int)(v_score.size() - 1));
	else
		descending(v_score);

	cout << endl;



	//a asdfasdfsadfdsafdsafdsafsdafsadf
	return 0;
}