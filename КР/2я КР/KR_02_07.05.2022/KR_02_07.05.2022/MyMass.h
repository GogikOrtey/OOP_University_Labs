#include <iostream>
#include <cmath>
#include <time.h>
#include <string>
#pragma once
using namespace std;


template<typename Type>
class MyMass
{
private:
	string errLInd = "������! ����� ������ < 0!";
	string errRInd = "������! ������ ������ >= ������� �������!";

public:
	Type* Mass;
	int size; // ������

	MyMass() 
	{
		size = 0;
		Mass = nullptr;
	};

	// ���������� ������ �����������
	void Insert(Type newVal) //+
	{
		if (size == 0)
		{
			Mass = new Type[1];
			Mass[0] = newVal;
			size++;
		}
		else
		{
			Type* tempMass = new Type[size + 1];

			for (int i = 0; i < (size); i++)
			{
				tempMass[i] = Mass[i];
			}
			tempMass[size] = newVal;

			Mass = tempMass;
			size++;
		}
	}

	// �������� ������ �� ��������� ��������� ��������
	void DelInd(int ind_l, int ind_r) //+
	{
		cout << "������� �� ��������� �� " << ind_l << " �� " << ind_r << endl;

		if (ind_l < 0) { throw errLInd; } // ���������� ����������
		else if (ind_r >= size) { throw errRInd; } // ���������� ����������
		else
		{
			// �� ����� ������� ������������, �� ������ ����� ������������

			ind_r++;
			int n = ind_r - ind_l;
			int y = n;

			while (y > 0)
			{
				for (int i = ind_l; i < size-(n-y+1); i++)
				{
					Mass[i] = Mass[i + 1];
				}
				y--;
			}

			size = size - n;

			Type* tempMass = new Type[size];

			for (int i = 0; i < (size); i++)
			{
				tempMass[i] = Mass[i];
			}
			Mass = tempMass;
		}
	}

	// �������� ������ �� ��������� ��������� ��������
	// (�������� ������ ��������� �� ��������)
	void DelValue(Type val_l, Type val_r)
	{
		cout << "������� �� ��������� �� " << val_l << " �� " << val_r << endl;

		// ������� �������� � ��������

		int SucsDel = 0;

		for (int i = 0; i < size; i++)
		{
			if ((Mass[i] >= val_l) && (Mass[i] <= val_r))
			{
				for (int j = i; j < size; j++)
				{
					Mass[j] = Mass[j + 1];
				}
				SucsDel++;
			}
		}
		size = size - SucsDel;

		Type* tempMass = new Type[size];

		for (int i = 0; i < (size); i++)
		{
			tempMass[i] = Mass[i];
		}
		Mass = tempMass;

		cout << "����� ���� ������� " << SucsDel << " ��������� �� ��������� �������" << endl;
		cout << endl;
	}

	void info() //+
	{
		cout << "������� ���� ������������ ������: " << endl;
		cout << "size = " << size << endl;
		cout << endl;

		if (size == 0)
		{
			cout << "������ ����!" << endl;
		}
		else
		{
			for (int i = 0; i < size; i++)
			{
				cout << "[" << i << "] = " << Mass[i] << endl;
			}
		}

		cout << endl;
		cout << "----------" << endl;
		cout << endl;
	}

	~MyMass(){};
};
