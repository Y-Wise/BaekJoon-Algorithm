#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>

// 10818번 최소, 최대 -sort 이용
void MinMaxSort1(){
	int n{};
	int a[1000000] = {};
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
#define MAX 1000000
void MinMax() {
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
void StringErase() {
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

void StringTutor() {
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
void StickStack() {
	int n{}, h{}, maxH{}, cntStick{};
	std::stack<int> s;
	std::cin >> n;
	for(int i = 0; i<n; i++){
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


// 2161번 카드1
void Card1() {
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

