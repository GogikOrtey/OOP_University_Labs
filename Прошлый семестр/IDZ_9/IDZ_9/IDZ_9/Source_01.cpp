using namespace std;
#include <iostream>
#include "Home.h";

void main()
{
	setlocale(LC_ALL, "rus");

	cout << "�������� ����:" << endl;
	cout << "������� ����� ����: ";
	string a;
	cin >> a;
	Home h1;
	h1.Home_h(a);

	cout << endl;
	cout << "���������� � ����: " << endl;
	h1.info();

	cout << endl;

	cout << "�������� ��������:" << endl;

	Flat f1(h1);

	cout << "���������� � ��������: " << endl;
	f1.info();
}