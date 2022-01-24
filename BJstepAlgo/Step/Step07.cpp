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
void RepeatStr() {
	int t;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		int r;
		std::string s;
		std::cin >> r;
		std::cin >> s;
		for (int j = 0; j < s.length(); j++) {
			for (int k = 0; k < r; k ++ ) {
				std::cout << s[j];
			}
		}
		std::cout << "\n";
	}
}


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

void WordStrudy2() {
	// 아스키코드 : 대문자(65~90), 소문자(97~122)

	// 1. 단어 입력
	std::string word{};
	std::cin >> word;

	// 2. 알파벳별로 사용된 개수 세기
	int cntAlp[26] = { 0 }; //사용된 알파벳

for (int i = 0; i < word.length(); i++) {

	if (word[i] >= 65 && word[i] <= 90) {
		cntAlp[word[i] - 65]++; //대문자일 때
	}
	else if (word[i] >= 97 && word[i] <= 122) {
		cntAlp[word[i] - 97]++; //소문자일 때
	}
	else {
		std::cout << "not Alphabet\n";
	}
}

// 3. 최다 알파벳 찾기(동시에 maxCnt가 2개 이상이면 -1로 리턴)
int maxCnt{}; //최대 알파벳 개수
int maxPos{}; //최대 알파벳이 뭔지 찾는 위치

for (int i = 0; i < 26; i++) {
	if (cntAlp[i] >= maxCnt) {
		if (cntAlp[i] == maxCnt) {
			maxPos = -1;
		}
		else {
			maxCnt = cntAlp[i];
			maxPos = i;
		}
	}
}

// 4. 결과
if (maxPos == -1) {
	std::cout << "?";
}
else {
	std::cout << (char)(maxPos + 65);
}
}


//7-6단계 1152 단어의 개수 
int NumofWords() {
	int numWords{};
	std::string inputString{};
	std::getline(std::cin, inputString);

	for (int countChar = 1; countChar < inputString.length() - 1; countChar++) {
		if (inputString[countChar - 1] != ' ' && inputString[countChar] == ' ' && inputString[countChar + 1] != ' ') {
			numWords++;
		}
	}

	if (inputString != " ") {
		numWords++;
	}

	return numWords;
}


//7-7단계 2908 상수
void SangSu() {
	std::string first, second;
	std::cin >> first >> second;
	std::reverse(first.begin(), first.end());
	std::reverse(second.begin(), second.end());
	int firstSu, secondSu;
	firstSu = std::stoi(first);
	secondSu = std::stoi(second);
	if (firstSu >= secondSu) {
		std::cout << firstSu;
	}
	else {
		std::cout << secondSu;
	}
}


//7-8단계 5622 다이얼
void Dial() {
	//아스키코드 A =  65
	std::string word;
	std::cin >> word;
	int sum{};
	for (int i = 0; i < word.length(); i++) {
		if (word[i] < 65) {}
		else if (word[i] < 68) { sum += 3; } //2
		else if (word[i] < 71) { sum += 4; } //3
		else if (word[i] < 74) { sum += 5; } //4
		else if (word[i] < 77) { sum += 6; } //5
		else if (word[i] < 80) { sum += 7; } //6
		else if (word[i] < 84) { sum += 8; } //7
		else if (word[i] < 87) { sum += 9; } //8
		else if (word[i] < 91) { sum += 10; } //9
		else {}
	}
	std::cout << sum;
}


//7-9단계 2941 크로아티아 알파벳
void CroatiaAlp1(){
	std::string word{};
	std::cin >> word;
	int cntCro{};
	int cntalp{};
	//c, d, z, l, j, n, s, z
	//c: -, =
	//d: z=, -
	//l, n: j
	//s: =
	//z: =
	/*
	j, -, =를 찾기
	j앞에 l || n가 있으면 true
	-앞에 c || d가 있으면 true
	=앞에 c || s || z가 있으면 true
	=앞에 z && z앞에 d가 있으면 true
	*/
	for (int i = 0; i < word.length(); i++) {
		if (word[i] == 'c') {
			if (word[i + 1] == '-' || word[i + 1] == '=') {
				cntCro++;
			}
			else {
				cntalp++;
			}
		}
		else if(word[i] == 'd'){
			if (word[i + 1] == '-') {
				cntCro++;
			}
			else if (word[i + 1] == 'z'){
				if (word[i + 2] == '=') {
					cntCro++;
				}
				else {
					cntalp++;
				}
			}
			else {
				cntalp++;
			}
		}
		else if (word[i] == 'l' || word[i] == 'n') {
			if (word[i + 1] == 'j') {
				cntCro++;
			}
			else {
				cntalp++;
			}
		}
		else if (word[i] == 's') {
			if (word[i + 1] == '=') {
				cntCro++;
			}
			else {
				cntalp++;
			}
		}
		else if (word[i] == 'z') {
			if (word[i + 1] == '='){
				if (word[i - 1] != 'd') {
					cntCro++;
				}
				else {
					//'dz='에서 cntCro++ 했으므로 패스
				}
			}
			else {
				cntalp++;
			}
		}
		else {
			if (word[i] == 'j') {
				if (word[i - 1] == 'l' || word[i - 1] == 'n') continue;
				else cntalp++;
			}
			else if (word[i] == '-' || word[i] == '=') continue;
			else {
				cntalp++;
			}
		}
	}
	int sum = cntCro + cntalp;
	std::cout << "cntCro: " << cntCro << ", cntalp: " << cntalp << std::endl;
	std::cout << sum;
}

void CroatiaAlp2() {
	std::string word{};
	std::cin >> word;

	std::string tokens[] = {"dz=", "z=", "lj", "nj", "s=", "d-", "c=", "c-"};
	for (std::string &i : tokens) {
		while (word.find(i) != std::string::npos) {
			/* static const size_t npos = -1; */
			word.replace(word.find(i), i.size(), "*");
		}
	}
}


//7-10단계 1316 그룹 단어 체커
void GroupWChecker() {
	int num; // 단어 개수
	std::string words;
	std::cin >> num;
	int cnt = num;
	if (num <= 100) {
		for (int n = 0; n < num; n++) {
			std::cin >> words;
			/*for (int pos = 0; pos < words.length(); pos++) {
				int i = 1;
				if (words[pos] != words[pos + i]) {
					i++;
					continue;
				}
				else {

				}


				for (int j = 1; j < words.length() - pos; j++) {
					if (words[pos] == words[pos + j]) {
						cnt--;
					}
					else{
					}
				}
			}*/
		}
	}

}
