#include<iostream>
using namespace std;

//3-4�ܰ� 15552
//���� A+B
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

//3-5�ܰ� 2741
//N ���
void PrintN() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cout << i << "\n";
	}
}

//3-6�ܰ� 2742
//���� N
void NPrint() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	for (int i = n; i >= 1; i--) {
		cout << i << "\n";
	}
}

//3-7�ܰ� 11021
void AplusBminus7() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	int a, b, sum;
	for (int i = 1; i <= t; i++) {
		cin >> a >> b;
		sum = a + b;
		cout << "Case #" << i << ": " << sum << "\n";

	}
}

//3-8�ܰ� 11022
void AplusBminus8() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	int a, b, sum;
	for (int i = 1; i <= t; i++) {
		cin >> a >> b;
		sum = a + b;
		cout << "Case #" << i << ": " << a << " + " << b << " = " << sum << "\n";

	}
}