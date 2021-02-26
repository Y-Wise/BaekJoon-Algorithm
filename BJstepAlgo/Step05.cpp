#include<iostream>
using namespace std;

//1차원 배열

//5-1단계 10818
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

//5-2단계 2562

//5-3단계 2577

//5-4단계 3052

//5-5단계 1546

//5-6단계 8958

//5-7단계 4344
