#include<iostream>
using namespace std;

int main() {
	int a, b = 42, cnt = 0;
	int arrRemain[10] = { 0 };
	int arrCnt[42] = { 0 };

	for (int i = 0; i < 10; i++) {
		cin >> a;
		arrRemain[i] = a % b;
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 42; j++) {
			if (arrRemain[i] == j) {
				arrCnt[j] += 1;
			}
		}
	}

	for (int i = 0; i < 42; i++) {
		if (arrCnt[i] != 0) {
			cnt++;
		}
	}
	cout << cnt;

}