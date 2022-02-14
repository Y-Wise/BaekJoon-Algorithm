#include <iostream>
#include <vector>
#include <stdio.h>
#include <cmath>
#include <algorithm>
// 9-1단계 1978번 소수 찾기
void FindSosu() {
	int cntSosu{};
	int N{}; // 수의 개수 (1000이하)
	std::cin >> N;

	int num{};
	for (int i = 0; i < N; i++) {
		std::cin >> num;

		if (num == 1) { // 1은 무조건 소수 아님
		}
		else { // 1 이외의 숫자들. 
			for (int j = 2; j <= num; j++) {
				if (num % j == 0) {
					if (j == num) cntSosu++; // 자기자신으로 나누었을 때
					else break; // 자기자신 이외의 것으로 나누어 떨어지면 소수 아님
				}
				// else: 나누어 떨어지지 않으면 다음 나누기로 넘어감
			}
		}
	}

	std::cout << cntSosu;
}

// 9-2단계 2581번 소수
void Sosu() {
	int m{}, n{}; // M <= <= N
	int sumSosu{}; // 소수들의 합
	int minSosu{}; // 소수 중 최소 값

	std::cin >> m >> n;

	int cnt{};
	for (int num = m; num <= n; num++) {
		if (num == 1) { // 1은 무조건 소수 아님
		}
		else { // 1 이외의 숫자들. 
			for (int i = 2; i <= num; i++) {
				if (num % i == 0) {
					if (i != num) {
						// 자기자신 이외의 것으로 나누어 떨어지면 소수 아니므로 종료
						break;
					}
					else {
						// 자기자신으로 나누었을 때
						sumSosu += num;
						if (cnt == 0) { minSosu = num; cnt++; }
					}
				}
				// else: 나누어 떨어지지 않으면 다음 나누기로 넘어감
			}
		}
	}

	if (sumSosu == 0) {
		std::cout << -1;
	}
	else {
		std::cout << sumSosu << "\n" << minSosu;
	}
}

// 9-3단계 11653번 소인수분해
void Factorization() {
	int N{};
	std::cin >> N;
	int n = N;
	int i = 2;
	while (n != 1) {
		//std::cout << "n: " << n << std::endl;
		for (int i = 2; i <= n; i++) {
			if (n % i == 0) {
				std::cout << i << std::endl;
				n /= i;
				break;
			}
		}
	}
}

//[실패-시간초과] 9-4단계 1929번 소수 구하기
void CheckSosu() {
	int M = 1, N = 1;
	std::cin >> M >> N;

	for (int num = M; num <= N; num++) {
		if (num == 1) { // 1은 무조건 소수 아님
		}
		else { // 1 이외의 숫자들. 
			for (int j = 2; j <= num; j++) {
				if (num % j == 0) {
					if (j != num) break; // 자기자신 이외의 것으로 나누어 떨어지면 소수 아님
					else { std::cout << num << '\n'; } // 소수
				}
				// else{} //나누어 떨어지지 않으면 소수 아님. 다음 나누기로 넘어감
			}
		}
	}
}

// 9-4단계 1929번 소수 구하기 - 에라토스테네스의 체
void Eratos(int m, int n) {
	if (n <= 1) return;
	bool* PrimeArray = new bool[n + 1];
	
	// 시작은 모든칸이 소수로 판단
	for (int i = 2; i <= n; i++) {
		PrimeArray[i] = true;
	}

	for(int i = 2; i * i <= n; i++) {
		if (PrimeArray[i]) {
			for (int j = i * i; j <= n; j += i) PrimeArray[j] = false;
		}
	}

	for (int i = m; i <= n; i++) {
		if (i != 1) {
			if (PrimeArray[i]) printf("%d\n", i);
		}
	}
}
void CheckSosu2() {
	int M = 1, N = 1;
	std::cin >> M >> N;
	Eratos(M, N);
}

// 9-5단계 4948번 베르트랑 공준
void Eratos2(int m, int n) {
	if (n <= 1) return;
	bool* PrimeArray = new bool[n + 1];

	// 시작은 모든칸이 소수로 판단
	for (int i = 2; i <= n; i++) {
		PrimeArray[i] = true;
	}

	for (int i = 2; i * i <= n; i++) {
		if (PrimeArray[i]) {
			for (int j = i * i; j <= n; j += i) PrimeArray[j] = false;
		}
	}

	int cnt{};
	for (int i = m; i <= n; i++) {
		if (i != 1) {
			if (PrimeArray[i]) cnt++; 
		}
	}
	printf("%d\n", cnt);
}
void Bertrand() {
	// 베르트랑 공준 : n < x <= 2n인 x가 적어도 하나 존재한다.
	int N = 1; // 1 <= N <= 123,456
	std::cin >> N;
	while (N != 0) {
		Eratos2(N + 1, 2 * N);
		std::cin >> N;
	}
}

// 9-6단계 9020번 골드바흐의 추측
void GoldBahEratos3() {
	// 4 <= n <= 10000
	int n{};
	int T{};
	std::cin >> T;
	for (int k = 0; k < T; k++) {
		std::cin >> n;
		if (n % 2 == 0) {
			bool* PrimeArray = new bool[n + 1];

			// 시작은 모든칸이 소수로 판단
			for (int i = 2; i <= n; i++) {
				PrimeArray[i] = true;
			}

			for (int i = 2; i * i <= n; i++) {
				if (PrimeArray[i]) {
					for (int j = i * i; j <= n; j += i) PrimeArray[j] = false;
				}
			}

			int minA = n;
			int minB = n;
			int min = n;
			for (int i = 2; i < n; i++) {
				if (i <= n - i) {
					if (PrimeArray[i] && PrimeArray[n - i]) {
						if (min > n - i - i) {
							minA = i;
							minB = n - i;
						}
					}
				}
			}

			std::cout << minA << " " << minB << "\n";
			minA = minB = min = n;
		}

	}

}

// 9-7단계 1085번 직사각형에서 탈출
void EscapeSquare() {
	int x{}, y{};
	int w{}, h{}; // 오른쪽 위 꼭짓점 1 ≤ w, h ≤ 1, 000
	// 1 ≤ x ≤ w - 1
	// 1 ≤ y ≤ h - 1

	std::cin >> x >> y >> w >> h;
	int disX{}, disY{};
	if (w - x > x) disX = x;
	else disX = w - x;
	if (h - y > y) disY = y;
	else disY = h - y;

	int answ{};
	if (disX > disY) answ = disY;
	else answ = disX;

	std::cout << answ;
}

// 9-8단계 3009번 네 번째 점
void FourthDot() {
	int dots[4][2] = { 0 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			std::cin >> dots[i][j];
		}
	}
	
	dots[3][1] = 0;
	if (dots[0][0] == dots[1][0]) {
		dots[3][0] = dots[2][0];
	}
	else if (dots[0][0] == dots[2][0]) {
		dots[3][0] = dots[1][0];
	}
	else {
		dots[3][0] = dots[0][0];
	}

	if (dots[0][1] == dots[1][1]) {
		dots[3][1] = dots[2][1];
	}
	else if (dots[0][1] == dots[2][1]) {
		dots[3][1] = dots[1][1];
	}
	else {
		dots[3][1] = dots[0][1];
	}

	std::cout << dots[3][0] << " " << dots[3][1];
}

// 9-9단계 3009번 직각삼각형
void RightTri() {
	int triLengths[3];
	while (true) {
		for (int i = 0; i < 3; i++) {
			std::cin >> triLengths[i];
		}
		if (triLengths[0] == 0 && triLengths[1] == 0 && triLengths[2] == 0) break;


		std::sort(triLengths, triLengths+3);

		if (pow(triLengths[0], 2) + pow(triLengths[1], 2) == pow(triLengths[2], 2)) std::cout << "right\n";
		else std::cout << "wrong\n";
	}
}



// 9-11단계 1002번 터렛
void Turret(){
	int x1{}, y1{}, r1{}; //조규현
	int x2{}, y2{}, r2{}; //백승환
	
	int T{}, posCnt{};
	std::cin >> T;
	for (int i = 0; i < T; i++) {
		std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		int disPow = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);

		int rPPow = (r1 + r2) * (r1 + r2);
		int rMPow = (r1 - r2) * (r1 - r2);

		if (disPow == 0) {
			if (r1 == r2) posCnt = -1; // 같은 원
			else posCnt = 0; // 동심원
		}
		else {
			if (disPow == rMPow || disPow == rPPow) posCnt = 1;
			else if (disPow < rPPow && disPow > rMPow) posCnt = 2;
			else posCnt = 0;
		}

		std::cout << posCnt << "\n";
	}
}
void Turret2() {
	int x1{}, y1{}, r1{}; //조규현
	int x2{}, y2{}, r2{}; //백승환
	
	int T{}, posCnt{};
	std::cin >> T;
	for (int i = 0; i < T; i++) {
		std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		int disPow = pow(x1 - x2, 2) + pow(y1 - y2, 2);
		float dis = sqrt(disPow);

		int rPr = r1 + r2;

		int rMr{};
		if (r1 > r2) rMr = r1 - r2;
		else rMr = r2 - r1;

		if (x1 == x2 && y1 == y2) {
			if (r1 == r2) posCnt = -1; // 같은 원
			else posCnt = 0; // 동심원
		}
		else {
			if (dis < rPr && dis > rMr) posCnt = 2;
			else if (dis == rPr || dis == rMr)posCnt = 1;
			else posCnt = 0;
		}

		std::cout << posCnt << "\n";
	}
}

int main() {
	RightTri();
	return 0;
}