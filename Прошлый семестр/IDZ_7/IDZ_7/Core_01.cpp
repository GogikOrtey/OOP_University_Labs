/*
#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

struct Time
{
	int Min = 0;
	int Hour = 0;
};



struct Train
{
	string Nazv;	// Название пункта назначения
	int Num;		// Номер поезда
	Time Time;		// Время отправления
};


void main()
{
	setlocale(LC_ALL, "rus");
	int const size = 2;
	struct Train Pasp[size];

	cout << "Введите " << size << " записей о поездах:" << endl;
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Введите название " << i+1 << "го поезда: ";
		cin.getline(Pasp[i].Nazv);

		cout << "Введите номер " << i+1 << "го поезда: ";
		cin >> Pasp[i].Num;

		cout << "Введите время отправления " << i+1 << "го поезда: " << endl;
		cout << "Часы: ";
		cin >> Pasp[i].Time.Hour;
		cout << "Минуты: ";
		cin >> Pasp[i].Time.Min;

		cout << endl;
	}

	// Это должна быть функция, но я не могу сделать её так, что бы компилятор не ругался. 
	{ 
		bool tr = false;
		struct Train n1;

		while (tr == false)
		{
			tr = true;
			for (int i = 0; i < size - 1; i++)
			{
				if (Pasp[i].Nazv > Pasp[i + 1].Nazv)
				{
					tr = false;
					n1 = Pasp[i + 1];
					Pasp[i + 1] = Pasp[i];
					Pasp[i] = n1;
					break;
				}
			}
		}
	}

	cout << "Вывод всех записей о поездах в алфавитном порядке, по названиям пунктов назначения: " << endl;
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		// По идее, это тоже может быть функцией:
		cout << "Название поезда: " << Pasp[i].Nazv << endl;
		cout << "Номер поезда: " << Pasp[i].Num << endl;
		cout << "Время его отправления: " << Pasp[i].Time.Hour << " часов " << Pasp[i].Time.Min << "минут" << endl;
		if ((Pasp[i].Time.Hour > 23) || (Pasp[i].Time.Hour < 0) || (Pasp[i].Time.Min > 59) || (Pasp[i].Time.Min < 0))
		{
			cout << "Вы ввели неправильный формат времени. Но программа это проигнорирует." << endl;
		}
		cout << endl;
	}

	Time t1;

	cout << "Введите время, и мы найдём поезда, которые идут после него: " << endl;
	cout << "Часы: "; 
	cin >> t1.Hour;
	cout << "Минуты: ";
	cin >> t1.Min;

	if ((t1.Hour > 23) || (t1.Hour < 0) || (t1.Min > 59) || (t1.Min < 0))
	{
		cout << "Вы ввели неправильный формат времени." << endl;
	}

	bool f1 = false;

	for (int i = 0; i < size; i++)
	{
		if (Pasp[i].Time.Hour >= t1.Hour)
		{
			if (Pasp[i].Time.Min > t1.Min)
			{
				cout << "Название поезда: " << Pasp[i].Nazv << endl;
				cout << "Номер поезда: " << Pasp[i].Num << endl;
				cout << "Время его отправления: " << Pasp[i].Time.Hour << " часов " << Pasp[i].Time.Min << "минут" << endl;
				cout << endl;

				f1 = true;
			}
		}
	}

	if (f1 == false)
	{
		cout << "Таких поездов нет." << endl;
	}
}

*/
// Как сделать функцию, и передать в неё массив Pasp?