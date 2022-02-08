#include <iostream>
#include <vector>
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

// [����-�ð��ʰ�] 9-4�ܰ� 1929�� �Ҽ� ���ϱ�
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
					else { std::cout << num << "\n"; } // �Ҽ�
				}
				// else{} //������ �������� ������ �Ҽ� �ƴ�. ���� ������� �Ѿ
			}
		}
	}
}

int main() {
	CheckSosu();
	return 0;
}