#include<iostream>
#include "function.h"
using namespace std;

int main() {
	int n, x, a;
	cin >> n >> x;
	int seqA[] = { 0, };
	for (int i = 0; i < n; i++) {
		cin >> a;
		seqA[i] = a;
	}
	for (int i = 0; i < n; i++) {
		if (seqA[i] < x) {
			cout << seqA[i] << " ";
		}
	}
}