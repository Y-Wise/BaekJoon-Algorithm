#include<iostream>
using namespace std;

//1���� �迭

//5-1�ܰ� 10818
int arrN[1000000]{};
void MinMax() {
	int n{};
	int max{}, min{};
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arrN[i];
	}
	max = arrN[0];
	min = arrN[0];

	for (int i = 0; i < n; i++) {
		if (arrN[i] > max) max = arrN[i];
		if (arrN[i] < min) min = arrN[i];
	}
	cout << min << " " << max;
}

//5-2�ܰ� 2562

//5-3�ܰ� 2577

//5-4�ܰ� 3052

//5-5�ܰ� 1546

//5-6�ܰ� 8958

//5-7�ܰ� 4344
