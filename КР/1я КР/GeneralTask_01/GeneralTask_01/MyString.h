#pragma once
#include <iostream>
using namespace std;

class MyString
{
public:
	int length = 0;
	char* simv; // = new char[length];

	MyString(); // ����������� ��� ����������
	MyString(char* massSimv); // ����������� � �����������
	MyString(char simvol); // ����������� ����������� ������
	//MyString(string massSimv); // ��� ����� �������� �� ����

	~MyString();

	void In();

	//void Print(char* massSimv);
	void Print();

	//char* operator + (char* massSimv);

	MyString& operator + (MyString& massSimv);
	MyString& operator - (MyString& massSimv);

};