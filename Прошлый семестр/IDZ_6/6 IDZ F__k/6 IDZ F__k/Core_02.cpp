#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

void processingEnumeration(int size, int* mass, int buf, int* sizePosl, int* startPosl, int y, int i)
{
	if (abs(mass[i]) % 2 == 1)								// ���� �������
	{
		cout << mass[i] << " �������" << endl;

		if ((abs(mass[i]) > buf) && (mass[i] != mass[i-1]))							// ���� ���������� ///////
		{
			cout << mass[i] << " > " << buf << endl;

			if (sizePosl[y] == 0)	// ���� ��� ������ �������� �������� ������������ �������
			{
				cout << mass[i] << " ��� ������ �������� �������� ������������ �������." << endl;
				sizePosl[y]++;
				startPosl[y] = i;	// �� �� ���������� ��� ������, ��� ������ ������ ����� �������� ����������� �������
			}
			else
			{
				cout << mass[i] << " ��� �� ������ �������� �������� ������������ �������." << endl;
				sizePosl[y]++;		// � � ����� ������ ����������� ������ ����� ������� �� +1
			}
			buf = mass[i];
		}
		else						// ���� ��������� �������� �����, ��� ���� ��� �� ������ �����������, �� ��
		{
			cout << mass[i] << " �������, �� �� ������ �����������." << endl;
			y++;					// ��������� � ����� ���� �������� �� ������ � ��������� ������
			buf = -1;				// �������� ��������� ��������, ��� ���������� ������
		}
	}
	else
	{
		cout << mass[i] << " �����" << endl;
		y++;
		buf = -1;
	}
}

int main()
{
	/*
	* �� ���������� ������� ���������� ����� ��������� �������
	* ���������, �� ���������� ������� ���������� �������� ��������, �� �������. ���� ����������� � ����.
	*/

	setlocale(LC_ALL, "rus");
	int size;

	cout << "���������, ��� ������ ����� ������� ������� �������� ������������ �����" << endl;

	cout << "������� ����������� ���������: ";
	cin >> size;

	int* mass = new int[size];

	cout << "������� �����: " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> mass[i];
	}

	cout << endl;

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
			cout << mass[i] << " �������" << endl;

			if (abs(mass[i]) > buf)								// ���� ����������
			{
				cout << mass[i] << " > " << buf << endl;

				if (sizePosl[y] == 0)	// ���� ��� ������ �������� �������� ������������ �������
				{
					cout << mass[i] << " ��� ������ �������� �������� ������������ �������." << endl;
					sizePosl[y]++;
					startPosl[y] = i;	// �� �� ���������� ��� ������, ��� ������ ������ ����� �������� ����������� �������
				}
				else
				{
					cout << mass[i] << " ��� �� ������ �������� �������� ������������ �������." << endl;
					sizePosl[y]++;		// � � ����� ������ ����������� ������ ����� ������� �� +1
				}
				buf = mass[i];
			}
			else						// ���� ��������� �������� �����, ��� ���� ��� �� ������ �����������, �� ��
			{
				//cout << mass[i] << " �������, �� �� ������ �����������." << endl;
				y++;					// ��������� � ����� ���� �������� �� ������ � ��������� ������
				buf = -1;				// �������� ��������� ��������, ��� ���������� ������
				processingEnumeration(size, mass, buf, sizePosl, startPosl, y, i);  
				
			}
		}
		else
		{
			cout << mass[i] << " �����" << endl;
			y++;
			buf = -1;
		}

		cout << endl;
	}

	for (int i = 0; i < size; i++)
	{
		cout << "sizePosl[" << i << "] = " << sizePosl[i] << "  startPosl[" << i << "] = " << startPosl[i] << endl;
	}

	int ind = 0;
	cout << endl;

	for (int i = 0; i < size; i++)		// ������� ������ ����� ������� �������� ����������� �������, � ��������� � ������, � ����� 2� ��������
	{
		if (sizePosl[i] > sizePosl[ind])
		{
			cout << sizePosl[i] << " > " << sizePosl[ind] << endl;
			ind = i;
		}
	}

	cout << "ind = " << ind << endl;
	cout << "������ ������ ������������������ ����������� ������: " << startPosl[ind] << endl;

	cout << endl;

	if (sizePosl[ind] <= 0)				// ���� ������������ ������ ����� �������� ����������� ������� == 0, �� ������ � �� ����������
	{
		cout << "����� ������������������ ���" << endl;
	}
	else
	{
		cout << "sizePosl[" << ind << "] = " << sizePosl[ind] << "  startPosl[" << ind << "] = " << startPosl[ind] << endl;
		cout << endl;

		cout << "������� ���������� ������������ ������������������ �� �������� �����: " << endl;

		for (int i = startPosl[ind]; i < startPosl[ind] + sizePosl[ind]; i++) // �� ��� �� ������� ������ ����� ������������������, �� ����� ������� + � ������
		{
			cout << mass[i] << endl;
		}

		cout << endl;
		cout << "������ ������ � �� ��������� �������: " << endl;

		int newSize = size;
		int thisAverySize = 0;

		cout << "size = " << size << endl;

		for (int r = 0; r < size; r++) cout << "mass[" << r << "] = " << mass[r] << endl;
		cout << endl;

		for (int i = startPosl[ind]; i < startPosl[ind] + sizePosl[ind] - 1 ; i++)
		{
			
			for (int j = i; j < size; j++) // ������ �������� ��������� �� 1 �����, ������� ���� ��������� ��������
			{
				mass[j] = mass[j + 1];
			}
			
			//mass[i] = mass[i+1];
			newSize--; // ��������� ������ ������ ������� �� -1
			thisAverySize++;
			for (int r = 0; r < size; r++) cout << "mass[" << r << "] = " << mass[r] << endl;
			cout << endl;
		}
		//mass[startPosl[ind] + sizePosl[ind]]

		// 		for (int j = (mass[startPosl[ind]] + sizePosl[ind]) - 1; j < size; j++) 

		//cout << "___" << endl;


		//cout << "startPosl[ind] = " << startPosl[ind] << endl;

		for (int j = startPosl[ind]; j < size; j++)
		{
			//cout << "j = " << j << endl;
			mass[j] = mass[j + 1];
		}
		newSize--;

		for (int r = 0; r < size; r++) cout << "mass[" << r << "] = " << mass[r] << endl;
		cout << endl;

		for (int i = 0; i < 100; i++)
		{
			cout << "_";
		}

		cout << endl;
		cout << endl;

		cout << "������� ����� ������: " << endl;

		for (int i = 0; i < newSize; i++)
		{
			cout << mass[i] << endl;
		}

		if (newSize == 0)
		{
			cout << "[������ ����]" << endl;
		}

		/*
		cout << "������� ����� ������: " << endl;

		for (int i = thisAverySize; i < size; i++) // ���, ��� �� ��������.
		{
			cout << mass[i] << endl;
		}

		if (thisAverySize == size)
		{
			cout << "[������ ����]" << endl;
		}
		*/
	}

	delete(mass);
	delete(startPosl);
	delete(sizePosl);
}