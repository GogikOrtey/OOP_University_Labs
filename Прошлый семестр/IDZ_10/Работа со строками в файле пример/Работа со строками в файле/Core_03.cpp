#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <iomanip>
#include <string>
#include <Windows.h>

using namespace std;

void main11()
{
	setlocale(LC_ALL, "rus");
	fstream f("text.txt", fstream::in | fstream::out); // ��������� ���� � ������ ������ � ������ ������������

	if (f.is_open()) // ���� ���� ��������
	{
		while (!f.eof())
		{
			if (f.get() == ' ') // ���� ������� (.get ���� �� 1 ������� �� �����)
			{
				f.seekp((f.tellp() - static_cast<streampos>(1))); // ������ ������ �� �������, ��� ������ static_cast dinamic_cast ����������
				f.put('!'); // ��������� ������ �� ����� �������
				f.seekp(f.tellp());
			}
		}

		cout << "��� ������� � ����� ������� �������� �� ��������������� �����!" << endl;
		f.close();
	}
	else
	{
		cout << "�� ������� ������� ����" << '\n';
	}
}