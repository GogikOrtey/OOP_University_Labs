#pragma once
using namespace std;
#include <iostream>
#include <string>
#include "Home.h";


Home::Home()
{

}

void Home::Home_h(string address)
{
	Address = address;
	int t;

	while (true)
	{
		cout << "Введите число квартир в этом доме: ";
		cin >> t;
		if (t < 1)
		{
			cout << "Введено слишком маленькое число квартир в этом доме. Введите другое число." << endl;
		}
		else
		{
			NumberOfFlat = t;
			break;
		}
	}
}

void Home::info()
{
	cout << endl;
	cout << "Адрес дома: " << Address << endl;
	cout << "Число квартир в доме: " << NumberOfFlat;
}

Flat::Flat(Home home)
{
	Home_ = home;
	cout << endl;
	bool tr = false;
	int a;

	while (!tr)
	{
		cout << "Введите номер квартиры: ";
		cin >> a;
		if ((a > Home_.NumberOfFlat) or (a < 0))
		{
			cout << "Неправильно введён номер квартиры. Такой квартиры быть не может." << endl;
		}
		else
		{
			NubberThisFlat = a;
			tr = true;
			break;
		}
	}

	cout << endl;
	cout << "Введите число комнат в этой квартире: ";
	cin >> NubberOfRooms;
}

void Flat::info()
{
	Home_.info();
	cout << endl;
	cout << "Номер кавртиры: " << NubberThisFlat << endl;
	cout << "Число комант в квартире: " << NubberOfRooms << endl;
}