#include <iostream>
#include <cmath>
#include <time.h>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;
#pragma once

// ���� �������� �++ �� ��, ��� � �� ���� toString()
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
	string errFull = "���������� ����������: ���������� �������� � ��������� ����������� ������ ����������!";
	string errEmpty1 = "���������� ����������: �������� ��������� �� ������� �������� ����������!";
	string errEmpty2 = "���������� ����������: ��������� ��������� � ������ ������� ����������!";

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
		cout << "������� �������� �������: " << endl;

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
				cout << "�������� ������� " << val << " �� " << i << "-� ����� � �������" << endl;
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
						cout << "������� ������� " << val << ", ������� ��� �� " << i << "-� ����� � �������" << endl;
						CurrValElementsInMass--;
						MyMass[i] = NULL;
						return true;
					}
				}
			}

			string err = "���������� ����������: ������� " + NumberToString(val) + " �� ��� ������ � �������, ������ �� ����� ���� �����!";
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

