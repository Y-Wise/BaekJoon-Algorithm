#include<iostream>
#include<string>
//�ܾ��� ���� 1152��
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
