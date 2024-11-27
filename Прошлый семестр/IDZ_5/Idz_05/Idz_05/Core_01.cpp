#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

int const n = 5;
int mass[n][n];
int mass_X[n+1];
int mass_sum[n];

/*
	� ����� ���������, ��� �� ������� ���������� � �������� (��������, �� ��������), ��� �������� ����.
	������, � ���������, ��� ������� ToString() �� �������� � ��� �++. ��� ���� ����� ������� � ������.
	�����, � ������ ���� �������, ����������������� �����, � ����������� �������� � ��. ��� ����� ����, ��� ������� ������������ ����� ��������,
	��� ����, ��� �� ��� ������� ���� ������ �������������, � �� ������� ������-�����. � ��� ������)
*/

void f_fill(int i, int j) // ��� �� ��������� ������ ������ ������� ���������� ����������. �����, � ��������������.
{
	mass[i][j] = rand() % 11-5;
	/*
	if (rand()%2 == 1)
	{
		mass[i][j] = mass[i][j] * -1;
	}
	*/
}

int Count_Length(int a) // ��� ��� �� �������� ������ �����
{
	//cout << "a = " << a << endl;
	//cout << "a%10 = " << a % 10 << endl;
	//cout << "a%10 = " << (a % 10)%10 << endl;

	int f = 0;
	if (a < 0) { f++; }

	while (abs(a) > 9)
	{
		f++;
		a = a % 10;
		if (a < 10) { break; }
	}
	return (f + 1);
}

void f_output(int i, int j) // ����� �� ������� ������ ����� ������� �������, � ��������� ����
{
	int z = Count_Length(mass[i][j]);
	//cout << mass[i][j] << " " << z << ",";
	cout << "  ";
	if (j != n - 1) 
	{
		cout << mass[i][j] << ","; 
	}
	else
	{
		cout << mass[i][j];
	}

	
	if (z == 2) // � ����������� ������������ ��������
	{
		cout << " ";
	}
	else if (z == 1)
	{
		cout << "  ";
	}
}

void Ziro_Mass_X() // �������� ������ �� ���������� ��������� � (��� ������� �������)
{
	for (int i = 0; i < n + 1; i++)
	{
		mass_X[i] = 0;
	}
}

void X_Mass_Count() // ������ ������� �������� �, ��� ������� �������
{
	Ziro_Mass_X();

	for (int i = 0; i < n+1; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (mass[j][i] < 0)
			{
				//cout << mass[j][i];
				mass_X[i] += abs(mass[j][i]);
				//cout << "mass_X[" << i << "] = " << mass_X[i] << endl;
			}
		}
	}
}

void Fill_and_Print_Mass() // �������� ��������� ������ �������, � ����������� � ���������� �������
{
	for (int i = 0; i < n; i++)
	{
		cout << "[";
		for (int j = 0; j < n - 1; j++)
		{
			f_fill(i, j);
			f_output(i, j);
			//cout << " " << mass[i][j] << "" << ",";
		}
		//mass[i][n-1] = rand() % 20;
		cout << " ";
		f_fill(i, n-1);
		f_output(i, n - 1);
		//cout << mass[i][n - 1];
		cout << "]" << endl;
	}
	cout << "________________________________" << endl;

	cout << "X=";

	X_Mass_Count();

	for (int i = 0; i < n; i++)
	{
		cout << "  " << mass_X[i] << "  ";
	}

	cout << endl;
	cout << "�������� � - ��� ����� ������� ���� ������������� ����� � �������" << endl;

}

void Prints_Mass() // �������� ��������� ������ �������
{
	for (int i = 0; i < n; i++)
	{
		cout << "[";
		for (int j = 0; j < n - 1; j++)
		{
			//f_fill(i, j);
			f_output(i, j);
			//cout << " " << mass[i][j] << "" << ",";
		}
		//mass[i][n-1] = rand() % 20;
		cout << " ";
		//f_fill(i, n - 1);
		f_output(i, n - 1);
		//cout << mass[i][n - 1];
		cout << "]" << endl;
	}
	cout << "________________________________" << endl;

	cout << "X=";

	X_Mass_Count();

	for (int i = 0; i < n; i++)
	{
		cout << "  " << mass_X[i] << "  ";
	}

	cout << endl;
	cout << "�������� � - ��� ����� ������� ���� ������������� ����� � �������" << endl;

}

void print_Mass_X() // �������� ������ �� ��������� ��������� �
{
	cout << "X=";

	for (int i = 0; i < n; i++)
	{
		cout << "  " << mass_X[i] << "  ";
	}

	cout << endl;
}

void Swat_two_colum(int i) // ������(������ �������) 2 ������� � �������, �����������
{
	int buf;

	for (int j = 0; j < n; j++)
	{
		//cout << "mass[i][j] = " << mass[i][j] << endl;
		//cout << "mass[j][i] = " << mass[j][i] << endl;
		
		buf = mass[j][i];
		mass[j][i] = mass[j][i + 1];
		mass[j][i + 1] = buf;
	}
}

void SummMass() // ������� ����� ������� �������
{
	for (int i = 0; i < n; i++)
	{
		mass_sum[i] = 0;
	}

	for (int i = 0; i < n + 1; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (mass_X[i] != 0)
			{
				mass_sum[i] += (mass[j][i]);
			}
		}
	}
}

void print_Mass_sum() // ������� ����� ������� �������
{
	cout << "  ";

	for (int i = 0; i < n; i++)
	{
		if (mass_sum[i] != 0)
		{
			cout << "  " << mass_sum[i] << "  ";
		}
		else
		{
			cout << "  No  ";
		}
	}

	cout << " = Sum" << endl;
	cout << "Sum - ��� ����� �������, ���� � �� ���� ���� �� ���� ������������� ������� (���� ���, ��������� 'No')" << endl;
}

void swapColumn() // ������� ��������� ��� ������������ �������� ������� � ������� �����������
{
	cout << "������ ���������� ��� �������, � ������� ����������� �� �������������� �: " << endl;
	cout << endl;

	int y = 0;
	while (y < n)
	{
		if (mass_X[y-1] > mass_X[y])
		{
			cout << mass_X[y-1] << " > " << mass_X[y] << endl;
			
			Swat_two_colum(y-1);
			
			X_Mass_Count();
			print_Mass_X();
			cout << endl;
			y = 0;
		}
		y++;
	}

	//Print_Mass();
	cout << endl;
	Prints_Mass();
	SummMass();
	print_Mass_sum();
}

void main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));

	//cout << "f = " << Count_Length(-14) << endl;

	for (int i = 0; i < n; i++)
	{
		mass_X[n] = 0;
	}

	cout << "�������� � �������� ������� ��������." << endl;

	cout << "������� ��������� ������, �� [" << n << "] �� [" << n << "] ���������:" << endl;
	cout << endl;

	Fill_and_Print_Mass();
	swapColumn();
}