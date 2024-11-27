#pragma once
#include "Header_01.h";
using namespace std;
#include <iostream>

void file::info()
{
	cout << endl;
	cout << "Name = " << Name << endl;
	cout << "Data = " << Data << endl;
	cout << endl;
	cout << "isInvisible = " << isInvisible << endl;
	cout << "isCompressed = " << isCompressed << endl;
	cout << "isEmpty = " << isEmpty << endl;
}

file::file(string name, bool Empty) 
{
	cout << "���� " << name << " ������" << endl;

	isInvisible = false;
	isCompressed = false;
	isEmpty = Empty;

	cout << "������� ������ ��� ����� �����: ";
	cin >> Data;

	Name = name;
	Data = Data;

	size = Data.length() + Name.length();
	cout << "������� ������ ����� = " << size << endl;
}

file::file()
{
	isInvisible = false;
	isCompressed = false;
	isEmpty = true;
	Data = "";
	Name = "";
	size = 0;
}