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


//11-3�ܰ� 7568
void Bulk() {
	int N{}; // ����� ��
	int x_weight{}, y_height{}; // ������, Ű
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


//11-4�ܰ� 1018
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


//11-5�ܰ� 1436
void DirectorShom() {
	int N{}; // 10000����
	int unit = 1;
	int x{}, y{};
	int num = 0;
	std::cin >> N;
	/*
	x666y
	
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
	for(int i = 0; i < N; i++) {
		if (num == 0) num = 666;
		else {
			if ((num / 1000) % 10 == 5) {
				num += (1000 - 6);
			}
			else {
				num += 1000;
			}
		}
	}

	std::cout << num;
}


int main() {
	DirectorShom();
}