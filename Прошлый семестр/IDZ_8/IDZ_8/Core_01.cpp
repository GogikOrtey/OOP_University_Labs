#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

#include "Header_01.h";

void main()
{
	setlocale(LC_ALL, "rus");



	cout << "������� �������� ������: ";
	string flsh;
	cin >> flsh;

	cout << "�������� ������ ������ �� ������ '" << flsh << "'" << endl;

	cout << "������� ��� ������ �����: ";
	string n;
	cin >> n;

	file f1(n, false);
	file f2;
	f2.info();

	//cout << "f1.Name = " << f1.Name << endl;
	//cout << "f1.Data = " << f1.Data << endl;

	f1.info();

	//delete(&f1); // �� �� �����

	/*
	const int maxSize = 64; // �� �������, ��� �� ������ ����� ������ �� ������ 64 ������
	int pointer = 0;

	file AllFiles = new file("", true)[maxSize]; // ��������� ������ �� ������. ��� ���, �� ����, ������.

	for (int i = 0; i < maxSize; i++)
	{
		cout << "AllFiles.Name[i] = " << AllFiles.Name[i] << " AllFiles.Data[i] = " << AllFiles.Data[i] << endl;
	}
	*/

	//f1.delFile();

	//cin >> n;
}