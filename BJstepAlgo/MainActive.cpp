#include<iostream>
using namespace std;

double arrTest[] = { 0 }; // ����ǥ
double modiTest[] = { 0 }; // ������ ����ǥ

int main() {
	int m{ 0 }; // ���� �� �ִ밪
	double sum = 0;
	int n; // ���� ��
	double ave; // ���ο� ���

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arrTest[i];
	}

	//cout << "arrTest: " << endl;
	//for (int i = 0; i < n; i++) {
	//	cout << arrTest[i] << endl;
	//}

	for (int i = 0; i < n; i++) {
		m = (m > arrTest[i]) ? m : arrTest[i];
		cout << i << "��° �ִ�m: " << m << endl;
	}

	for (int i = 0; i < n; i++) {
		modiTest[i] = arrTest[i] / m * 100;
	}
	for (int i = 0; i < n; i++) {
		cout << "modiTest[" << i << "]: " << modiTest[i] << endl;
		sum += modiTest[i];
		cout << i << "��° sum: " << sum << endl;
	}
	ave = sum / n;
	cout << ave;
}