#include<iostream>
using namespace std;

//=================����°� ��Ģ����=======================
//1-1�ܰ� 2557
void HW() {
	cout << "Hello World!";
}

//1-2�ܰ� 10718
void WLK() {
	cout << "����ģ�� ��������\n"
		<< "����ģ�� ��������";
}

//1-3�ܰ� 10171
void Cat() {
	cout << "\\    /\\"
		<< "\n"
		<< " )  ( ')"
		<< "\n"
		<< "(  /  )"
		<< "\n"
		<< " \\(__)|";
}

//1-4�ܰ� 10172
void Dog() {
	cout << "|\\_/|"
		<< "\n"
		<< "|q p|   /}"
		<< "\n"
		<< "( 0 )\"\"\"\\"
		<< "\n"
		<< "|\"^\"`    |"
		<< "\n"
		<< "||_/=\\\\__|";
}

//1-5�ܰ� 1000
void AplusB() {
	int a, b;
	cin >> a >> b;
	cout << a + b;
}

//1-6�ܰ� 1001
void AminusB() {
	int a, b;
	cin >> a >> b;
	cout << a - b;
}

//1-7�ܰ� 10998
void AmultiB() {
	int a, b;
	cin >> a >> b;
	cout << a * b;
}

//1-8�ܰ� 1008
void AdivB() {
	int a, b;
	double res;
	cin >> a >> b;
	res = (double)a / b;
	cout.setf(ios::fixed);
	cout.precision(9);
	cout << res;
}

//1-9�ܰ� 10869
void FourCalcul() {
	int a, b;
	cin >> a >> b;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << a % b << endl;
}

//1-10�ܰ� 10430
void Remain() {
	int A, B, C;
	cin >> A >> B >> C;
	cout << (A + B) % C << endl;
	cout << ((A % C) + (B % C)) % C << endl;
	cout << (A * B) % C << endl;
	cout << ((A % C) * (B % C)) % C << endl;
}

//1-11�ܰ� 2588
void Multiplication() {
	int a, b;
	cin >> a;
	cin >> b;
	int n3, n4, n5, n6;
	n3 = a * (b % 10);
	n4 = a * ((b / 10) % 10);
	n5 = a * (b / 100);
	n6 = n3 + (n4 * 10) + (n5 * 100);
	cout << n3 << "\n"
		<< n4 << "\n"
		<< n5 << "\n"
		<< n6;
}