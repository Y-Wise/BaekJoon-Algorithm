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

// [실패] 8-4단계 2869 달팽이
void SnailUp() {
	int v{}; // 나무 막대 높이
	int a{}; // 낮에 올라가는 높이
	int b{}; // 밤에 내려오는 높이
	std::cin >> a >> b >> v;
	//((a-b) * (date-1)) + a >= v
	int date{1};
	int sum{};

	while (true) {
		sum += a;
		if (sum >= v) {
			std::cout << date;
			break;
		}
		else {
			sum -= b;
			date++;
		}
	}
}

void SnailUp2() {
	int a, b, v;
	std::cin >> a >> b >> v;
	//((a-b) * (date-1)) + a >= v
	int date{ 1 };
	int k = a - b;
	if (k > 0) {
		date = ((v - a) / k) + 1;
		if (((v - a) / k) >= 1) {
			std::cout << date;
		}
		else {
			std::cout << date+1;
		}
	}
}

void SnailUp3() {
	int a, b, v;
	std::cin >> a >> b >> v;
	int k = a - b;
	// (date)*a - (date-1) * b >= v
	// date*(a-b) + b >= v
	// date >= (v-b)/k
	if (k > 0) {
		int date = ((v - b) / k);
		if (date <= 1) {
			std::cout << date+1;
		}
		else {
			std::cout << date;
		}
	}
}

//int WPSum(int a, int b) {
//	// k: 0층~14층, n: 1호~14호(=> 0 1.. 14 => 15칸)
//	const int MAX = 15;
//	int member[MAX][MAX] = {};
//	for (int j = 1; j < MAX; j++) {
//		member[0][j] = j;
//	}
//
//	int sum{};
//	for (int i = 0; i < MAX; i++) {
//		for (int j = 1; j < MAX; j++) {
//			sum += member[i][j];
//		}
//	}
//}

/*
1 1 += W(0, 1) = 0+=1 = 1
1 2 += W
*/
// [실패] 8-단계 2775 부녀회장
void WomenPresident() {
	const int MAX = 15;
	int T{}; // test case
	int k{}, n{};

	// 인원수


	// test case 입력
	std::cin >> T;

	// 층 수, 호 수 입력
	for (int i = 0; i < T; i++) {
		std::cin >> k >> n;
	}

	// 각 집들 SUM


	//for (int i = 0; i < k; i++) {
	//	for (int j = 0; j < n; j++) {
	//		std::cout << i << "층 " << j << "호: " << member[i][j] << std::endl;
	//	}
	//}
	//// 해당 집의 거주민 출력
	//for (int i = 0; i < T; i++) {
	//}
}

// [실패] 8-8단계 10757 큰수 A+B
void BigSum() {
	unsigned long long int A{}, B{};
	std::cin >> A >> B;
	std::cout << A + B;
}

int main() {
	FindBunsoo();
	return 0;
}