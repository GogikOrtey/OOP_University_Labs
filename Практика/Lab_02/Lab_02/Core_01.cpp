#include <iostream>
#include <cmath>
#include <time.h>
#include "MassTwo.h"
using namespace std;

template <typename T>
T& SolutionEquation(T a, T b, T c, T d)
{
	T x1;
	T x2;
	T x3;

	if (a == 0)
	{
		return a;
		// Оригинально не делю на ноль
	}
	else
	{
		// Приоритет операций, когда есть скобки:
		// Ну да, ну да, пошёл я нафиг
		// P.S.: Он тут ломается, по этому сделал так:

		x1 = c * d;
		x2 = x1 - b;
		x3 = x2 / a;
		return x3;

		// Мне нужно было найти х в уравнени
		// Полная формула выглядит так: x = (c * d - b) / a
	}
}

void main()
{
	setlocale(LC_ALL, "rus");

	{
	int n1 = SolutionEquation(1,1,3,1); // int
	cout << "int 1: " << n1 << endl;

	int n2 = SolutionEquation(0, 0, 0, 0); // int 2
	cout << "int 2: " << n2 << endl;
	cout << endl;


	char c1 = SolutionEquation('a', 'b', 'c', 'd'); // char
	cout << "char 1: " << c1 << endl;

	char c2 = SolutionEquation('%', '$', '`', '='); // char 2
	cout << "char 2: " << c2 << endl; 

	char c3 = SolutionEquation('я', 'б', 'в', 'г'); // char 3
	cout << "char 3: " << c3 << endl;

	char c4 = SolutionEquation('0', '1', '9', '9'); // char 4
	cout << "char 4: " << c4 << endl;
	cout << endl;


	bool b1 = SolutionEquation(true, false, true, false); // bool 1
	(b1 == true) ? cout << "bool 1: true" << endl : cout << "bool 1: false" << endl; 
	// Оригинально сэкономил 1 строчку кода

	bool b2 = SolutionEquation(false, false, false, false); // bool 2
	(b2 == true) ? cout << "bool 2: true" << endl : cout << "bool 2: false" << endl;
	// И ещё одну

	bool b3 = SolutionEquation(true, false, true, true); // bool 3
	(b3 == true) ? cout << "bool 3: true" << endl : cout << "bool 3: false" << endl;
	// И тут тоже
	cout << endl;


	float f1 = SolutionEquation(1.1, 1.2, 3.3, 1.4); // float 1
	cout << "float 1: " << f1 << endl;

	float f2 = SolutionEquation(0, 0, 0, 0); // float 2
	cout << "float 2: " << f2 << endl;
	cout << endl;
	}

	// Это было невероятно сложно сделать:

	MassTwo m1(0,2);
	MassTwo m2(3,4);
	MassTwo m3(5,6);
	MassTwo m4(7,8);

	MassTwo m5; 

	m5 = SolutionEquation(m1, m2, m3, m4); // MyClass 1 

	cout << "MyClass 1: a = " << m5.a << " b = " << m5.b << endl;
}