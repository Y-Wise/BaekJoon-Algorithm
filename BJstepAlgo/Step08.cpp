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

int main() {
}
