#include<iostream>
// 10-1�ܰ� 10872 ���丮��
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
	int N; // 0�̻��� ����
	std::cin >> N;
	std::cout << Factorial(N);
}


// 10-2�ܰ� 10870 �Ǻ���ġ �� 5
void Fibonacci5() {

}




int main() {
}