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
void WordStudy2() {


	//1. string�� ���ͷ� �Է� �ޱ�(�ҹ��ڴ� �빮�ڷ� �ٲٱ�)
	std::string word{}; //�Է¹��� �ܾ�
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

	//2. word���͸� abc������ ����
	std::sort(wordV.begin(), wordV.end());

	//3. ���� ������ ī��Ʈ�ϰ� ���ͷ� �Է� �ޱ�
	std::vector<int> cntWord{};

	//4. ī��Ʈ ���� ����
	std::sort(cntWord.begin(), cntWord.end(), cntWord.end());
	//5-1. ī��Ʈ ������ �ִ밪�� ���� ���� ������ : ?
	//5-2. ������ �ִ밪 ���
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