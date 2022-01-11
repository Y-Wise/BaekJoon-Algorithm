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


	//1. string을 벡터로 입력 받기(소문자는 대문자로 바꾸기)
	std::string word{}; //입력받을 단어
	std::cin >> word;

	std::vector<char> wordV{};
	for (int i = 0; i < word.length(); i++) {
		if ((int)word[i] >= 97 && (int)word[i] <= 122) {
			wordV.push_back(word[i]-32);
		}
		else {
			wordV.push_back(word[i]);
		}
	}

	//2. word벡터를 abc순서로 정렬
	std::sort(wordV.begin(), wordV.end());

	//3. 같은 구간들 카운트하고 벡터로 입력 받기
	std::vector<int> cntWord{};

	//4. 카운트 벡터 정렬
	std::sort(cntWord.begin(), cntWord.end(), cntWord.end());
	//5-1. 카운트 벡터의 최대값에 같은 값이 있으면 : ?
	//5-2. 없으면 최대값 출력
	if (std::binary_search(cntWord.begin(), cntWord.end(), cntWord.end())) {
		std::cout << "?";
	}
	else {
		std::cout << cntWord.end()-1;
	}

}


int main() {
	WordStudy2();
	return 0;
} 