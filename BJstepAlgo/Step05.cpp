#include<iostream>
#include<string>
using namespace std;

//1���� �迭

//5-1�ܰ� 10818
int arrN[1000000]{};
void MinMaxArr() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n{};
	int max{}, min{};
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arrN[i];
	}
	max = arrN[0];
	min = arrN[0];

	for (int i = 0; i < n; i++) {
		if (arrN[i] > max) max = arrN[i];
		if (arrN[i] < min) min = arrN[i];
	}
	cout << min << " " << max;
}

//5-2�ܰ� 2562
void MaximumValueArr() {
	int arrMaxN[9] = { 0 };
	int max = 0, locaMax = 0;
	for (int i = 0; i < 9; i++) {
		cin >> arrMaxN[i];
		if (arrMaxN[i] > max) {
			max = arrMaxN[i];
			locaMax = i + 1;
		}
	}
	cout << max << endl << locaMax;
}

//5-3�ܰ� 2577
void NumCountArr() {
	int a, b, c, numABC; //���� a, b, c, abc���� ��
	int count = 0; //numABC �ȿ� �ִ� ���ڵ� ���� ���� �뵵
	int arrCount[10] = { 0 }; // 0~9�� count�� ���� �迭

	cin >> a >> b >> c;
	numABC = a * b * c;
	string stringABC = to_string(numABC); //numABC�� ���ڿ��� �ٲ� ��. �ִ� 9�ڸ�
	char chNum; //stringABC�� ���ҿ� ���� 0~9..�� ���ڷ� �ٲ� ����;

	for (int i = 0; i < 10; i++) {
		//stringABC���ڿ��� ���� == i(int to char)���� ���ϴ� �ݺ���
		chNum = '0' + i; //int 0~9 to Char

		for (int j = 0; j < 9; j++) {
			//stringABC�� 0~8��°(=1���ڸ�~10^9���ڸ�) ���ұ��� ���� �ݺ���

			if (stringABC[j] == chNum) {
				count++;
			}

		}
		cout << count << endl;
		count = 0;
	}
}

//5-4�ܰ� 3052
void RemainArr() {
	int a, b = 42, cnt = 0;
	int arrRemain[10] = { 0 };
	int arrCnt[42] = { 0 };

	for (int i = 0; i < 10; i++) {
		cin >> a;
		arrRemain[i] = a % b;
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 42; j++) {
			if (arrRemain[i] == j) {
				arrCnt[j] += 1;
			}
		}
	}

	for (int i = 0; i < 42; i++) {
		if (arrCnt[i] != 0) {
			cnt++;
		}
	}
	cout << cnt;
}


// 5-5�ܰ� 1546
//int arrTest[] = { 0 }; // ����ǥ
//double modiTest[] = { 0 }; // ������ ����ǥ
//void AverageArr() {
//	int m{ 0 }; // ���� �� �ִ밪
//	double sum = 0;
//	int n; // ���� ��
//	double ave; // ���ο� ���
//
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		m = (m > arrTest[i]) ? m : arrTest[i];
//	}
//
//	for (int i = 0; i < n; i++) {
//		modiTest[i] = (double)arrTest[i] / m * 100;
//		sum += modiTest[i];
//	}
//	ave = sum / n;
//}
// 5-6�ܰ� 8958

// 5-7�ܰ� 4344
