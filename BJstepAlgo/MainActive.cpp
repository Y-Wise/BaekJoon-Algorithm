#include<iostream>
using namespace std;

double arrTest[] = { 0 }; // 성적표
double modiTest[] = { 0 }; // 조작한 성적표

int main() {
	int m{ 0 }; // 성적 중 최대값
	double sum = 0;
	int n; // 과목 수
	double ave; // 새로운 평균

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
		cout << i << "번째 최대m: " << m << endl;
	}

	for (int i = 0; i < n; i++) {
		modiTest[i] = arrTest[i] / m * 100;
	}
	for (int i = 0; i < n; i++) {
		cout << "modiTest[" << i << "]: " << modiTest[i] << endl;
		sum += modiTest[i];
		cout << i << "번째 sum: " << sum << endl;
	}
	ave = sum / n;
	cout << ave;
}