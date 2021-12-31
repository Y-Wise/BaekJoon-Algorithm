#include<iostream>
#include<cmath>
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

// 10-2단계 10870 피보나치 수 5
int Fibonacci5(int n) {
	int a, b;
	if (n == 0) return 0;
	else if(n == 1) return 1;
	else {
		return Fibonacci5(n - 1) + Fibonacci5(n - 2);
	}
}

//int main() {
//	int N; // 0이상의 정수
//	std::cin >> N;
//	std::cout << Fibonacci5(N);
//}
//
////f5
////f4+f3
////f3+      f2 +     f2+  f1
////f2+f1 + f1+f0  +  1+0 + 1


// 10-3단계 2447번 별 찍기 - 10
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
	int k{}; // n이 3의 몇 거듭제곱인지 1 <= k < 8
	std::cin >> n;

	RecurStar10(n);
}



// 10-4단계 11729번 하노이 탑 이동 순서
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