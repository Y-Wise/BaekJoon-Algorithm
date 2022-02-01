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
	num = a / (c - b) + 1;
}

std::cout << num;
}

// 8-2단계 2292번 벌집
int SumHoney(int n) {
	int sum = 2 + 3 * (n - 1) * (n - 2);
	return sum;
}
void Honeycomb() {
	// 1 7 19 37 61
	// 	   6 12 18 24
	// 1 + 6∑(n-1)
	// 1 + 3(n-1)n-6(n-1) = numN = 1+3(n-1)(n-2)


	// 1 2 8 20 38 ..
	// +1 6 12 18 ..  6(k-1)
	// n=1: 1
	// n>1: 2+∑6(k-1)
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

// [실패] 8-3단계 1193 분수찾기
/*
1/1: 1
		1/2: 2 (1+1)
1/3: 6 (1+1+4 = 1+5)
1/4: 7 (1+1+4+1)
1/5: 15 (1+1+4+1+8 = 1+5+9)
1/6: 16 (1+1+4+1+8+1
1/7: 28 (1+1+4+1+8+13 = 1+5+9+13)

1/1: 1
2/1: 3
3/1: 4
4/1: 10
5/1: 11
6/1: 21
7/1: 22

1/1: 1
2/2: 5
3/3: 13
4/4: 25
*/
void FindBunsoo() {
	int x{};
	int bunja, bunmo{}; // 분자, 분모
	std::cin >> x;
	int nth{}; // 대각선의 몇 번째 줄에 해당하는지

	// nth 찾기
	int i = 1;
	while (true) {
		int temp = i * (i + 1) / 2;
		if (temp >= x) {
			nth = i;
			break;
		}
		i++;
	}
	int preSum = (nth - 1) * nth / 2; // nth 직전줄까지의 합
	int sub = x - preSum - 1; // nth번째 줄의 몇 번째에 해당하는지 - 1
	// 대각선이 홀짝의 몇 번째인지
	if (nth % 2 == 0) {
		bunmo = nth - sub;
		bunja = 1 + sub;
	}
	else {
		bunja = nth - sub;
		bunmo = 1 + sub;
	}

	std::cout << bunja << "/" << bunmo;
}

// [실패-시간초과] 8-4단계 2869 달팽이
void SnailUp() {
	int v{}; // 막대기 높이
	int a{}; // 낮에 오르는 높이
	int b{}; // 밤에 내려가는 높이

	int days{};
	std::cin >> a >> b >> v;
	int sum{};
	while (true) {
		days++;
		sum += a;
		if (sum >= v) {
			break;
		}
		sum -= b;
	}

	std::cout << days;
}
void SnailUp2() {
	int v{}; // 막대기 높이
	int a{}; // 낮에 오르는 높이
	int b{}; // 밤에 내려가는 높이
	int days{};
	std::cin >> a >> b >> v;
 
	// 1 ≤ B < A ≤ V ≤ 1,000,000,000
	if (a > b && v >= a) {
		days = (v - b) / (a - b);

		if ((v - b) % (a - b) != 0) { // 다음 날에 더 올라가야 할 때
			days++;
		}
	}

	std::cout << days;
	// Case 3 : 100 99 1,000,000,000 => 999,999,901
}


#include <vector>
// 8-5단계 10250 ACM 호텔
void ACMHotel() {
	int t{}; // 테스트 데이터
	int h{}, w{}, n{}; // 층 수, 층별 방 개수, 몇 번째 손님
	int floor{}; // xx 나머지
	int room{}; // yy 몫
	int roomNum{}; // xxyy
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		std::cin >> h >> w >> n;
		if (n % h == 0) {
			floor = h;  // 층의 꼭대기에 해당할 때
			room = n / h; // 방 호
		}
		else{
			floor = n % h; // 방 층
			room = n / h + 1; // 방 호
		}
		roomNum = floor * 100 + room;
		std::cout << roomNum << std::endl;
	}
}


// 8-6단계 2775 부녀회장
void WomenPresident() {
	const int MAX = 15;
	int apart[15][15] = { 0, }; // 아파트

	int T{}; // test case
	int k{}, n{}; // k층, n호

	// 0층은 i호에는 i명. 전체 층 0호는 무시
	for (int i = 1; i < 15; i++) {
		apart[0][i] = i;
	}


	// test case 입력
	std::cin >> T;

	// 층 수, 호 수 입력
	for (int i = 0; i < T; i++) {
		std::cin >> k >> n;

		for (int floor = 1; floor <= k; floor++) {
			for (int ho = 1; ho <= n; ho++) {
				apart[floor][ho] = apart[floor][ho - 1] + apart[floor - 1][ho];
			}
		}
		//// 테스터
		//for (int i = 14; i >= 0; i--) {
		//	for (int j = 0; j < 15; j++) {
		//		std::cout << apart[i][j] << ", ";
		//	}
		//	std::cout << std::endl;
		//}
		//std::cout << std::endl;
		std::cout << apart[k][n] << "\n";
	}
}


// 8-7단계 2839 설탕배달
void SugarPlant() {
	int N{}; // 배달해야하는 설탕 N kg
	std::cin >> N;
	int bongji{};

}


// [실패] 8-8단계 10757 큰수 A+B
void BigSum() {
	unsigned long long int A{}, B{};
	std::cin >> A >> B;
	std::cout << A + B;
}

int main() {
	while (true) {
		SugarPlant();

	}
	return 0;
} 