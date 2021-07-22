#include<iostream>
#include<vector>
using namespace std;

//================함수=======================
//6-1단계 15596
long long sum(vector<int> &a) {
	long long ans = 0;
	for (int i = 0; i < a.size(); i++) {
		ans += a[i];
	}
	return ans;
}

//6-2단계 4673
int d(int n) {
	// n <= 10000
	int tmpN = n;
	int sum = n;

	//n + n의 자리수 합
	for (int i = 0; i < 5; i++) {
		sum += tmpN % 10;
		tmpN /= 10;
	}

	return sum;
}

int arrDN2[10001] = { 0 };
void Constructor() {
	int n = 1;
	while (true) {
		arrDN2[d(n)]++;
		n++;
		if (n > 10000) break;
	}

	for (int i = 1; i < 10001; i++) {
		if (arrDN2[i] == 0) {
			cout << i << endl;
		}
	}
}

//6-3단계 1065
void Hansu() {
	int n, tmpK;
	int arrK[4]{ 0 };
	cin >> n;
	int cnt{ 0 };
	int cntK{ 0 };

	int k{ 1 };
	while (k <= n) {
		tmpK = k;
		for (int i = 3; i >= 0; i--) {
			arrK[i] = tmpK % 10;
			tmpK /= 10;
		}
		for (int i = 0; i < 4; i++) {
			if (arrK[i + 1] == arrK[i]) {
				cnt++;
			}
		}
		k++;
	}
	cout << cnt;
}
