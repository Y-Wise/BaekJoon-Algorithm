#include<iostream>
#include<string>
using namespace std;

//1���� �迭

//5-1�ܰ� 10818
int arrN[1000000]{};
void MinMax() {
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
void MaximumValue() {
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
void NumCount() {
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

//5-5�ܰ� 1546

//5-6�ܰ� 8958

//5-7�ܰ� 4344
