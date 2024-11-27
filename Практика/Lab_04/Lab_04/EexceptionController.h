#include <iostream>
#include <cmath>
#include <time.h>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;
#pragma once

// Люто ненавижу С++ за то, что в нём нету toString()
template <class T>
string NumberToString(T param)
{
	string str = "";
	stringstream ss;
	ss << param;
	getline(ss, str);
	return str;
}

template<typename Type>
class EexceptionController
{
private:
	string errFull = "Генерируем исключение: Добавление элемента в полностью заполненный массив невозможно!";
	string errEmpty1 = "Генерируем исключение: Удаление элементов из пустого элемента невозможно!";
	string errEmpty2 = "Генерируем исключение: Обращение элементов в пустом массиве невозможно!";

	int CurrValElementsInMass;
public:
	static const int size = 5;
	Type MyMass[size];

	EexceptionController()
	{
		for (int i = 0; i < size; i++)
		{
			MyMass[i] = NULL;
		}
		CurrValElementsInMass = 0;
	}

	void info()
	{
		cout << endl;
		cout << "Выводим элементы массива: " << endl;

		for (int i = 0; i < size; i++)
		{
			cout << "MyMass[" << i << "] = " << MyMass[i] << endl;
		}
	}

	bool Insert(Type val)
	{
		for (int i = 0; i < size; i++)
		{
			if (MyMass[i] == NULL)
			{
				MyMass[i] = val;
				cout << "Положили элемент " << val << " на " << i << "-е место в массиве" << endl;
				CurrValElementsInMass++;
				return true;
			}
		}
		throw errFull;
	}

	bool Delete(Type val)
	{
		if (CurrValElementsInMass > 0)
		{
			for (int i = size; i >= 0; i--)
			{
				if (MyMass[i] != NULL)
				{
					if (MyMass[i] == val)
					{
						cout << "Удалили элемент " << val << ", который был на " << i << "-м месте в массиве" << endl;
						CurrValElementsInMass--;
						MyMass[i] = NULL;
						return true;
					}
				}
			}

			string err = "Генерируем исключение: Элемент " + NumberToString(val) + " не был найден в массиве, значит не может быть удалён!";
			throw err;
		}
		else
		{
			throw errEmpty1;
			return false;
		}
	}

	bool Obrasthenie()
	{
		if (CurrValElementsInMass > 0)
		{
			for (int i = 0; i < size; i++)
			{
				if (MyMass[i] != NULL)
				{
					MyMass[i] = MyMass[i] * (-1);
				}
			}
		}
		else
		{
			throw errEmpty2;
			return false;
		}
	}
};

