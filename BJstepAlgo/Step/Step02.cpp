#include <iostream>
//2-6�ܰ� 2525
void OvenClock() {
	int si{}, boon{}; // 23����, 59����
	int time{}; // 1000 ����
	
	std::cin >> si >> boon;
	std::cin >> time;

	int resultSi = si + ((boon + time) / 60);
	if (resultSi >= 24) resultSi -= 24;

	int resultBoon = (boon + time) % 60;

	std::cout << resultSi << " " << resultBoon;
}

int main() {
	OvenClock();
}