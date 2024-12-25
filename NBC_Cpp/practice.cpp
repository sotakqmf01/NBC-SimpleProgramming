#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
using namespace std;

class Employee {
public:
	Employee() {
		cout << "Employee �⺻ ������" << endl;
	}
	virtual ~Employee() {
		cout << "Employee �Ҹ���" << endl;
	}

	virtual void work() {
		cout << "Employee is working" << endl;
	}
};

class Developer : public Employee {
public:
	Developer() {
		cout << "Developer �⺻ ������ ȣ��" << endl;
	}
	virtual ~Developer() {
		cout << "Developer �Ҹ��� ȣ��" << endl;
	}

	virtual void work() {
		cout << "Developer is coding" << endl;
	}

};

class Manager : public Employee {
public:
	Manager() {
		cout << "Manager �⺻ ������ ȣ��" << endl;
	}
	virtual ~Manager() {
		cout << "Manager �Ҹ��� ȣ��" << endl;
	}

	virtual void work() {
		cout << "Manager is planning" << endl;
	}

};

int main() {
	cout << "���� �迭 ���" << endl;

	Employee team_static[2];
	team_static[0].work();
	team_static[1].work();

	cout << "���� �迭 ���" << endl;

	Employee* team_dynamic[2];
	team_dynamic[0] = new Developer();
	team_dynamic[1] = new Manager();

	for (int i = 0; i < 2; i++)
		team_dynamic[i]->work();

	for (int i = 0; i < 2; i++)
		delete team_dynamic[i];

	return 0;
}


//cout << endl;
//int alist[5] = { 1,2,3,4,5 };
//
//alist[6] = 10;
//cout << "alist[6] = " << alist[6] << endl;

//int* dalist = (int*)malloc(sizeof(int) * 5);

//dalist[0] = 1;
//dalist[1] = 2;
//dalist[2] = 3;
//dalist[3] = 4;
//dalist[4] = 5;

//dalist[5] = 10;
//printf("dalist[5] = %d\n", dalist[5]);

//free(dalist);

//
//vector<int> v;
//vector<int>::iterator it = v.begin();	// ó���� �ʱ�ȭ�� ���ؼ� ���Ϳ� ��Ұ� �ϳ��� ���� => it�� ����ų�� ���� => ??? ���� �����°� �翬
//
//v.resize(5);
//
//v[0] = 1;
//v[1] = 3;
//v[2] = 5;
//v[3] = 7;
//v[4] = 9;
//
//it = v.begin();			// ��Ұ� �߰��ǰ� ���� ���� ����