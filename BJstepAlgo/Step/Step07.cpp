#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>

//================문자열=======================
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


//7-4단계 2675 문자열 반복



//7-5단계 1157 단어공부
void WordStudy() {
	std::string word{}; //입력받을 단어
	std::cin >> word;
	
	int maxCnt{}; //최대 알파벳 개수
	int maxPos{}; //최대 알파벳이 뭔지 찾는 위치
	int cntAlphabet[26] = { 0, }; //사용된 알파벳
	int asc{}; // 아스키코드값 : 대문자(65~90), 소문자(97~122)
	
	// 개수 세기
	for (int i = 0; i < word.length(); i++) {
		asc = (int)word[i];
		
		if (asc >= 65 && asc <= 90) {
			//대문자
			asc -= 65;
			cntAlphabet[asc]++;
		}
		else if(asc >= 97 && asc <= 122){
			//소문자
			asc -= 97;
			cntAlphabet[asc]++;
		}
		else {
			//알파벳이 아닌 경우
			std::cout << "not Alphabet\n";
		}
	}

	// 최다 알파벳 찾기
	for (int i = 0; i < 26; i++) {
		if (cntAlphabet[i] > maxCnt) {
			maxCnt = cntAlphabet[i];
			maxPos = i;
		}
	}

	// 최다 알파벳이 2개 이상인지 찾기
	bool duplicationAlphabet = false;
	for (int i = 0; i < 26; i++) {
		if (i != maxPos) {
			if (cntAlphabet[i] == maxCnt) {
				duplicationAlphabet = true;
			}
		}
	}

	// 결과
	if (duplicationAlphabet == true) {
		std::cout << "?";
	}
	else {
		std::cout << (char)(maxPos + 65);
	}
}


//7-5단계 1157 단어공부
void WordStudy2() {
	//std::sort(cntAlphabet[0], cntAlphabet[25]); //정렬

}


int main() {
	WordStudy();
	return 0;
} 