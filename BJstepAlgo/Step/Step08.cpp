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
	num = a / (c - b) + 1;
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

// [����] 8-3�ܰ� 1193 �м�ã��
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
	int bunja, bunmo{}; // ����, �и�
	std::cin >> x;
	int nth{}; // �밢���� �� ��° �ٿ� �ش��ϴ���

	// nth ã��
	int i = 1;
	while (true) {
		int temp = i * (i + 1) / 2;
		if (temp >= x) {
			nth = i;
			break;
		}
		i++;
	}
	int preSum = (nth - 1) * nth / 2; // nth �����ٱ����� ��
	int sub = x - preSum - 1; // nth��° ���� �� ��°�� �ش��ϴ��� - 1
	// �밢���� Ȧ¦�� �� ��°����
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

// [����-�ð��ʰ�] 8-4�ܰ� 2869 ������
void SnailUp() {
	int v{}; // ����� ����
	int a{}; // ���� ������ ����
	int b{}; // �㿡 �������� ����

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
	int v{}; // ����� ����
	int a{}; // ���� ������ ����
	int b{}; // �㿡 �������� ����
	int days{};
	std::cin >> a >> b >> v;
 
	// 1 �� B < A �� V �� 1,000,000,000
	if (a > b && v >= a) {
		days = (v - b) / (a - b);

		if ((v - b) % (a - b) != 0) { // ���� ���� �� �ö󰡾� �� ��
			days++;
		}
	}

	std::cout << days;
	// Case 3 : 100 99 1,000,000,000 => 999,999,901
}


#include <vector>
// 8-5�ܰ� 10250 ACM ȣ��
void ACMHotel() {
	int t{}; // �׽�Ʈ ������
	int h{}, w{}, n{}; // �� ��, ���� �� ����, �� ��° �մ�
	int floor{}; // xx ������
	int room{}; // yy ��
	int roomNum{}; // xxyy
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		std::cin >> h >> w >> n;
		if (n % h == 0) {
			floor = h;  // ���� ����⿡ �ش��� ��
			room = n / h; // �� ȣ
		}
		else{
			floor = n % h; // �� ��
			room = n / h + 1; // �� ȣ
		}
		roomNum = floor * 100 + room;
		std::cout << roomNum << std::endl;
	}
}


// 8-6�ܰ� 2775 �γ�ȸ��
void WomenPresident() {
	const int MAX = 15;
	int apart[15][15] = { 0, }; // ����Ʈ

	int T{}; // test case
	int k{}, n{}; // k��, nȣ

	// 0���� iȣ���� i��. ��ü �� 0ȣ�� ����
	for (int i = 1; i < 15; i++) {
		apart[0][i] = i;
	}


	// test case �Է�
	std::cin >> T;

	// �� ��, ȣ �� �Է�
	for (int i = 0; i < T; i++) {
		std::cin >> k >> n;

		for (int floor = 1; floor <= k; floor++) {
			for (int ho = 1; ho <= n; ho++) {
				apart[floor][ho] = apart[floor][ho - 1] + apart[floor - 1][ho];
			}
		}
		//// �׽���
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


// 8-7�ܰ� 2839 �������
void SugarPlant() {
	int N{}; // ����ؾ��ϴ� ���� N kg
	std::cin >> N;
	int bongji{};

}


// [����] 8-8�ܰ� 10757 ū�� A+B
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