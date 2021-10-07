#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

//================�Լ�=======================
//6-1�ܰ� 15596
long long sum(vector<int> &a) {
	long long ans = 0;
	for (int i = 0; i < a.size(); i++) {
		ans += a[i];
	}
	return ans;
}

//6-2�ܰ� 4673
int d(int n) {
	// n <= 10000
	int tmpN = n;
	int sum = n;

	//n + n�� �ڸ��� ��
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

//6-3�ܰ� 1065
void Hansu() {
	// n ������ ���� �� �ڸ������� ���������� ��(�Ѽ�)�� ���� ���
	// 1 <= n <= 1000
	//���ڸ��� : ���� �Ѽ�(1~9)
	//���ڸ��� : ���� �Ѽ�(1~9)
	//*���ڸ��� : �� �κи� ���ϸ� ��*
	//���ڸ��� : 1000 (�Ѽ� �ƴ�)

	int n; // ������ n
	int cntHansu{0}; // �Ѽ��� ��ü ����
	int arrI[] = {0, 0, 0, 0}; // �ڸ����� ���� �迭�� �ֱ�

	// ������ N �Է� �ޱ�
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
			// arrI{1000�� �ڸ�, 100���ڸ�, 10���ڸ�, 1���ڸ�}
			for (int j = 0; j < 4; j++) {
				int r = pow(10, 4 - j);
				int d = pow(10, 3 - j);
				arrI[j] = (i % r) / d;
			}
			
			if (i < 1000) {
				// �Ѽ��� ���� �Ѽ��� ���� ����
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

	// �Ѽ��� ���� ���
	std::cout << cntHansu << std::endl;
}

int main() {
	Hansu();
}