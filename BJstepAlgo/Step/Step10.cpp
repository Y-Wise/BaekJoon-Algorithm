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

// 10-2�ܰ� 10870 �Ǻ���ġ �� 5
int Fibonacci5(int n) {
	int a, b;
	if (n == 0) return 0;
	else if(n == 1) return 1;
	else {
		return Fibonacci5(n - 1) + Fibonacci5(n - 2);
	}
}

//int main() {
//	int N; // 0�̻��� ����
//	std::cin >> N;
//	std::cout << Fibonacci5(N);
//}
//
////f5
////f4+f3
////f3+      f2 +     f2+  f1
////f2+f1 + f1+f0  +  1+0 + 1


// 10-3�ܰ� 2447�� �� ��� - 10
void Start10() {
	int countStar{};
	int k; // n�� 3�� �� �ŵ���������
	int n{};

	std::cin >> n;

	int tempN{};
	while (tempN == 1) {
		countStar++;
		tempN = n / 3;
	}

	for (int i = 0; i < tempN; i++) {
		std::cout << "*";
	}
}

