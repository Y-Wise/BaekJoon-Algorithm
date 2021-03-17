//#include<iostream>
//#include<string>
//#include<math.h>
//using namespace std;
//
////1차원 배열
//
////5-1단계 10818
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
////5-2단계 2562
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
////5-3단계 2577
//void NumCountArr() {
//	int a, b, c, numABC; //정수 a, b, c, abc곱한 거
//	int count = 0; //numABC 안에 있는 숫자들 개수 세는 용도
//	int arrCount[10] = { 0 }; // 0~9의 count를 담을 배열
//
//	cin >> a >> b >> c;
//	numABC = a * b * c;
//	string stringABC = to_string(numABC); //numABC를 문자열로 바꾼 것. 최대 9자리
//	char chNum; //stringABC의 원소와 비교할 0~9..를 문자로 바꿀 변수;
//
//	for (int i = 0; i < 10; i++) {
//		//stringABC문자열의 원소 == i(int to char)인지 비교하는 반복문
//		chNum = '0' + i; //int 0~9 to Char
//
//		for (int j = 0; j < 9; j++) {
//			//stringABC의 0~8번째(=1의자리~10^9의자리) 원소까지 비교할 반복문
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
////5-4단계 3052
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
//// 5-5단계 1546
//void AverageArr() {
//	const int MAX_test = 1000;
//	int n; // 과목 수
//	double arrTest[MAX_test] = { 0 }; // 성적표
//	double modiTest[MAX_test] = { 0 }; // 조작한 성적표
//	double m{ 0 }; // 성적 중 최대값
//	double sum = 0;
//	double ave; // 새로운 평균
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
//// 5-6단계 8958
//void QuizeOX() {
//	const int MAX_quize{ 80 }; // 하나의 케이스에 들어갈 퀴즈 최대 개수
//	char arrCase[MAX_quize]{}; // 케이스별 ox 배열. 널문자로 초기화
//
//	int arrScore[] = { 0 }; // 케이스별 점수 배열
//
//	int caseN; // case 수
//	cin >> caseN;
//
//	int n = 0; // while 반복문 카운트
//	int cnt = 0; // 연속된 O를 카운트
//	int sum = 0; // 최종 점수
//	while (n < caseN) {
//		cin >> arrCase;
//
//		// 케이스별 점수
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
//// 5-7단계 4344
//void OverAve() {
//	const int MAX_N = 1000; // 테스티 케이스별 학생의 최대 수
//	double arrScoreN[MAX_N]{ }; // n명의 학생들의 점수
//
//	int caseN; // 테스트 케이스의 개수
//	cin >> caseN;
//
//	int n; // 학생 수
//	double sum = 0;
//	double aveScore; // 평균
//	double aveN;
//	int cnt = 0; // 평균을 넘는 학생 수
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
//		sum = 0, cnt = 0; // 초기화
//	}
//}