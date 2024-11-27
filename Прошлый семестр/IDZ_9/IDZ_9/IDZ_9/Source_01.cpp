using namespace std;
#include <iostream>
#include "Home.h";

void main()
{
	setlocale(LC_ALL, "rus");

	cout << "Создание дома:" << endl;
	cout << "Введите адрес дома: ";
	string a;
	cin >> a;
	Home h1;
	h1.Home_h(a);

	cout << endl;
	cout << "Информация о Доме: " << endl;
	h1.info();

	cout << endl;

	cout << "Создание квартиры:" << endl;

	Flat f1(h1);

	cout << "Информация о квартире: " << endl;
	f1.info();
}