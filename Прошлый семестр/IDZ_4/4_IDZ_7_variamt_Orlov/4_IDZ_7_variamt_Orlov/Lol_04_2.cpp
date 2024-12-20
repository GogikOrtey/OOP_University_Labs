#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

//int const length_mass = 10;
//int mass[length_mass + 2]; // Создаю массив



void Print_mass(int* mass, int n)
{
	cout << "[";
	for (int i = 0; i < n - 1; i++)
	{
		cout << mass[i] << ",";
	}
	cout << mass[n - 1];
	cout << "]" << endl;
}

void main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));

	int n = 0;

	cout << "Введите колличество элементов массива: ";
	cin >> n;

	if (n <= 0)
	{
		cout << "Неправильно введён размер массива" << endl;
	}
	else
	{
		//int mass[length_mass]; // Создаю массив
		int* mass = new int[n];

		for (int i = 0; i < n; i++) // Обнуляю все его значения
		{
			mass[i] = rand() % 20;
		}

		cout << "Выводим массив: " << endl;
		Print_mass(mass, n);

		int ind_m = -1;

		for (int i = 0; i < n; i++)
		{
			if (mass[i] == 0)
			{
				ind_m = i;
			}
		}

		if (ind_m == -1)
		{
			cout << "В массиве нет нулевых значений" << endl;
		}
		else
		{
			mass[ind_m] = -1;
			for (int i = ind_m; i < n; i++)
			{
				mass[i] = mass[i + 1];
			}
			mass[n - 1] = 0;
			cout << "Выводим массив, без последнего нулевого значения (находящегося на " << ind_m + 1 << "м месте):" << endl;
			Print_mass(mass, n);
		}

		int num_el = -2;
		cout << "Введите индекс элемента, для добавления после него нового элемента (в пределах от 0 до " << n - 1 << ")" << endl;
		cin >> num_el;

		if ((num_el > n - 1) || (num_el < 0))
		{
			cout << "Введено неверное значение" << endl;
		}
		else
		{
			for (int i = n; i > num_el; i--)
			{
				mass[i] = mass[i - 1];
			}
			mass[num_el] = 100;
		}
		Print_mass(mass, n);
		delete[] mass;
	}	
}
