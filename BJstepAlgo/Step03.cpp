#include<iostream>
using namespace std;

//4단계 15552
//빠른 A+B
void FastAplusB() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t; //testCae <=1 000 000
	int a, b; //>=1, <=1000
	
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		cout << a + b<<"\n";
	}

}

//4단계 2741
//N 찍기
void PrintN() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cout << i << "\n";
	}
}

//4단계 2742
//기찍 N
void NPrint() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	for (int i = n; i >= 1; i--) {
		cout << i << "\n";
	}
}
