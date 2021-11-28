#include "Class.h"

void Autotest() {
	Cstring str1, str2, test, result;
	str1 = "proverka";
	str2 = "programmy";
	test = "proverkaprogrammy";
	result = str1 + str2;
	if (result == test) {
		cout << "Autotest passed...\n.\n.\n\.\n";
	}
	else {
		cout << "Autotest failed...\n.\n.\n\.\n";
	}
}