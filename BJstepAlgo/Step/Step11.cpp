#include<iostream>
#include<vector>

//11-1�ܰ� 2798
void BlackJack() {
	int N{}, M{}; // ī�� ����, ������ ���ϴ� ����(3���� �պ��� ŭ)
	std::vector<int> cardNums;
	
	std::cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int num{};
		std::cin >> num;
		cardNums.push_back(num);
	}

	int sum{}, max{};
	bool failM = false;
	for (int i = 0; i < N-2; i++) {
		for (int j = i+1; j < N-1; j++) {
			for (int k = j + 1; k < N; k++) {
				sum = cardNums[i] + cardNums[j] + cardNums[k];
				if (sum > max && sum <= M) max = sum;
			}
		}
	}
	std::cout << max << "\n";
}


int main() {
}