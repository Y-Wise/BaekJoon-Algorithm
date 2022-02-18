#include <iostream>
//2-6단계 2525
void OvenClock() {
	int si{}, boon{}; // 23이하, 59이하
	int time{}; // 1000 이하
	
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