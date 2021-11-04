#include<iostream>
// 10-1단계 10872 팩토리얼
// n*(n-1)*(n-2)*...2*1
int Factorial(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return n * Factorial(n - 1);
	}
}
void FacN() {
	int N; // 0이상의 정수
	std::cin >> N;
	std::cout << Factorial(N);
}


// 10-2단계 10870 피보나치 수 5
void Fibonacci5() {

}




int main() {
}