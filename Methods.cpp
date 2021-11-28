#include "Class.h"

Cstring::Cstring() {
	str = nullptr;
	length = 0;
}

Cstring::Cstring(const char* str) {
	length = strlen(str);
	this->str = new char[length + 1];

	for (int i = 0; i < length; i++) {
		this->str[i] = str[i];
	}

	this->str[length] = '\0';
}

Cstring::~Cstring() {
	delete[] this->str;
}

Cstring::Cstring(const Cstring& other) {

	length = strlen(other.str);
	this->str = new char[length + 1];

	for (int i = 0; i < length; i++) {
		this->str[i] = other.str[i];
	}

	this->str[length] = '\0';
}

Cstring &Cstring::operator =(const Cstring& other) {
	if (this->str != nullptr) {
		delete[] str;
	}
	length = strlen(other.str);
	this->str = new char[length + 1];

	for (int i = 0; i < length; i++) {
		this->str[i] = other.str[i];
	}

	this->str[length] = '\0';

	return *this;
}

Cstring Cstring::operator +(const Cstring& other) {
	Cstring newstr;

	int thislength = strlen(this->str);
	int otherlength = strlen(other.str);

	newstr.length = thislength + otherlength;

	newstr.str = new char[thislength + otherlength + 1];

	int i = 0;

	for (; i < thislength; i++) {
		newstr.str[i] = this->str[i];
	}

	for (int j = 0; j < otherlength; j++, i++) {
		newstr.str[i] = other.str[j];
	}

	newstr.str[thislength + otherlength] = '\0';

	return newstr;
}

ostream& operator << (ostream& cout, const Cstring& arr)
{
	cout << arr.str << endl;
	return cout;
}

istream& operator >> (istream& cin, Cstring& arr)
{
	char* str = new char[100];
	cin >> str;
	arr = Cstring{str};
	delete[] str;
	return cin;
}

bool Cstring::operator ==(const Cstring& other) {
	if (this->length != other.length) {
		return false;
	}
	for (int i = 0; i < length; i++) {
		if (this->str[i] != other.str[i]) {
			return false;
		}
	}
	return true;
}