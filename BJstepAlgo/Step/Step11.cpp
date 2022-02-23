#include<iostream>
#include<vector>

//11-1단계 2798
void BlackJack() {
	int N{}, M{}; // 카드 개수, 딜러가 말하는 숫자(3장의 합보다 큼)
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

//11-3단계 7568
void Bulk() {
	int N{}; // 사람의 수
	int x_weight{}, y_height{}; // 몸무게, 키
	std::cin >> N;

	std::vector<int> xAll;
	std::vector<int> yAll;

	for (int i = 0; i < N; i++) {
		std::cin >> x_weight >> y_height;

		xAll.push_back(x_weight);
		yAll.push_back(y_height);
	}

	std::vector<int> rankAll(N, 1);
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (xAll[i] < xAll[j]) {
				if (yAll[i] < yAll[j]) {
					rankAll[i]++;
				}
			}
		}
	}

	for (int i = 0; i < N; i++) {
		std::cout << rankAll[i] << " ";
	}
}

int main() {
	Bulk();
}