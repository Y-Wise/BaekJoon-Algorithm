#include<iostream>
using namespace std;

//=================입출력과 사칙연산=======================
//1-1단계 2557
void HW() {
	cout << "Hello World!";
}

//1-2단계 10718
void WLK() {
	cout << "강한친구 대한육군\n"
		<< "강한친구 대한육군";
}

//1-3단계 10171
void Cat() {
	cout << "\\    /\\"
		<< "\n"
		<< " )  ( ')"
		<< "\n"
		<< "(  /  )"
		<< "\n"
		<< " \\(__)|";
}

//1-4단계 10172
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

//1-5단계 1000
void AplusB() {
	int a, b;
	cin >> a >> b;
	cout << a + b;
}

//1-6단계 1001
void AminusB() {
	int a, b;
	cin >> a >> b;
	cout << a - b;
}

//1-7단계 10998
void AmultiB() {
	int a, b;
	cin >> a >> b;
	cout << a * b;
}

//1-8단계 1008
void AdivB() {
	int a, b;
	double res;
	cin >> a >> b;
	res = (double)a / b;
	cout.setf(ios::fixed);
	cout.precision(9);
	cout << res;
}

//1-9단계 10869
void FourCalcul() {
	int a, b;
	cin >> a >> b;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << a % b << endl;
}

//1-10단계 10430
void Remain() {
	int A, B, C;
	cin >> A >> B >> C;
	cout << (A + B) % C << endl;
	cout << ((A % C) + (B % C)) % C << endl;
	cout << (A * B) % C << endl;
	cout << ((A % C) * (B % C)) % C << endl;
}

//1-11단계 2588
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