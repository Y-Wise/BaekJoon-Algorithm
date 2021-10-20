#include<iostream>

// 8-1단계 1712번 손익분기점
void BreakEvenPoint()
{
	int a{}; // 고정 비용 A
	int b{}; // 가변 비용 B
	int c{};// 노트북 C만원

	std::cin >> a >> b >> c;

	int revenue{}; // 수익 revenue = c * num;
	int expense{}; // 비용 expense = a + (b * num);

	// 총수입 > 총비용이 최초로 발생하는 지점 == 손익분기점
	int num; // 노트북 개수 num = a / (c - b);
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
