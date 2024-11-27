#pragma once
using namespace std;
#include <iostream>
#include <string>

class file
{
public:
	bool isInvisible = false;	// Скрытый
	bool isCompressed = false;	// Сжатый
	bool isEmpty = true;		// Пустой
	string Data;
	string Name;
	int size = 0;

	file(string name, bool Empty); // Конструктор нового файла
	file();


		void info();


	/*
	void delFile() // Деструктор
	{
		cout << "Файл " << Name << " успешно удалён" << endl;
		delete(file);
	}
	*/
	
};