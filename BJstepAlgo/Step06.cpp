#include<iostream>
#include<vector>
using namespace std;

int main() {

}

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

int arrDN[10001] = { 0 };
void Constructor() {
	int n = 1;
	while (true) {
		arrDN[d(n)]++;
		n++;
		if (n > 10000) break;
	}

	for (int i = 1; i < 10001; i++) {
		if (arrDN[i] == 0) {
			cout << i << endl;
		}
	}
}

//6-3단계 1065