#include <iostream>
#include "Integer.h"
#include "Decimal.h"
#include "Binary.h"
using namespace std;


void main()
{
	setlocale(LC_ALL, "rus");
	cout << "������ �����: " << endl;

	int* Numbers = new int[5]; // ����� ����� ����������� ����� �� 5� ��������
	bool isBinary = true;
	int y = -1; // ���� ��� ����������� �������� ��� 10� �������
	int z = -1; // ���� ��� ����������� ����� ������� � �����

	Decimal Dec;
	Binary Bin;

	Integer* Inn;

	while (true)
	{
		isBinary = true;

		for (int i = 0; i < 5; i++)
		{
			int n = 0;
			cin >> n;
			if (!((n == 0) || (n == 1)))
			{
				isBinary = false;
			}
			Numbers[i] = n;
		}

		while (true)
		{
			cout << "�������� ������ ����������. �������:" << endl;
			cout << "0 - ���� ��������, 1 - ���� ����������" << endl;


			cin >> y;

			if (!((y == 0) || (y == 1)))
			{
				cout << "�������� ����, ���������� ������" << endl;
			}
			else break;	
		}

		if (y == 0)
		{
			if (isBinary == false)
			{
				cout << "�������� ���� �����, ���������� ��� ���, ��������� 0 � 1" << endl;
			}
			else
			{
				Inn = &Bin;
				
				Bin.SetNum(Numbers);

				// �������� ��� Mult � Summ �������� � ���������� ����, � ��� ������ ������� ����������������� ��� ����

				Bin.Print();
				cout << "* 5 " << endl; 
				//Bin.mult(5);

				Inn->mult(5);

				Bin.Print();
				cout << "+ 3 " << endl;	Bin.Summ(3);
				Bin.Print();

				break;
			}
		}
		else if (y == 1)
		{
			while (true)
			{
				cout << "�������� �����, ��� ����� ������ �������, � ����� �����. ������� ����� �� 0 �� 4" << endl;
				cin >> z;
				if (!((z >= 0) && (z <= 4)))
				{
					cout << "����� ������� �������, ���������� ��� ���" << endl;
				}
				else break;
			}

			Dec.PosComma = z;
			Dec.SetNum(Numbers);

			Dec.Print();
			cout << "* 5 " << endl; Dec.mult(5);
			Dec.Print();
			cout << "+ 3 " << endl;	Dec.Summ(3);
			Dec.Print();

			break;
		}		
	}
}