#include "Class.h"

int main() {
	Autotest();
	Cstring name, surname, adres, point, domen;
	point = ".";
	domen = "@math.msu.ru";
	cout << "MSU MAIL ADDRESS GENERATOR" << endl << ".\n.\n.\n";
	cout << "(Without capital letters)\n\n" << "Enter your name: ";
	cin >> name;
	cout << "Enter your surname: ";
	cin >> surname;
	cout << endl << endl;
	cout << "your Email: " << (name + point + surname + domen) << endl << endl;
	return 0;
}