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
	cout << "Файл " << name << " создан" << endl;

	isInvisible = false;
	isCompressed = false;
	isEmpty = Empty;

	cout << "Введите данные для этого файла: ";
	cin >> Data;

	Name = name;
	Data = Data;

	size = Data.length() + Name.length();
	cout << "Текущий размер файла = " << size << endl;
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