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
void AplusB_7() {
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
void AplusB_8() {
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

//3-9�ܰ� 2438
void Star_1() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}

//3-10�ܰ� 2439
void Star_2() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = n; j > i; j--) {
			cout << " ";
		}

		for (int j = 1; j <= i; j++) {
			cout << "*";
		}

		cout << "\n";
	}
}

//3-11�ܰ� 10871_1
void SmallbyX() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, x;
	cin >> n >> x;
	int* seqA = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> seqA[i];
	}
	for (int i = 0; i < n; i++) {
		if (seqA[i] < x) {
			cout << seqA[i] << " ";
		}
	}
}

//3-11�ܰ� 10871_2
void SmallbyX_2() {
	int n, x;
	cin >> n >> x;
	int a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a < x) {
			cout << a << " ";
		}
	}
}
