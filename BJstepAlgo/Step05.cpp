//#include<iostream>
//#include<string>
//#include<math.h>
//using namespace std;
//
////1���� �迭
//
////5-1�ܰ� 10818
//int arrN[1000000]{};
//void MinMaxArr() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n{};
//	int max{}, min{};
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arrN[i];
//	}
//	max = arrN[0];
//	min = arrN[0];
//
//	for (int i = 0; i < n; i++) {
//		if (arrN[i] > max) max = arrN[i];
//		if (arrN[i] < min) min = arrN[i];
//	}
//	cout << min << " " << max;
//}
//
////5-2�ܰ� 2562
//void MaximumValueArr() {
//	int arrMaxN[9] = { 0 };
//	int max = 0, locaMax = 0;
//	for (int i = 0; i < 9; i++) {
//		cin >> arrMaxN[i];
//		if (arrMaxN[i] > max) {
//			max = arrMaxN[i];
//			locaMax = i + 1;
//		}
//	}
//	cout << max << endl << locaMax;
//}
//
////5-3�ܰ� 2577
//void NumCountArr() {
//	int a, b, c, numABC; //���� a, b, c, abc���� ��
//	int count = 0; //numABC �ȿ� �ִ� ���ڵ� ���� ���� �뵵
//	int arrCount[10] = { 0 }; // 0~9�� count�� ���� �迭
//
//	cin >> a >> b >> c;
//	numABC = a * b * c;
//	string stringABC = to_string(numABC); //numABC�� ���ڿ��� �ٲ� ��. �ִ� 9�ڸ�
//	char chNum; //stringABC�� ���ҿ� ���� 0~9..�� ���ڷ� �ٲ� ����;
//
//	for (int i = 0; i < 10; i++) {
//		//stringABC���ڿ��� ���� == i(int to char)���� ���ϴ� �ݺ���
//		chNum = '0' + i; //int 0~9 to Char
//
//		for (int j = 0; j < 9; j++) {
//			//stringABC�� 0~8��°(=1���ڸ�~10^9���ڸ�) ���ұ��� ���� �ݺ���
//
//			if (stringABC[j] == chNum) {
//				count++;
//			}
//
//		}
//		cout << count << endl;
//		count = 0;
//	}
//}
//
////5-4�ܰ� 3052
//void RemainArr() {
//	int a, b = 42, cnt = 0;
//	int arrRemain[10] = { 0 };
//	int arrCnt[42] = { 0 };
//
//	for (int i = 0; i < 10; i++) {
//		cin >> a;
//		arrRemain[i] = a % b;
//	}
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 42; j++) {
//			if (arrRemain[i] == j) {
//				arrCnt[j] += 1;
//			}
//		}
//	}
//
//	for (int i = 0; i < 42; i++) {
//		if (arrCnt[i] != 0) {
//			cnt++;
//		}
//	}
//	cout << cnt;
//}
//
//
//// 5-5�ܰ� 1546
//void AverageArr() {
//	const int MAX_test = 1000;
//	int n; // ���� ��
//	double arrTest[MAX_test] = { 0 }; // ����ǥ
//	double modiTest[MAX_test] = { 0 }; // ������ ����ǥ
//	double m{ 0 }; // ���� �� �ִ밪
//	double sum = 0;
//	double ave; // ���ο� ���
//
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arrTest[i];
//		m = (arrTest[i] > m) ? arrTest[i] : m;
//	}
//
//	for (int i = 0; i < n; i++) {
//		modiTest[i] = arrTest[i] / m * 100;
//		sum += modiTest[i];
//	}
//	ave = sum / n;
//	cout << ave;
//}
//
//
//// 5-6�ܰ� 8958
//void QuizeOX() {
//	const int MAX_quize{ 80 }; // �ϳ��� ���̽��� �� ���� �ִ� ����
//	char arrCase[MAX_quize]{}; // ���̽��� ox �迭. �ι��ڷ� �ʱ�ȭ
//
//	int arrScore[] = { 0 }; // ���̽��� ���� �迭
//
//	int caseN; // case ��
//	cin >> caseN;
//
//	int n = 0; // while �ݺ��� ī��Ʈ
//	int cnt = 0; // ���ӵ� O�� ī��Ʈ
//	int sum = 0; // ���� ����
//	while (n < caseN) {
//		cin >> arrCase;
//
//		// ���̽��� ����
//		for (int i = 0; i < MAX_quize; i++) {
//			if (arrCase[i] == '\0') {
//				break;
//			}
//			else if (arrCase[i] == 'O' || arrCase[i] == 'o') {
//				cnt++;
//			}
//			else if (arrCase[i] == 'X' || arrCase[i] == 'x') {
//				cnt = 0;
//			}
//			else {
//			}
//			sum += cnt;
//
//		}
//		cout << sum << endl;
//
//		sum = 0;
//		cnt = 0;
//		n++;
//	}
//}
//
//
//// 5-7�ܰ� 4344
//void OverAve() {
//	const int MAX_N = 1000; // �׽�Ƽ ���̽��� �л��� �ִ� ��
//	double arrScoreN[MAX_N]{ }; // n���� �л����� ����
//
//	int caseN; // �׽�Ʈ ���̽��� ����
//	cin >> caseN;
//
//	int n; // �л� ��
//	double sum = 0;
//	double aveScore; // ���
//	double aveN;
//	int cnt = 0; // ����� �Ѵ� �л� ��
//	int c = 0;
//	while (c < caseN) {
//		cin >> n;
//		
//		for (int i = 0; i < n; i++) {
//			cin >> arrScoreN[i];
//			sum += arrScoreN[i];
//		}
//		aveScore = sum / n;
//
//		for (int i = 0; i < n; i++) {
//			if (arrScoreN[i] > aveScore) {
//				cnt++;
//			}
//		}
//
//		aveN = (double)cnt / n * 100;
//		cout << fixed;
//		cout.precision(3);
//		cout << aveN << "%" << endl;
//
//		c++;
//		sum = 0, cnt = 0; // �ʱ�ȭ
//	}
//}