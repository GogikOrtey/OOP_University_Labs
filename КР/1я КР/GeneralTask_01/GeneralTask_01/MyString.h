#pragma once
#include <iostream>
using namespace std;

class MyString
{
public:
	int length = 0;
	char* simv; // = new char[length];

	MyString(); // Конструктор без параметорв
	MyString(char* massSimv); // Конструктор с параметрами
	MyString(char simvol); // Конструктор принимающий символ
	//MyString(string massSimv); // Для ввода значений из кода

	~MyString();

	void In();

	//void Print(char* massSimv);
	void Print();

	//char* operator + (char* massSimv);

	MyString& operator + (MyString& massSimv);
	MyString& operator - (MyString& massSimv);

};