#include <iostream>
#include "Integer.h"
#include "Decimal.h"
#include "Binary.h"
using namespace std;


void main()
{
	setlocale(LC_ALL, "rus");
	cout << "Вводим число: " << endl;

	int* Numbers = new int[5]; // Пусть будет максимально число из 5и символов
	bool isBinary = true;
	int y = -1; // Ввод для определения бинарная или 10я система
	int z = -1; // Ввод для определения места запятой в числе

	Decimal Dec;
	Binary Bin;

	Integer* Inn;

	while (true)
	{
		isBinary = true;

		for (int i = 0; i < 5; i++)
		{
			int n = 0;
			cin >> n;
			if (!((n == 0) || (n == 1)))
			{
				isBinary = false;
			}
			Numbers[i] = n;
		}

		while (true)
		{
			cout << "Выберете нужную подсистему. Введите:" << endl;
			cout << "0 - если Двоичная, 1 - если Десятичная" << endl;


			cin >> y;

			if (!((y == 0) || (y == 1)))
			{
				cout << "Неверный ввод, попробуйте заново" << endl;
			}
			else break;	
		}

		if (y == 0)
		{
			if (isBinary == false)
			{
				cout << "Неверный ввод числа, попробуйте ещё раз, используя 0 и 1" << endl;
			}
			else
			{
				Inn = &Bin;
				
				Bin.SetNum(Numbers);

				// Значения для Mult и Summ вводятся в десятичном виде, и уже внутри классов преобразовываются как надо

				Bin.Print();
				cout << "* 5 " << endl; 
				//Bin.mult(5);

				Inn->mult(5);

				Bin.Print();
				cout << "+ 3 " << endl;	Bin.Summ(3);
				Bin.Print();

				break;
			}
		}
		else if (y == 1)
		{
			while (true)
			{
				cout << "Выберете место, где будет стоять запятая, в вашем числе. Введите цифру от 0 до 4" << endl;
				cin >> z;
				if (!((z >= 0) && (z <= 4)))
				{
					cout << "Число введено неверно, попробуйте ещё раз" << endl;
				}
				else break;
			}

			Dec.PosComma = z;
			Dec.SetNum(Numbers);

			Dec.Print();
			cout << "* 5 " << endl; Dec.mult(5);
			Dec.Print();
			cout << "+ 3 " << endl;	Dec.Summ(3);
			Dec.Print();

			break;
		}		
	}
}