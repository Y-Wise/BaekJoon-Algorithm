#include<iostream>
#include<vector>
#include<cmath>

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
			std::cout << i << std::endl;
		}
	}
}

//6-3단계 1065
void Hansu() {
	// n 이하의 수들 중 자리수들이 등차수열인 수(한수)의 개수 출력
	// 1 <= n <= 1000
	//한자리수 : 전부 한수(1~9)
	//두자리수 : 전부 한수(1~9)
	//*세자리수 : 이 부분만 구하면 됨*
	//네자리수 : 1000 (한수 아님)

	int n; // 임의의 n
	int cntHansu{0}; // 한수의 전체 개수
	int arrI[] = {0, 0, 0, 0}; // 자릿수에 맞춰 배열에 넣기

	// 임의의 N 입력 받기
	std::cin >> n;

	//arrN[0] = (n % 10000) / 1000;
	//arrN[1] = (n % 1000) / 100;
	//arrN[2] = (n % 100) / 10;
	//arrN[3] = n % 10;

	
	if (n < 100) {
		cntHansu = n;
	}
	else{
		cntHansu = 99;
		for (int i = 100; i <= n; i++) {
			// arrI{1000의 자리, 100의자리, 10의자리, 1의자리}
			for (int j = 0; j < 4; j++) {
				int r = pow(10, 4 - j);
				int d = pow(10, 3 - j);
				arrI[j] = (i % r) / d;
			}
			
			if (i < 1000) {
				// 한수일 때만 한수의 개수 증가
				if (arrI[1] - arrI[2] == arrI[2] - arrI[3]) {
					cntHansu++;
				}
			}
			else {
				if (arrI[0] - arrI[1] == arrI[1] - arrI[2] &&
					arrI[1] - arrI[2] == arrI[2] - arrI[3]) {
					cntHansu++;
				}
			}
		}
	}

	// 한수의 개수 출력
	std::cout << cntHansu << std::endl;
}

int main() {
	Hansu();
}