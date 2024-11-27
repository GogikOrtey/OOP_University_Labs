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

	MyPatternMassClass() // ����������� ��� ����������
	{
		Type* mass = new Type[sizeMass];

		for (int i = 0; i < sizeMass; i++)
		{
			mass[i] = NULL;
		}
	}

	MyPatternMassClass(Type* massInp) // ����������� ����� � ����������� �������
	{
		Type* mass = new Type[sizeMass];

		for (int i = 0; i < sizeMass; i++)
		{
			mass[i] = massInp[i];
		}
	}

	void Info() // ������� ��� ��������
	{
		cout << "� ������� " << sizeMass << " ���������." << endl;
		cout << "������� ��� �������� �������:" << endl;

		for (int i = 0; i < sizeMass; i++)
		{
			cout << "Mass[" << i << "] = " << mass[i] << endl;
		}
	}

	void GetMin() // ������� �����������
	{
		if (mass[0] != NULL)
		{
			Type minVal = mass[0];
			cout << "������� ����������� ������� �������:" << endl;

			for (int i = 1; i < sizeMass; i++)
			{
				if (minVal > mass[i]) minVal = mass[i];
			}

			cout << "����������� ������� ������� = " << minVal << endl;
		}
		else
		{
			cout << "�� ��������� ������� ����������� �������, ������ ����." << endl;
		}
	}

	void DelAllData() // ������� ��� �������� �� �������
	{
		Type minVal = mass[0];
		cout << "������� ��� ������" << endl;

		for (int i = 0; i < sizeMass; i++)
		{
			mass[i] = NULL;
		}

		cout << "��� ������ �������" << endl;
	}

	void SetMass() // ��������� ������ ���������� � �������
	{
		cout << "��������� ������ ����������:" << endl;

		for (int i = 0; i < sizeMass; i++)
		{
			cout << "Mass[" << i << "] = ";
			cin >> mass[i];
		}

		cout << "������ ��������" << endl;
	}

	void SetMass(Type* massInp) // ��������� ������ ���������� ��� �� ����������� �������
	{
		cout << "��������� ������ ����������:" << endl;

		for (int i = 0; i < sizeMass; i++)
		{
			mass[i] = massInp[i];
			cout << "Mass[" << i << "] = " << mass[i] << endl;
		}

		cout << "������ ��������" << endl;
	}
};

