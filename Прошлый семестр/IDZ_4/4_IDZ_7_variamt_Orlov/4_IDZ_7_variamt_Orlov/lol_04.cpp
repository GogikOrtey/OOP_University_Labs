#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

int const length_mass = 15; // ������ ������� = 10
int mass[length_mass + 2]; // ������ ������

void Print_mass()
{
	for (int i = 0; (i < length_mass); (i++)) // ������ ������ � �������� ����
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

	//int mass[length_mass]; // ������ ������

	for (int i = 0; i < length_mass; i++) // ������� ��� ��� ��������
	{
		mass[i] = rand() % 11-5;
	}

	cout << "������� ������: " << endl;
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
		cout << "� ������� ��� ������� ��������" << endl;
	}
	else
	{
		mass[ind_m] = -1;
		for (int i = ind_m; i < length_mass; i++)
		{
			mass[i] = mass[i + 1];
		}

		cout << "������� ������, ��� ���������� �������� �������� (������������ �� " << ind_m + 1 << "� �����):"<< endl;
		Print_mass();
	}

	int num_el = -2;
	cout << "������� ������ ��������, ��� ���������� ����� ���� ������ �������� (� �������� �� 0 �� " << length_mass-1 << ")" << endl;
	cin >> num_el;

	if ((num_el > length_mass - 1) || (num_el < 0))
	{
		cout << "������� �������� ��������" << endl;
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

