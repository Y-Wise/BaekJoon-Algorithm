#include <iostream>
#include <algorithm>
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

//2-7단계 2480
void ThreeDice() {
	int reward{};
	int dicesArr[3] = {};
	
	for (int i = 0; i < sizeof(dicesArr)/sizeof(int); i++) {
		std::cin >> dicesArr[i];
	}

	if (dicesArr[0] == dicesArr[1] && dicesArr[1] == dicesArr[2]) {
		reward = 10000 + dicesArr[0] * 1000;
	}
	else if (dicesArr[0] == dicesArr[1] || dicesArr[0] == dicesArr[2] || dicesArr[1] == dicesArr[2]) {
		int same{};
		if (dicesArr[0] == dicesArr[1] || dicesArr[0] == dicesArr[2]) same = dicesArr[0];
		else same = dicesArr[1];
		reward = 1000 + same * 100;
	}
	else {
		int maxD = dicesArr[0];
		//maxD = std::max(dicesArr[0], std::max(dicesArr[1], dicesArr[2]));

		for(int i = 1; i < sizeof(dicesArr) / sizeof(int); i++) {
			maxD = std::max(maxD, dicesArr[i]);
		}

		reward = maxD * 100;
	}

	std::cout << reward << "\n";
}

