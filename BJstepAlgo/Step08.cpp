#include<iostream>

// 8-1단계 1712번 손익분기점
void BreakEvenPoint()
{
	// 21억 이하 자연수
	// 고정 비용 A, 가변 비용 B, 노트북 C만원
	int a{}, b{}, c{}; 
	
	std::cin >> a >> b >> c;
	int num; // 노트북 개수 = a / (c - b);

	/* 손익분기점
	총수익 > 총비용이 최초로 발생하는 지점
	수익 = c * num;
	비용 = a + (b * num);
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
