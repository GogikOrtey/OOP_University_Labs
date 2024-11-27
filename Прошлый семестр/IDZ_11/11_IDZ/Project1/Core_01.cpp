#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

#include "Vector.h"

string On(Vector o1, Vector o2) // Это только для того, что бы они красиво выводили "true" или "false", а не 1 или 0.
{
	if (o1 == o2) return "true";
	else return "false";
}

string Off(Vector o1, Vector o2)
{
	if (o1 != o2) return "false";
	else return "true";
}

void main()
{
	setlocale(LC_ALL, "rus");

	cout << "Введите координаты вектора a" << endl;
	Vector a(true);
	cout << endl;
	cout << "a: "; a.info();
	cout << endl;

	cout << "Введите координаты вектора b" << endl;
	Vector b(true);
	cout << endl;
	cout << "b: "; b.info();
	cout << endl;

	cout << "Введите координаты вектора c" << endl;
	Vector c(true);
	cout << endl;
	cout << "c: "; c.info();
	cout << endl;
	
	cout << endl;

	cout << "a == b " << On(a, b) << endl;
	cout << "a == c " << On(a, c) << endl;
	cout << "b == c " << On(b, c) << endl;

	cout << endl;

	cout << "a != b " << Off(a, b) << endl;
	cout << "a != c " << Off(a, c) << endl;
	cout << "b != c " << Off(b, c) << endl;

	cout << endl;

	// delete &a, &b, &c;
}