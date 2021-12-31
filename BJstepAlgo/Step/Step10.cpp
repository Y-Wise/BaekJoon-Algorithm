#include<iostream>
#include<cmath>
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
void RecurStar10(int n) {
	for (int i = 0; i < n / 3; i++) {
		for (int j = 0; j < n / 3; j++) {
			if (i == 1 && j == 1) {
				std::cout << " ";
			}
			else {
				std::cout << "*";
			}
		}
		std::cout << "\n";
	}
}

void Star10() { 
	int n{};
	int k{}; // n�� 3�� �� �ŵ��������� 1 <= k < 8
	std::cin >> n;

	RecurStar10(n);
}



// 10-4�ܰ� 11729�� �ϳ��� ž �̵� ����
/*
n=1: 1/0/0  -> 0/0/1
n=2: 1.2 // 		


*/
#include<queue>
void MovingHanoi(int n) {
	
	std::cout << " " << "\n";

}

void OrderOfHanoitop() {
	int n;
	std::cin >> n;
	std::queue<int> q;
	
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	MovingHanoi(n);
}

int main() {
	return 0;
}