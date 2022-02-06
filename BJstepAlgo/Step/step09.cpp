#include <iostream>
#include <vector>
// 9-1단계 1978번 소수 찾기
void FindSosu() {
	int cntSosu{};
	int N{}; // 수의 개수 (1000이하)
	std::cin >> N;

	std::vector<int> sosu{}; // 1000까지 갈 수 있으니 배열보다 벡터
	int num{};
	for (int i = 0; i < N; i++) {
		std::cin >> num;
		sosu.push_back(num);
	}
	
	bool isSosu = false; // 소수인지 체크하는 변수
	for (int i = 0; i < N; i++) {
		if (sosu[i] == 1) { // 1은 무조건 소수 아님
			isSosu = false;
		}
		else { // 1 이외의 숫자들. 
			for (int j = 2; j <= sosu[i]; j++) {
				if (sosu[i] % j == 0) {
					if (j == sosu[i]) {
						// 자기자신으로 나누었을 때
						isSosu = true;
					}
					else {
						// 자기자신 이외의 것으로 나누어 떨어지면 소수 아님
						isSosu = false;
						break;
					}
				}
				// else: 나누어 떨어지지 않으면 다음 나누기로 넘어감
			}
		}
		// 소수인 숫자만 카운트
		if (isSosu == true) { cntSosu++; };
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
				std::cout << "i: " << i << std::endl;
				n /= i;
				break;
			}
		}
	}
}



int main() {
	Factorization();
	return 0;
}