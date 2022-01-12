#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>

//================���ڿ�=======================
//7-1�ܰ� 11654
void ASCII() {
	char c{};
	std::cin >> c;
	std::cout << (int)c;
}


//7-2�ܰ� 11720
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


//7-3�ܰ� 10809
void Alphabet() {
	std::string S;
	//char S[101] = { 0, }; // �Է¹��� �ܾ� S
	char alphabet[26] = { 0, };
	int alphabetPos[26] = { 0, };
	int pos = 0;

	//���ĺ� �ֱ�
	for (int i = 0; i < 26; i++) {
		alphabet[i] = (char)(97 + i);
		alphabetPos[i] = -1;
	}

	//�ܾ� �Է¹ޱ�
	std::cin >> S;

	//�ܾ��� ö�ڵ��� ��ġ
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

	//���
	for (int i = 0; i < 26; i++) {
		std::cout << alphabetPos[i] << " ";
	}
}

void Alphabet2() {
	char S[101] = { 0, }; // �Է¹��� �ܾ� S
	char alphabet[26] = { 0, };
	int alphabetPos[26] = { 0, };
	int pos = 0;

	//���ĺ� �ֱ�
	for (int i = 0; i < 26; i++) {
		alphabet[i] = (char)(97 + i);
		alphabetPos[i] = -1;
	}

	//�ܾ� �Է¹ޱ�
	std::cin >> S;

	//�ܾ��� ö�ڵ��� ��ġ
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

	//���
	for (int i = 0; i < 26; i++) {
		std::cout << alphabetPos[i] << " ";
	}
}


//7-4�ܰ� 2675 ���ڿ� �ݺ�



//7-5�ܰ� 1157 �ܾ����
void WordStudy() {
	std::string word{}; //�Է¹��� �ܾ�
	std::cin >> word;
	
	int maxCnt{}; //�ִ� ���ĺ� ����
	int maxPos{}; //�ִ� ���ĺ��� ���� ã�� ��ġ
	int cntAlphabet[26] = { 0, }; //���� ���ĺ�
	int asc{}; // �ƽ�Ű�ڵ尪 : �빮��(65~90), �ҹ���(97~122)
	
	// ���� ����
	for (int i = 0; i < word.length(); i++) {
		asc = (int)word[i];
		
		if (asc >= 65 && asc <= 90) {
			//�빮��
			asc -= 65;
			cntAlphabet[asc]++;
		}
		else if(asc >= 97 && asc <= 122){
			//�ҹ���
			asc -= 97;
			cntAlphabet[asc]++;
		}
		else {
			//���ĺ��� �ƴ� ���
			std::cout << "not Alphabet\n";
		}
	}

	// �ִ� ���ĺ� ã��
	for (int i = 0; i < 26; i++) {
		if (cntAlphabet[i] > maxCnt) {
			maxCnt = cntAlphabet[i];
			maxPos = i;
		}
	}

	// �ִ� ���ĺ��� 2�� �̻����� ã��
	bool duplicationAlphabet = false;
	for (int i = 0; i < 26; i++) {
		if (i != maxPos) {
			if (cntAlphabet[i] == maxCnt) {
				duplicationAlphabet = true;
			}
		}
	}

	// ���
	if (duplicationAlphabet == true) {
		std::cout << "?";
	}
	else {
		std::cout << (char)(maxPos + 65);
	}
}


//7-5�ܰ� 1157 �ܾ����
void WordStrudy2() {
	// �ƽ�Ű�ڵ� : �빮��(65~90), �ҹ���(97~122)

	// 1. �ܾ� �Է�
	std::string word{};
	std::cin >> word;

	// 2. ���ĺ����� ���� ���� ����
	int cntAlp[26] = { 0 }; //���� ���ĺ�

	for (int i = 0; i < word.length(); i++) {

		if (word[i] >= 65 && word[i] <= 90) {
			cntAlp[word[i]-65]++; //�빮���� ��
		}
		else if (word[i] >= 97 && word[i] <= 122) {
			cntAlp[word[i]-97]++; //�ҹ����� ��
		}
		else {
			std::cout << "not Alphabet\n";
		}
	}

	// 3. �ִ� ���ĺ� ã��(���ÿ� maxCnt�� 2�� �̻��̸� -1�� ����)
	int maxCnt{}; //�ִ� ���ĺ� ����
	int maxPos{}; //�ִ� ���ĺ��� ���� ã�� ��ġ

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

	// 4. ���
	if (maxPos == -1) {
		std::cout << "?";
	}
	else {
		std::cout << (char)(maxPos + 65);
	}
}

//7-6�ܰ� 1152 �ܾ��� ���� 
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

