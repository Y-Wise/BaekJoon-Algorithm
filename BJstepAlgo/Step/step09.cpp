#include <iostream>
#include <vector>
#include <stdio.h>
// 9-1�ܰ� 1978�� �Ҽ� ã��
void FindSosu() {
	int cntSosu{};
	int N{}; // ���� ���� (1000����)
	std::cin >> N;

	int num{};
	for (int i = 0; i < N; i++) {
		std::cin >> num;

		if (num == 1) { // 1�� ������ �Ҽ� �ƴ�
		}
		else { // 1 �̿��� ���ڵ�. 
			for (int j = 2; j <= num; j++) {
				if (num % j == 0) {
					if (j == num) cntSosu++; // �ڱ��ڽ����� �������� ��
					else break; // �ڱ��ڽ� �̿��� ������ ������ �������� �Ҽ� �ƴ�
				}
				// else: ������ �������� ������ ���� ������� �Ѿ
			}
		}
	}

	std::cout << cntSosu;
}

// 9-2�ܰ� 2581�� �Ҽ�
void Sosu() {
	int m{}, n{}; // M <= <= N
	int sumSosu{}; // �Ҽ����� ��
	int minSosu{}; // �Ҽ� �� �ּ� ��

	std::cin >> m >> n;

	int cnt{};
	for (int num = m; num <= n; num++) {
		if (num == 1) { // 1�� ������ �Ҽ� �ƴ�
		}
		else { // 1 �̿��� ���ڵ�. 
			for (int i = 2; i <= num; i++) {
				if (num % i == 0) {
					if (i != num) {
						// �ڱ��ڽ� �̿��� ������ ������ �������� �Ҽ� �ƴϹǷ� ����
						break;
					}
					else {
						// �ڱ��ڽ����� �������� ��
						sumSosu += num;
						if (cnt == 0) { minSosu = num; cnt++; }
					}
				}
				// else: ������ �������� ������ ���� ������� �Ѿ
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

// 9-3�ܰ� 11653�� ���μ�����
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

//[����-�ð��ʰ�] 9-4�ܰ� 1929�� �Ҽ� ���ϱ�
void CheckSosu() {
	int M = 1, N = 1;
	std::cin >> M >> N;

	for (int num = M; num <= N; num++) {
		if (num == 1) { // 1�� ������ �Ҽ� �ƴ�
		}
		else { // 1 �̿��� ���ڵ�. 
			for (int j = 2; j <= num; j++) {
				if (num % j == 0) {
					if (j != num) break; // �ڱ��ڽ� �̿��� ������ ������ �������� �Ҽ� �ƴ�
					else { std::cout << num << '\n'; } // �Ҽ�
				}
				// else{} //������ �������� ������ �Ҽ� �ƴ�. ���� ������� �Ѿ
			}
		}
	}
}

// 9-4�ܰ� 1929�� �Ҽ� ���ϱ� - �����佺�׳׽��� ü
void Eratos(int m, int n) {
	if (n <= 1) return;
	bool* PrimeArray = new bool[n + 1];
	
	// ������ ���ĭ�� �Ҽ��� �Ǵ�
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

// 9-5�ܰ� 4948�� ����Ʈ�� ����
void EratosChea(int m, int n) {
	if (n <= 1) return;
	bool* PrimeArray = new bool[n + 1];

	// ������ ���ĭ�� �Ҽ��� �Ǵ�
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
	// ����Ʈ�� ���� : n < x <= 2n�� x�� ��� �ϳ� �����Ѵ�.
	int N = 1; // 1 <= N <= 123,456
	std::cin >> N;
	while (N != 0) {
		EratosChea(N + 1, 2 * N);
		std::cin >> N;
	}
}


int main() {
	Bertrand();
	return 0;
}