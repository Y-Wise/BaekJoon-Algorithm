#include<iostream>
using namespace std;

//================while��=======================
//4-1�ܰ� 10952
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

//4-2�ܰ� 10951
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

//4-3�ܰ� 1110
void PlusCycle() {
	int num; //ó�� n
	int n; //�־����� ����
	int sum = 0; //n�� �ڸ��� ��
	int cycle = 0; //����Ŭ ��
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
