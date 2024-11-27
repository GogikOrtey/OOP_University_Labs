#include <iostream>
#include <cmath>
#include <time.h>
#include "MyString.h";

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

	MyString str1; 
	MyString str2;

	str1.In();
	str2.In();

	str1.Print();
	str2.Print();

	MyString str3;

	str3 = str1 + str2;

	str3.Print();

	str3 = str1 - str2;

	str3.Print();
}