#include<iostream>

// 8-1�ܰ� 1712�� ���ͺб���
void BreakEvenPoint()
{
	// 21�� ���� �ڿ���
	// ���� ��� A, ���� ��� B, ��Ʈ�� C����
	int a{}, b{}, c{}; 
	
	std::cin >> a >> b >> c;
	int num; // ��Ʈ�� ���� = a / (c - b);

	/* ���ͺб���
	�Ѽ��� > �Ѻ���� ���ʷ� �߻��ϴ� ����
	���� = c * num;
	��� = a + (b * num);
	(c-b) * num > a;
	num > a/(c-b);
	*/

	if (c - b <= 0) {
		num = -1;
	}
	else {
		num = a / (c - b) +1;
	}

	std::cout << num;
}

// 8-2�ܰ� 2292�� ����
int SumHoney(int n) {
	int sum = 2 + 3 * (n - 1) * (n - 2);
	return sum;
}
void Honeycomb() {
	// 1 7 19 37 61
	// 	   6 12 18 24
	// 1 + 6��(n-1)
	// 1 + 3(n-1)n-6(n-1) = numN = 1+3(n-1)(n-2)


	// 1 2 8 20 38 ..
	// +1 6 12 18 ..  6(k-1)
	// n=1: 1
	// n>1: 2+��6(k-1)
	//		=2+3(n-1)(n-2)


	int k{};
	int n{};
	std::cin >> n;
	if (n == 1) {
		k = 1;
	}
	else {
		k = 2;
		while (true) {
			if (n >= SumHoney(k) && n < SumHoney(k + 1)) {
				break;
			}
			else {
				k++;
			}
		}
	}
	std::cout << k;
}

int main() {
	Honeycomb();
}
