#include <iostream>
#include <cmath>
#include <time.h>
#include "EexceptionController.h"
#include "SuperInt.h"
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

/*
	Как сделать класс, в котором мы могли бы хранить код ошибки, и элемент, который вызвал эту ошибку?
	Например:
	a = 1; b = 0;
	a/b = ошибка - код ошибки 1, элемент ошибки b.
*/


ostream& operator<<(ostream& os, const SuperInt& d)
{
	return os << d.super;
}

void Programm2_UserEnter()
/*
	Только для int - смотрим как пользователь мог бы вводит значения с клавиатуры, если бы это было в задании)
*/

{
	EexceptionController <int> IntMyClass;

	try
	{
		cout << "Введите числа, для заполнения массива: " << endl;
		cout << "Конец ввода - число 0." << endl;

		int n;

		cin >> n;

		while (n != 0)
		{
			IntMyClass.Insert(n);
			cin >> n;
		}

		cout << endl;

		cout << "Введите числа, для удаления из массива: " << endl;
		cout << "Конец ввода - число 0." << endl;

		cin >> n;

		while (n != 0)
		{
			IntMyClass.Delete(n);
			cin >> n;
		}

		IntMyClass.info();
		cout << endl;
		cout << "Программа успешно завершена!" << endl;
	}
	catch (string msg)
	{
		cout << "-----" << endl;
		cout << "Возникла ошибка, исполнение кода приостановлено! Подробности ошибки:" << endl;
		std::cout << msg << std::endl;
		cout << "-----" << endl;
	}
}

void Programm1() 
{
	EexceptionController <int> IntMyClass;

	try
	{
		IntMyClass.Insert(1);
		IntMyClass.Insert(2);
		IntMyClass.Insert(3);
		IntMyClass.Insert(4);
		IntMyClass.Insert(5);
		//IntMyClass.Insert(6);

		cout << endl;

		IntMyClass.Delete(2);
		IntMyClass.Delete(4);
		//IntMyClass.Delete(-99);

		IntMyClass.info();

		IntMyClass.Obrasthenie();

		IntMyClass.info();

		cout << endl;
		cout << "Программа успешно завершена!" << endl;
	}
	catch (string msg)
	{
		cout << endl;
		cout << "-----" << endl;
		cout << "Возникла ошибка, исполнение кода приостановлено! Подробности ошибки:" << endl;
		std::cout << msg << std::endl;
		cout << "-----" << endl;
	}
}

void Programm3_MyClass()
{
	EexceptionController <SuperInt> SuperMyClass;

	try
	{
		SuperMyClass.Insert(9);
		SuperMyClass.Insert(1);
		SuperMyClass.Insert(2);
		SuperMyClass.Insert(3);
		SuperMyClass.Insert(4);
		//SuperMyClass.Insert(6);

		cout << endl;

		SuperMyClass.Delete(2);
		SuperMyClass.Delete(4);
		//SuperMyClass.Delete(-99);

		SuperMyClass.info();

		SuperMyClass.Obrasthenie();

		SuperMyClass.info();

		cout << endl;
		cout << "Программа успешно завершена!" << endl;
	}
	catch (string msg)
	{
		cout << endl;
		cout << "-----" << endl;
		cout << "Возникла ошибка, исполнение кода приостановлено! Подробности ошибки:" << endl;
		std::cout << msg << std::endl;
		cout << "-----" << endl;
	}
}


void main()
{
	setlocale(LC_ALL, "rus");

	//Programm1();
	//Programm2_UserEnter();
	//Programm3_MyClass();
}







int Del(int a, int b)
{
	if (b != 0) return(a / b);
	else
	{
		string s = "Число b = 0, на 0 делить нельзя!";
		throw(s);
	}
}


void mainn()
{
	setlocale(LC_ALL, "rus");

	try
	{
		int a, b, c;
		a = 1; b = 0;

		c = Del(a, b);

		cout << "Программа успешно завершена!" << endl;
		cout << "c = " << c << endl;
	}
	catch (string msg)
	{
		cout << "Возникла ошибка, исполнение кода приостановлено! Подробности ошибки:" << endl;
		std::cout << msg << std::endl;
	}
}