/*
#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;
/*
struct Time
{
	int Min = 0;
	int Hour = 0;
};

struct Train
{
	string Nazv;	// �������� ������ ����������
	int Num;		// ����� ������
	Time Time;		// ����� �����������
};


void zapixal_pasp(Train Pasp[], int size)
{
	bool tr = false;
	struct Train n1;

	while (tr == false)
	{
		tr = true;
		for (int i = 0; i < size - 1; i++)
		{
			if (Pasp[i].Nazv > Pasp[i + 1].Nazv)
			{
				tr = false;
				n1 = Pasp[i + 1];
				Pasp[i + 1] = Pasp[i];
				Pasp[i] = n1;
				break;
			}
		}
	}
}


void maybe_function(Train Pasp[], int size)
{
	for (int i = 0; i < size; i++)
	{
		// �� ����, ��� ���� ����� ���� ��������:
		cout << "�������� ������: " << Pasp[i].Nazv << endl;
		cout << "����� ������: " << Pasp[i].Num << endl;
		cout << "����� ��� �����������: " << Pasp[i].Time.Hour << " ����� " << Pasp[i].Time.Min << "�����" << endl;
		if ((Pasp[i].Time.Hour > 23) || (Pasp[i].Time.Hour < 0) || (Pasp[i].Time.Min > 59) || (Pasp[i].Time.Min < 0))
		{
			cout << "�� ����� ������������ ������ �������. �� ��������� ��� �������������." << endl;
		}
		cout << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	int const size = 2;
	struct Train Pasp[size];

	cout << "������� " << size << " ������� � �������:" << endl;
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "������� �������� " << i + 1 << "�� ������: ";
		cin >> Pasp[i].Nazv;

		cout << "������� ����� " << i + 1 << "�� ������: ";
		cin >> Pasp[i].Num;

		cout << "������� ����� ����������� " << i + 1 << "�� ������: " << endl;
		cout << "����: ";
		cin >> Pasp[i].Time.Hour;
		cout << "������: ";
		cin >> Pasp[i].Time.Min;

		cout << endl;
	}

	// ��� ������ ���� �������, �� � �� ���� ������� � ���, ��� �� ���������� �� �������. 
	
	zapixal_pasp(Pasp, size);

	cout << "����� ���� ������� � ������� � ���������� �������, �� ��������� ������� ����������: " << endl;

	maybe_function(Pasp, size); //// �� ������ ��������

	cout << endl;

	// �� ���� ���� ����� ���� �������

	Time t1;

	cout << "������� �����, � �� ����� ������, ������� ���� ����� ����: " << endl;
	cout << "����: ";
	cin >> t1.Hour;
	cout << "������: ";
	cin >> t1.Min;

	if ((t1.Hour > 23) || (t1.Hour < 0) || (t1.Min > 59) || (t1.Min < 0))
	{
		cout << "�� ����� ������������ ������ �������." << endl;
	}

	bool f1 = false;

	for (int i = 0; i < size; i++)
	{
		if (Pasp[i].Time.Hour >= t1.Hour)
		{
			if (Pasp[i].Time.Min > t1.Min)
			{
				cout << "�������� ������: " << Pasp[i].Nazv << endl;
				cout << "����� ������: " << Pasp[i].Num << endl;
				cout << "����� ��� �����������: " << Pasp[i].Time.Hour << " ����� " << Pasp[i].Time.Min << "�����" << endl;
				cout << endl;

				f1 = true;
			}
		}
	}

	if (f1 == false)
	{
		cout << "����� ������� ���." << endl;
	}

	delete(Pasp);
}

*/
// ��� ������� �������, � �������� � �� ������ Pasp?