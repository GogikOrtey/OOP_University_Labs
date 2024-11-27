#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

int const length_mass = 15; // Длинна массива = 10
int mass[length_mass + 2]; // Создаю массив

void Print_mass()
{
	for (int i = 0; (i < length_mass); (i++)) // Вывожу массив в понятонм виде
	{
		if (i == 0)
		{
			cout << "[" << mass[i];
		}
		else if (i == length_mass - 1)
		{
			cout << ", " << mass[i] << "]" << endl;
		}
		else
		{
			cout << ", " << mass[i];
		}
	}
}

/*
void main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));

	//int mass[length_mass]; // Создаю массив

	for (int i = 0; i < length_mass; i++) // Обнуляю все его значения
	{
		mass[i] = rand() % 11-5;
	}

	cout << "Выводим массив: " << endl;
	Print_mass();

	int ind_m = -1;

	for (int i = 0; i < length_mass; i++)
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
		for (int i = ind_m; i < length_mass; i++)
		{
			mass[i] = mass[i + 1];
		}

		cout << "Выводим массив, без последнего нулевого значения (находящегося на " << ind_m + 1 << "м месте):"<< endl;
		Print_mass();
	}

	int num_el = -2;
	cout << "Введите индекс элемента, для добавления после него нового элемента (в пределах от 0 до " << length_mass-1 << ")" << endl;
	cin >> num_el;

	if ((num_el > length_mass - 1) || (num_el < 0))
	{
		cout << "Введено неверное значение" << endl;
	}
	else
	{
		for (int i = length_mass; i > num_el; i--)
		{
			mass[i] = mass[i - 1];
		}
		mass[num_el] = 100;
	}
	Print_mass();
}
*/

