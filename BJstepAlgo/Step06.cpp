#include<iostream>
#include<vector>
using namespace std;

long long sum(vector<int>& a);

int main() {
	vector<int> a = {};
	cout << sum(a) << endl;

}

//================�Լ�=======================
//6-1�ܰ� 15596
long long sum(vector<int> &a) {
	long long ans = 0;
	for (int i = 0; i < a.size(); i++) {
		ans += a[i];
	}
	return ans;
}

//6-2�ܰ� 4673

//6-3�ܰ� 1065