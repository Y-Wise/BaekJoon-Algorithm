#include<iostream>
using namespace std;
// ���Ʈ����
//2798�� ����
void BlackJack() {
	int numN, maxM; //N��, �ִ� M
	int cardSum = 0; //ī�� ����
	int cardNum;
	int max = 0;

	cin >> numN >> maxM;
	int *cardNumArr = new int[numN];

	for (int i = 0; i < numN; i++) {
		cin >> cardNumArr[i];
	}

	for (int i = 0; i < numN - 2; i++) {
		for (int j = i + 1; j < numN - 1; j++) {
			for (int k = j + 1; k < numN; k++) {
				cardSum = cardNumArr[i] + cardNumArr[j] + cardNumArr[k];
				if (cardSum <= maxM) {
					if (maxM - cardSum < maxM - max) {
						max = cardSum;
					}
				}
			}
		}
	}
	std::cout << max;
}