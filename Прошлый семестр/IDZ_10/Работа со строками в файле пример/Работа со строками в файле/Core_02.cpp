#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <iomanip>
#include <string>
#include <Windows.h>

using namespace std;

void maind(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ifstream f;
	f.open("text.txt");

	int n = 0;

	char letter;
	while (!f.eof())
	{
		letter = f.get();
		//cout << letter;
		n++;
	}
	cout << "������ ����� = " << n << endl;
}


void maino()
{
	fstream f("text.txt", fstream::in | fstream::out); // ��������� ���� � ������ ������ � ������ ������������

	if (f.is_open()) // ���� ���� ��������
	{
		while (!f.eof()) 
		{
			if (f.get() == ' ') // ���� ������� (.get ���� �� 1 ������� �� �����)
			{
				f.seekp((f.tellp() - static_cast<streampos>(1))); // ������ ������ �� �������, ��� ������
				f.put('!'); // ��������� ������ �� ����� �������
				f.seekp(f.tellp());
			}
		}
		f.close();
	}
	else 
	{
		cout << "Faild to open" << '\n';
	}
}

void main0()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ifstream f;
	f.open("text.txt"); // ��������� ���� ��� ������

	if (f)
	{
		f.seekg(0, ios::beg); //  ��� � ������ 

		string a;
		char r;
		
		int n = 0;
		char letter;

		while (!f.eof())
		{
			letter = f.get();
			//cout << letter; // ������� ���� �� ������
			n++; // ������� ������ ����� �����, � ��������
		}
		cout << "������ ����� = " << n << endl;
		cout << endl;

		int* mass = new int[n]; // ������ ������ � ����������� ��������� �������, ��� ��� ���� ����� ����� �������� �� ��������

		for (int i = 0; i < n; i++)
		{
			mass[i] = -1; // �������� ���
		}

		int an = 0; // ��������� �� ����� ������ ����� ������ � ������, � ��� ������ (mass)

		f.close();
		f.open("text.txt");
		f.seekg(0, ios::beg); //  ��� � ������ 
		

		for (int i = 0; i<n; i++)
		{
			f.get(r);

			if (r == ' ')
			{
				cout << "������ �� ����� " << f.tellg() << endl;
				mass[an] = f.tellg();
				an++;
			}

			cout << r << endl;
			//f.seekg(1, ios::cur);
		}
		
		
		for (int i = 0; i < n; i++)
		{
			cout << mass[i] << "," << endl;
		}
	}

	f.close();
	ifstream output_file("text.txt", ios::app); // ��������� ���� ��� ������

	if (f)
	{

	}

}

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ifstream f;
	int p, j, i, kol, m, n = 0;
	string S[10];
	f.open("text.txt"); 
	if (f)	{
		while (!f.eof())
		{
			getline(f, S[n]);
			cout << S[n] << "\n";
			n++;
		}
		f.close();
		cout << endl;
		//cout << "���������� ����� � ������ - " << n << endl;
		/*


		for (kol = 0, i = 0; i < n; i++)
		{
			m = S[i].length();
			S[i] += " ";
			for (p = 0; p < m; )
			{
				j = S[i].find(" ", p);
				if (j != 0)
				{
					kol++;
					p = j + 1;
					cout << "������ �� �����: " << f.tellg() << endl;
				}
				else break;
			}
		}

		cout << "���������� ���� � ������ - " << kol << endl;
	}
	else cout << "���� �� ������" << endl;
	*/
	//return 0;
	}
}