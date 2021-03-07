#include<iostream>
using namespace std;

int main() {
	const int MAX_test = 1000;
	int n; // 과목 수
	double arrTest[MAX_test] = { 0 }; // 성적표
	double modiTest[MAX_test] = { 0 }; // 조작한 성적표
	double m{ 0 }; // 성적 중 최대값
	double sum = 0;
	double ave; // 새로운 평균

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arrTest[i];
	}

	for (int i = 0; i < n; i++) {
		m = (arrTest[i] > m) ? arrTest[i] : m;
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