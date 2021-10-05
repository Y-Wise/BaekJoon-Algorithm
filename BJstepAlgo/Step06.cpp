#include<iostream>
#include<vector>
#include<string>
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
	// n 이하의 수들 중 자리수들이 등차수열인 수(한수)의 개수 출력
	// 1 <= n <= 1000

	int n; // 임의의 n
	int cntHansu; // 한수의 개수
	//한자리수 : 전부 한수(1~9)
	//두자리수 : 전부 한수(1~9)
	//*세자리수 : 이 부분만 구하면 됨*
	//네자리수 : 1000 (한수 아님)
	int arrN[] = {0, 0, 0, 0};
	for(int i = 0; i<4; i++){
	}

	// 임의의 N 입력 받기
	std::cin >> n;
	string strN = to_string(n);
	strN[0];
	if (n < 10) {
		cntHansu = n;
	}
	else if (n < 100) {
		cntHansu = n;
	}
	else if (n < 1000) {

	}
	else if(n == 1000){
		
	}
	else {}

	// 한수의 개수 출력
	std::cout << cntHansu;

	//int n, tmpK;
	//int arrK[4]{ 0 };
	//cin >> n;
	//int cnt{ 0 };
	//int cntK{ 0 };

	//int k{ 1 };
	//while (k <= n) {
	//	tmpK = k;
	//	for (int i = 3; i >= 0; i--) {
	//		arrK[i] = tmpK % 10;
	//		tmpK /= 10;
	//	}
	//	for (int i = 0; i < 4; i++) {
	//		if (arrK[i + 1] == arrK[i]) {
	//			cnt++;
	//		}
	//	}
	//	k++;
	//}
	//cout << cnt;
}

int main() {
	Hansu();
}