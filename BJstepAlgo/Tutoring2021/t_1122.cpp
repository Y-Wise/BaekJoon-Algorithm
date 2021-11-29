#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>

// 10818�� �ּ�, �ִ� -sort �̿�
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
// 10818�� �ּ�, �ִ� -sort �̿�
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

// 10818�� �ּ�, �ִ� -min, max �̿�
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
substr() : ���� ���ִ� ���
substr(n) = �ε���4���� ����
substr(a, b) = �ε��� a���� b���� ���ڵ� ����

erase() : ��������
erase(a, b) = �ε��� a���� b������ ���ڵ� ���ֹ���

clear() : ���ڿ� ������� = > length�� 0�� ��

str1 + str2 = "abc" + "dfef" = "abcdfef"

find("abcd") : "abcd"�̶�� ���ڸ� ã����.a�� �ִ� ��ġ(�ε���)�� ���
*/

// 11721�� �� ���� ���� ����ϱ� - string.substr()
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

// 11721�� �� ���� ���� ����ϱ� - string.erase(0, 10)
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
stack<int> s; : int�� stack
s.push(n) : n�� ����
s.top() : ���ÿ��� ���� ���� �ִ°�
s.pop() : ����  ���� �ִ� ��(���� �������� ���� ��� ����)
s.empty() : ����ִ��� ����
s.size() : ������ ũ��(���� ����)
// ������ ��� ��� ����ϴ� �ݺ���
while (!s.empty()) { //������ �� ������ �ݺ�
	cout << s.top() << ' '; // ���ÿ��� ���� ���� �ִ� ��� ���
	s.pop(); // ����� ������ ����
}
*/
// 17608�� ����� - stack
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
		s.pop(); // ����� ������ ����
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
while (!q.empty()) { //������ �� ������ �ݺ�
	cout << q.front() << ' '; // ���ÿ��� ���� ���� �ִ� ��� ���
	q.pop(); // ����� ������ ����
}
*/


// �似Ǫ��


// 2161�� ī��1
void Card1() {
	std::queue<int> q;
	int N{};

	std::cin >> N;
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	while (!q.empty()) {
		std::cout << q.front() << " "; // ���� ���� ���
		q.pop(); // ���� ���� �ִ� ���� out
		if (q.empty()) break;
		else {
			q.push(q.front()); // �� ���� ���ڸ� ���� �ڷ� �ű��
			q.pop(); // ���� �ڷ� �ű� ���� out
		}
	}
}

