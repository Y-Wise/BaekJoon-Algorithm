#include<iostream>
#include<vector>
#include<algorithm>
void BlackJack() {
	int N{}, M{}; // 카드 개수, 딜러가 말하는 숫자(3장의 합보다 큼)
	std::vector<int> cardNums;
	
	std::cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int num{};
		std::cin >> num;
		cardNums.push_back(num);
	}

	std::sort(cardNums.begin(), cardNums.end(), std::greater<int>());

	for (int i = 0; i < N; i++) {
		std::cout << cardNums[i] << " ";
	}

	int sum{};
	bool failM = false;
	for (int i = 0; i < N; i++) {
		sum += cardNums[i];
		if (sum > M) sum -= cardNums[i]; continue;

		for (int j = i+1; j < N; j++) {
			sum += cardNums[j];
			if (sum > M) sum -= cardNums[j]; continue;

			for (int k = j+1; k < N; k++) {
				sum += cardNums[k];
				if (sum <= M) {
					failM = false;
					break;
				}
				else {
					sum -= cardNums[k];
					failM = true;
				}
			}
			if (failM == true) sum -= cardNums[j];
			else break;
		}
		if (failM == true) sum -= cardNums[i];
		else break;
	}
	std::cout << sum << "\n";
}

int main() {
	BlackJack();
}