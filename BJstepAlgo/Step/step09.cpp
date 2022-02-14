#include <iostream>
#include <vector>
#include <stdio.h>
#include <cmath>
#include <algorithm>
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
void Eratos2(int m, int n) {
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
		Eratos2(N + 1, 2 * N);
		std::cin >> N;
	}
}

// 9-6�ܰ� 9020�� �������� ����
void GoldBahEratos3() {
	// 4 <= n <= 10000
	int n{};
	int T{};
	std::cin >> T;
	for (int k = 0; k < T; k++) {
		std::cin >> n;
		if (n % 2 == 0) {
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

// 9-7�ܰ� 1085�� ���簢������ Ż��
void EscapeSquare() {
	int x{}, y{};
	int w{}, h{}; // ������ �� ������ 1 �� w, h �� 1, 000
	// 1 �� x �� w - 1
	// 1 �� y �� h - 1

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

// 9-8�ܰ� 3009�� �� ��° ��
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

// 9-9�ܰ� 3009�� �����ﰢ��
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



// 9-11�ܰ� 1002�� �ͷ�
void Turret(){
	int x1{}, y1{}, r1{}; //������
	int x2{}, y2{}, r2{}; //���ȯ
	
	int T{}, posCnt{};
	std::cin >> T;
	for (int i = 0; i < T; i++) {
		std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		int disPow = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);

		int rPPow = (r1 + r2) * (r1 + r2);
		int rMPow = (r1 - r2) * (r1 - r2);

		if (disPow == 0) {
			if (r1 == r2) posCnt = -1; // ���� ��
			else posCnt = 0; // ���ɿ�
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
	int x1{}, y1{}, r1{}; //������
	int x2{}, y2{}, r2{}; //���ȯ
	
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
			if (r1 == r2) posCnt = -1; // ���� ��
			else posCnt = 0; // ���ɿ�
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