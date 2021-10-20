#include<iostream>

// 8-1�ܰ� 1712�� ���ͺб���
void BreakEvenPoint()
{
	int a{}; // ���� ��� A
	int b{}; // ���� ��� B
	int c{};// ��Ʈ�� C����

	std::cin >> a >> b >> c;

	int revenue{}; // ���� revenue = c * num;
	int expense{}; // ��� expense = a + (b * num);

	// �Ѽ��� > �Ѻ���� ���ʷ� �߻��ϴ� ���� == ���ͺб���
	int num; // ��Ʈ�� ���� num = a / (c - b);
	/*
	revenue > expense
	(c-b) * num > a
	num > a/(c-b)
	*/
	if (c - b != 0) {
		num = a / (c - b);
		if (num < 0) {
			num = -1;
		}
		else {
			num++;
		}
	}
	else {
		num = -1;
	}

	std::cout << num;
}

int main() {
	BreakEvenPoint();
}
