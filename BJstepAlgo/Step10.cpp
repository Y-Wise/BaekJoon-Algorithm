#include<iostream>
// 10단계 10872 팩토리얼
// n*(n-1)*(n-2)*...2*1
int FacN(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return n * FacN(n - 1);
	}
}
void Factorial() {
	int N; // 0이상의 정수
	std::cin >> N;
	std::cout << FacN(N);
}

int main() {
	Factorial();
}