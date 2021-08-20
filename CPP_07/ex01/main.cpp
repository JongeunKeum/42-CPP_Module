#include "iter.hpp"

int main() {
	char charArr[4];
	unsigned long charLen = 4;
	for (unsigned long i = 0; i < charLen; i++)
		charArr[i] = i + 97;
	std::cout << "===== char Array =====" << std::endl;
	iter(charArr, charLen, addOne);
	iter(charArr, charLen, printElements);
	std::cout << std::endl;

	int intArr[4];
	unsigned long intLen = 4;
	for (unsigned long i = 0; i < intLen; i++)
		intArr[i] = i;
	std::cout << "====== int Array =====" << std::endl;
	iter(intArr, intLen, addOne);
	iter(intArr, intLen, printElements);
	std::cout << std::endl;

	/* ***** Evaluation Code ***** */
	std::cout << "====== Evaluation Code =====" << std::endl;
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];
	iter( tab, 5, print );
	iter( tab2, 5, print );
	return 0;
}
