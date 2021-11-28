#pragma once
#include<iostream>
#include<fstream>
using namespace std;

class Cstring {
	char* str;
	int length;
public:
	Cstring();
	~Cstring();
	Cstring(const char* str);
	Cstring(const Cstring& other);
	Cstring& operator =(const Cstring& other);
	Cstring operator +(const Cstring& other);
	friend ostream& operator << (ostream& os, const Cstring& arr);
	friend istream& operator >> (istream& in, Cstring& arr);
	bool operator ==(const Cstring& other);
};

void Autotest();