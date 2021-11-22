#include<iostream>
#include<string>
#include<cstring>

//7-1단계 11654
void ASCII() {
	char c{};
	std::cin >> c;
	std::cout << (int)c;
}

//7-2단계 11720
void SumN() {
	int n{ 0 }, sum{ 0 };
	std::string strN;
	int tmp{ 0 };
	std::cin >> n;
	std::cin >> strN;

	for (int i = 0; i < n; i++) {
		tmp = (int)strN[i] - 48;
		sum += tmp;
	}

	std::cout << sum;
}

//7-3단계 10809
void Alphabet() {
	std::string S;
	//char S[101] = { 0, }; // 입력받을 단어 S
	char alphabet[26] = { 0, };
	int alphabetPos[26] = { 0, };
	int pos = 0;

	//알파벳 넣기
	for (int i = 0; i < 26; i++) {
		alphabet[i] = (char)(97 + i);
		alphabetPos[i] = -1;
	}

	//단어 입력받기
	std::cin >> S;

	//단어의 철자들의 위치
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < S.length(); j++) {
			if (alphabet[i] == S[j]) {
				alphabetPos[i] = pos;
				break;
			}
			else {
				pos++;
			}
		}
		pos = 0;
	}

	//출력
	for (int i = 0; i < 26; i++) {
		std::cout << alphabetPos[i] << " ";
	}
}


void Alphabet2() {
	char S[101] = { 0, }; // 입력받을 단어 S
	char alphabet[26] = { 0, };
	int alphabetPos[26] = { 0, };
	int pos = 0;

	//알파벳 넣기
	for (int i = 0; i < 26; i++) {
		alphabet[i] = (char)(97 + i);
		alphabetPos[i] = -1;
	}

	//단어 입력받기
	std::cin >> S;

	//단어의 철자들의 위치
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < (unsigned)strlen(S); j++) {
			if (alphabet[i] == S[j]) {
				alphabetPos[i] = pos;
				break;
			}
			else {
				pos++;
			}
		}
		pos = 0;
	}

	//출력
	for (int i = 0; i < 26; i++) {
		std::cout << alphabetPos[i] << " ";
	}
}