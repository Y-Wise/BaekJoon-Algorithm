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

int main() {
	FindSosu();
	return 0;
}