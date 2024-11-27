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
		cout << "������� ����� ������� � ���� ����: ";
		cin >> t;
		if (t < 1)
		{
			cout << "������� ������� ��������� ����� ������� � ���� ����. ������� ������ �����." << endl;
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
	cout << "����� ����: " << Address << endl;
	cout << "����� ������� � ����: " << NumberOfFlat;
}

Flat::Flat(Home home)
{
	Home_ = home;
	cout << endl;
	bool tr = false;
	int a;

	while (!tr)
	{
		cout << "������� ����� ��������: ";
		cin >> a;
		if ((a > Home_.NumberOfFlat) or (a < 0))
		{
			cout << "����������� ����� ����� ��������. ����� �������� ���� �� �����." << endl;
		}
		else
		{
			NubberThisFlat = a;
			tr = true;
			break;
		}
	}

	cout << endl;
	cout << "������� ����� ������ � ���� ��������: ";
	cin >> NubberOfRooms;
}

void Flat::info()
{
	Home_.info();
	cout << endl;
	cout << "����� ��������: " << NubberThisFlat << endl;
	cout << "����� ������ � ��������: " << NubberOfRooms << endl;
}