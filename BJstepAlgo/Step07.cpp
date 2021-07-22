#include<iostream>
#include<string>

//7-1단계 11654
void ASCII() {
	char c{};
	std::cin >> c;
	std::cout << (int)c;
}

//7-2단계 11720
void SumN() {
	int n{ 0 }, sum{ 0 };
	std::string strN;
	int tmp{ 0 };
	std::cin >> n;
	std::cin >> strN;

	for (int i = 0; i < n; i++) {
		tmp = (int)strN[i] - 48;
		sum += tmp;
	}

	std::cout << sum;
}
