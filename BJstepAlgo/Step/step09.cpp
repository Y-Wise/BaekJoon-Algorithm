#include <iostream>
#include <vector>
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

// [실패-시간초과] 9-4단계 1929번 소수 구하기
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
					else { std::cout << num << "\n"; } // 소수
				}
				// else{} //나누어 떨어지지 않으면 소수 아님. 다음 나누기로 넘어감
			}
		}
	}
}

int main() {
	CheckSosu();
	return 0;
}