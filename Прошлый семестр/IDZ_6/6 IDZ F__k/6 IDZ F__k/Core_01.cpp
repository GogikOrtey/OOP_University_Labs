/*
#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

int main()
{
	/*
	* ׸���� ��������, ������ ����� ������� ��������, �� �������
	* ������� ������� �����-�� �������, � �������� �������� �������
	*/
/*

	setlocale(LC_ALL, "rus");
	int size;

	cout << "������� ����������� ���������: ";
	cin >> size;

	int* mass = new int[size];

	cout << "������� �����: " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> mass[i];
	}

	int* startPosl = new int[size]; // ������ ������, ��� �������� �������� ������� ���� ������������ �������� �������, ������� �����
	int* sizePosl = new int[size];  // ������ ������, ��� �������� ����� ���� ���� �������
	int buf = -1;
	int y = 0;						// � - ��� ����� �������, ��� ���� ���� ��������

	for (int i = 0; i < size; i++)
	{
		startPosl[i] = 0;
		sizePosl[i] = 0;
	}

	for (int i = 0; i < size; i++)
	{
		if (abs(mass[i]) % 2 == 1)								// ���� �������
		{
			//cout << mass[i] << " �������" << endl;

			if (abs(mass[i]) > buf)								// ���� ����������
			{
				//cout << mass[i] << " > " << buf << endl;

				if (sizePosl[y] == 0)	// ���� ��� ������ �������� �������� ������������ �������
				{
					sizePosl[y]++;
					startPosl[y] = i;	// �� �� ���������� ��� ������, ��� ������ ������ ����� �������� ����������� �������
				}
				else
				{
					sizePosl[y]++;		// � � ����� ������ ����������� ������ ����� ������� �� +1
				}
				buf = mass[i];
			}
			else						// ���� ��������� �������� �����, ��� ���� ��� �� ������ �����������, �� ��
			{
				y++;					// ��������� � ����� ���� �������� �� ������ � ��������� ������
				buf = -1;				// �������� ��������� ��������, ��� ���������� ������
			}
		}
		else
		{
			y++;
			buf = -1;
		}
	}

	for (int i = 0; i < size; i++)
	{
		//cout << "sizePosl[" << i << "] = " << sizePosl[i] << "  startPosl[" << i << "] = " << startPosl[i] << endl;
	}

	int ind = 0;

	for (int i = 0; i < size; i++)		// ������� ������ ����� ������� �������� ����������� �������, � ��������� � ������, � ����� 2� ��������
	{
		if (sizePosl[i] > sizePosl[ind])
		{
			//cout << sizePosl[i] << " > " << sizePosl[ind] << endl;
			ind = i;
		}
	}

	//cout << "������ ������ ������������������ ����������� ������: " << startPosl[ind] << endl;

	cout << endl;

	if (sizePosl[ind] <= 1)				// ���� ������������ ������ ����� �������� ����������� ������� == 0, �� ������ � �� ����������
	{
		cout << "����� ������������������ ���" << endl;
	}
	else
	{
		//cout << "sizePosl[" << ind << "] = " << sizePosl[ind] << "  startPosl[" << ind << "] = " << startPosl[ind] << endl;

		cout << "������� ���������� ������������ ������������������ �� �������� �����: " << endl;

		for (int i = startPosl[ind]; i < startPosl[ind] + sizePosl[ind]; i++) // �� ��� �� ������� ������ ����� ������������������, �� ����� ������� + � ������
		{
			cout << mass[i] << endl;
		}

		cout << endl;
		cout << "������ ������ � �� ��������� �������: " << endl;

		int newSize = size;

		for (int i = startPosl[ind]; i < startPosl[ind] + sizePosl[ind]; i++)
		{
			for (int j = i; j < size-1; j++) // ������ �������� ��������� �� 1 �����, ������� ���� ��������� ��������
			{
				mass[j] = mass[j + 1];
			}
			newSize--; // ��������� ������ ������ ������� �� -1
		}

		cout << "������� ����� ������: " << endl;

		for (int i = 0; i < newSize; i++)
		{
			cout << mass[i] << endl;
		}

		if (newSize == 0)
		{
			cout << "[������ ����]" << endl;
		}
	}
	
	delete(mass);
	delete(startPosl);
	delete(sizePosl);
}
*/