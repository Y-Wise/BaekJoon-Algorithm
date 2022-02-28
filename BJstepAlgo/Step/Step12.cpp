//12-1´Ü°è 2750
#include<iostream>
#include<algorithm>
#include<vector>
void sortNum() {
	int N{};
	std::cin >> N;

	std::vector<int> numVec;
	for (int i = 0; i < N; i++) {
		int num{};
		std::cin >> num;
		numVec.push_back(num);
	}

	std::sort(numVec.begin(), numVec.end());

	for (int i = 0; i < N; i++) {
		std::cout << numVec[i] << "\n";
	}
}