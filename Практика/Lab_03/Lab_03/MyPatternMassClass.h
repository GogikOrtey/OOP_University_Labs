#include <iostream>
#include <cmath>
#include <time.h>
#include <string>
#include <fstream>
#include <istream>
#include <iostream>
using namespace std;
#pragma once

template<typename Type>
class MyPatternMassClass
{
private:
	int const sizeMass = 5;
	Type* mass;

public:

	MyPatternMassClass() // Конструктор без параметров
	{
		Type* mass = new Type[sizeMass];

		for (int i = 0; i < sizeMass; i++)
		{
			mass[i] = NULL;
		}
	}

	MyPatternMassClass(Type* massInp) // Конструктор сразу с заполнением массива
	{
		Type* mass = new Type[sizeMass];

		for (int i = 0; i < sizeMass; i++)
		{
			mass[i] = massInp[i];
		}
	}

	void Info() // Выводит все элементы
	{
		cout << "В массиве " << sizeMass << " элементов." << endl;
		cout << "Выводим все элементы массива:" << endl;

		for (int i = 0; i < sizeMass; i++)
		{
			cout << "Mass[" << i << "] = " << mass[i] << endl;
		}
	}

	void GetMin() // Выводит минимальный
	{
		if (mass[0] != NULL)
		{
			Type minVal = mass[0];
			cout << "Выводим минимальный элемент массива:" << endl;

			for (int i = 1; i < sizeMass; i++)
			{
				if (minVal > mass[i]) minVal = mass[i];
			}

			cout << "Минимальный элемент массива = " << minVal << endl;
		}
		else
		{
			cout << "Не получится вывести минимальный элемент, массив пуст." << endl;
		}
	}

	void DelAllData() // Удаляет все элементы из массива
	{
		Type minVal = mass[0];
		cout << "Удаляем все данные" << endl;

		for (int i = 0; i < sizeMass; i++)
		{
			mass[i] = NULL;
		}

		cout << "Все данные удалены" << endl;
	}

	void SetMass() // Заполняет массив значениями с консоли
	{
		cout << "Заполняем массив значениями:" << endl;

		for (int i = 0; i < sizeMass; i++)
		{
			cout << "Mass[" << i << "] = ";
			cin >> mass[i];
		}

		cout << "Массив заполнен" << endl;
	}

	void SetMass(Type* massInp) // Заполняет массив значениями или из полученного массива
	{
		cout << "Заполняем массив значениями:" << endl;

		for (int i = 0; i < sizeMass; i++)
		{
			mass[i] = massInp[i];
			cout << "Mass[" << i << "] = " << mass[i] << endl;
		}

		cout << "Массив заполнен" << endl;
	}
};

