#include<iostream>
using namespace std;

int main() {
	const int MAX_test = 1000;
	int n; // ���� ��
	double arrTest[MAX_test] = { 0 }; // ����ǥ
	double modiTest[MAX_test] = { 0 }; // ������ ����ǥ
	double m{ 0 }; // ���� �� �ִ밪
	double sum = 0;
	double ave; // ���ο� ���

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arrTest[i];
	}

	for (int i = 0; i < n; i++) {
		m = (arrTest[i] > m) ? arrTest[i] : m;
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