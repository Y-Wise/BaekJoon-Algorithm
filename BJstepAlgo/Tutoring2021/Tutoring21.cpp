#include "Tutoring21.h"
//2021.11.22

// 10818번 최소, 최대 -sort 이용
void Tutoring21::MinMaxSort1() {
	int n{};
	int a[MAX] = {};
	std::cin >> n;
	if (n >= 1) {
		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
		}

		std::sort(a, a + n);

		std::cout << a[0] << " " << a[n - 1] << std::endl;
	}
	return;
}
// 10818번 최소, 최대 -sort 이용
//void MinMaxSort2() {
//	int n;
//	std::cin >> n;
//	//int a[n];
//	if (n >= 1) {
//		for (int i = 0; i < n; i++) {
//			std::cin >> a[i];
//		}
//
//		std::sort(a, a + n);
//
//		std::cout << a[0] << " " << a[n - 1] << std::endl;
//	}
//	return;
//}

// 10818번 최소, 최대 -min, max 이용
void Tutoring21::MinMax() {
	int n{}, input{}, min_num = MAX, max_num = -MAX;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> input;
		min_num = std::min(min_num, input);
		min_num = std::max(max_num, input);
	}

	std::cout << min_num << " " << max_num;

	return;
}

/*
substr() : 추출 해주는 기능
substr(n) = 인덱스4부터 추출
substr(a, b) = 인덱스 a부터 b개의 글자들 추출

erase() : 지워버림
erase(a, b) = 인덱스 a부터 b까지의 글자들 없애버림

clear() : 문자열 비워버림 = > length가 0이 됨

str1 + str2 = "abc" + "dfef" = "abcdfef"

find("abcd") : "abcd"이라는 글자를 찾아줌.a가 있는 위치(인덱스)를 출력
*/

// 11721번 열 개씩 끊어 출력하기 - string.substr()
//void StringSub() {
//	std::string str1{};
//	std::cin >> str1;
//	for (int i = 0; i < str1.length(); i+=10) {
//		std::cout<< str1.substr(0+i, 10+i)<<std::endl;
//		if () {
//
//		}
//	}
//	return;
//}

// 11721번 열 개씩 끊어 출력하기 - string.erase(0, 10)
void Tutoring21::StringErase() {
	std::string str1{};
	std::cin >> str1;

	while (true) {
		std::cout << str1.substr(0, 10) << std::endl;
		str1.erase(0, 10);
		if (str1.length() == 0) {
			break;
		}
	}
	return;
}

void Tutoring21::StringTutor() {
	std::string str1{};
	std::cin >> str1;

	while (true) {
		if (str1.length() == 0) {
			break;
		}
		std::cout << str1.substr(0, 10) << std::endl;
		str1.erase(0, 10);
	}
	return;
}


/*
stack<int> s; : int형 stack
s.push(n) : n을 넣음
s.top() : 스택에서 가장 위에 있는거
s.pop() : 가장  위에 있는 거(가장 마지막에 넣은 요소 삭제)
s.empty() : 비어있는지 여부
s.size() : 스택의 크기(원소 개수)
// 스택의 모든 요소 출력하는 반복문
while (!s.empty()) { //스택이 빌 때까지 반복
	cout << s.top() << ' '; // 스택에서 가장 위에 있는 요소 출력
	s.pop(); // 출력한 데이터 삭제
}
*/
// 17608번 막대기 - stack
void Tutoring21::StickStack() {
	int n{}, h{}, maxH{}, cntStick{};
	std::stack<int> s;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> h;
		s.push(h);
	}

	while (!s.empty()) {
		if (maxH < s.top()) {
			maxH = s.top();
			cntStick++;
		}
		s.pop(); // 출력한 데이터 삭제
	}

	std::cout << cntStick;
	return;
}

/*
queue
front()
back()
empty()
size()
while (!q.empty()) { //스택이 빌 때까지 반복
	cout << q.front() << ' '; // 스택에서 가장 위에 있는 요소 출력
	q.pop(); // 출력한 데이터 삭제
}
*/


// 요세푸스


//2021.11.29

// 2161번 카드1
void Tutoring21::Card1() {
	std::queue<int> q;
	int N{};

	std::cin >> N;
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	while (!q.empty()) {
		std::cout << q.front() << " "; // 버릴 숫자 출력
		q.pop(); // 제일 위에 있는 숫자 out
		if (q.empty()) break;
		else {
			q.push(q.front()); // 그 다음 숫자를 제일 뒤로 옮기기
			q.pop(); // 제일 뒤로 옮긴 숫자 out
		}
	}
}

// vector
/*
vector<int> v;
v.push_back; // 마지막 원소 뒤에 값을 삽입

v.insert(v.end() -1, 3); // 위치를 지정하여 원소를 삽입

v.pop_back(); // 마지막 원소 제거

sort(v.begin(), v.end()); // [start, end) 범위에 있는 인자를 오름차순으로 정렬
*/

// 10817번 세 수
void Tutoring21::ThreeNumber() {
	std::vector<int> v;

	int n{};
	for (int i = 0; i < 3; i++) {
		std::cin >> n;
		v.push_back(n);
	}

	sort(v.begin(), v.end());
	std::cout << v[1];
}


// pair
/*
// pair<자료형, 자료형>
pair<int, int> p1, p2;
pair<string, double> p3;

p1 = make_pair(3, 1);
p2 = make_pair(1, 2);
p1 = make_pair("test", 1.5);

cf) vector + pair
vector<pair<int, int>> v;
v.push_back(p1); // (3, 1)이 들어감
v.push_back(make_pair(1, 2)); // (1, 2)가 들어감)
v.push_back({1, 3}); // (1, 3)이 들어감

sort(v.begin(), v.end());
(3,1), (1,2), (1,3) => (1,2), (1,3), (3,1)
*/

void Tutoring21::Coordinate()
{
	std::vector<std::pair<int, int>> v;
	int N;
	std::cin >> N;
	int x{}, y{}; // 좌표
	for (int i = 0; i < N; i++) {
		std::cin >> x >> y;
		v.push_back({ x, y }); // 좌표 입력
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		std::cout << v[i].first << " " << v[i].second << "\n";
	}
}
