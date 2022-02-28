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


//11-4단계 1018
void PaintChess() {
	int M{}, N{};
	int count{};
	std::cin >> M >> N;

	char** chessArr = new char* [M];

	for (int i = 0; i < M; i++) {
		chessArr[i] = new char[N];
	}

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			std::cin >> chessArr[i][j];
		}
	}



	std::cout << count;

	for (int i = 0; i < M; i++) {
		delete[] chessArr[i];
	}
	delete[] chessArr;
}


//11-5단계 1436
void DirectorShom() {
	int N{}; // 10000이하
	int name = 666; // 영화제목
	std::cin >> N;

	if (N == 0) {
		name = 666;
	}
	else {
		for (int i = 0; i < N; i++) {
			if (name % 1000 == 666) {
				name += 1000;
			}
			
			// 5666 + 1000 = 6666일 때는 6660으로 리셋
			if (name % 10000 == 6666) {
				name -= (1000 + 4);
			}

		}
	}

	std::cout << name;
}
/*
x666y
6666
x=0 : 666
1666 2666 3666 4666 5666 6660~6669 7666 8666 9666
10666~15666 16660~16669 17666 18666 19666
20666~25666 26660~26669 27666 28666 29666
90666~95666 96660~96669 97666 98666 99666
100666 101666~105666 106660~106669 107666~109666
110666~115666 116660~116669 117666~119666
120666
130666
140666
150666~155666 156660~156669 157666~159666
160666~165666 166600
*/

int main() {
	DirectorShom();
}