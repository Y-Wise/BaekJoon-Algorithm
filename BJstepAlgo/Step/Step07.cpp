#include<iostream>
#include<string>
#include<cstring>

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