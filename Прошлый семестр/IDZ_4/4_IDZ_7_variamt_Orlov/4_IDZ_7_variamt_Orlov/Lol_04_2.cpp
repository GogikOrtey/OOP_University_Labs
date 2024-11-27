#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

//int const length_mass = 10;
//int mass[length_mass + 2]; // ������ ������



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

	cout << "������� ����������� ��������� �������: ";
	cin >> n;

	if (n <= 0)
	{
		cout << "����������� ����� ������ �������" << endl;
	}
	else
	{
		//int mass[length_mass]; // ������ ������
		int* mass = new int[n];

		for (int i = 0; i < n; i++) // ������� ��� ��� ��������
		{
			mass[i] = rand() % 20;
		}

		cout << "������� ������: " << endl;
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
			cout << "� ������� ��� ������� ��������" << endl;
		}
		else
		{
			mass[ind_m] = -1;
			for (int i = ind_m; i < n; i++)
			{
				mass[i] = mass[i + 1];
			}
			mass[n - 1] = 0;
			cout << "������� ������, ��� ���������� �������� �������� (������������ �� " << ind_m + 1 << "� �����):" << endl;
			Print_mass(mass, n);
		}

		int num_el = -2;
		cout << "������� ������ ��������, ��� ���������� ����� ���� ������ �������� (� �������� �� 0 �� " << n - 1 << ")" << endl;
		cin >> num_el;

		if ((num_el > n - 1) || (num_el < 0))
		{
			cout << "������� �������� ��������" << endl;
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
