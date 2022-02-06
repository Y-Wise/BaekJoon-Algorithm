#include <iostream>
#include <vector>
// 9-1�ܰ� 1978�� �Ҽ� ã��
void FindSosu() {
	int cntSosu{};
	int N{}; // ���� ���� (1000����)
	std::cin >> N;

	std::vector<int> sosu{}; // 1000���� �� �� ������ �迭���� ����
	int num{};
	for (int i = 0; i < N; i++) {
		std::cin >> num;
		sosu.push_back(num);
	}
	
	bool isSosu = false; // �Ҽ����� üũ�ϴ� ����
	for (int i = 0; i < N; i++) {
		if (sosu[i] == 1) { // 1�� ������ �Ҽ� �ƴ�
			isSosu = false;
		}
		else { // 1 �̿��� ���ڵ�. 
			for (int j = 2; j <= sosu[i]; j++) {
				if (sosu[i] % j == 0) {
					if (j == sosu[i]) {
						// �ڱ��ڽ����� �������� ��
						isSosu = true;
					}
					else {
						// �ڱ��ڽ� �̿��� ������ ������ �������� �Ҽ� �ƴ�
						isSosu = false;
						break;
					}
				}
				// else: ������ �������� ������ ���� ������� �Ѿ
			}
		}
		// �Ҽ��� ���ڸ� ī��Ʈ
		if (isSosu == true) { cntSosu++; };
	}

	std::cout << cntSosu;
}

// 9-2�ܰ� 2581�� �Ҽ� ã��
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

int main() {
	Sosu();
	return 0;
}