#include<iostream>
using namespace std;

//================while문=======================
//4-1단계 10952
void AplusB_5() {
	int a, b;
	while (true) {
		cin >> a >> b;
		if (a == 0 && b == 0) {
			break;
		}
		cout << a + b << endl;
	}
}

//4-2단계 10951
void AplusB_4() {
	int a, b;
	while (true) {
		cin >> a >> b;
		if (cin.eof() == true) {
			break;
		}
		cout << a + b << endl;
	}
}

//4-3단계 1110
void PlusCycle() {
	int num; //처음 n
	int n; //주어지는 정수
	int sum = 0; //n의 자릿수 합
	int cycle = 0; //사이클 수
	cin >> n;
	num = n;
	while (true) {
		sum = (n / 10) + (n % 10);
		sum = (n % 10) * 10 + (sum % 10);
		cycle++;

		if (sum == num) {
			cout << cycle;
			break;
		}
		else {
			n = sum;
		}
	}
}
