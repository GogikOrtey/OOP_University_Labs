#include <iostream>
#include <cmath>
using namespace std;

// -------- Первое задание:

/* Пример 01:
*  Тут я использую string как массив из char (еденичных символов). Ну, это первое, что пришло в голову)
int main()
{
	setlocale(LC_ALL, "Russian");
	string a; 
	
	cout << "Введите четырёхзначное, целое число: ";
	cin >> a;
	cout << endl;

	//cout << a[0] << " + " << a[1] << " + " << a[2] << " + " << a[3] << endl;

	if (a.size() != 4)
	{
		cout << "Вы ввели число неправильной структуры. Пожалуйста, введите четырёхзначное число. Я же прошу не так много.." << endl;
		//cout << a.size() << a << endl;
	}
	else
	{
		char b, c;
		b = a[1];
		c = a[2];
		a[1] = c;
		a[2] = b;
		cout << "Операция успешно выполнена: " << a << endl;
	}
	return 1;
}
*/


/* Ну а вот тут я в принципе по нормальному сделал, через числовой массив.
int main()
{
	setlocale(LC_ALL, "Russian");
	int a[4];
	int d;

	cout << "Введите четырёхзначное, целое число: ";
	cin >> d;
	cout << endl;

	if ((d > 9999) || (d < 1000))
	{
		cout << "Вы ввели число неправильной структуры. Пожалуйста, введите четырёхзначное число. Я же прошу не так много.." << endl;
	}
	else
	{
		a[0] = d % 10; d /= 10;
		a[1] = d % 10; d /= 10;
		a[2] = d % 10; d /= 10;
		a[3] = d % 10; d /= 10;

		//cout << "a = " << a << endl;
		//cout << a[0] << " + " << a[1] << " + " << a[2] << " + " << a[3] << endl;

		int b, c;
		b = a[1];
		c = a[2];
		a[1] = c;
		a[2] = b;
		cout << "Операция успешно выполнена: " << a[3] << a[2] << a[1] << a[0] << endl;
	}
	
	return 2;
}
*/

// ---------------

// --------------- Второе задание: 

/* // Окей, это было не сложно
int main()
{
	setlocale(LC_ALL, "Russian");
	int a[4];
	int d;

	cout << "Введите четырёхзначное, целое, отрицательное число: ";
	cin >> d;
	cout << endl;

	if ((d < -9999) || (d > -1000))
	{
		
		cout << "Вы ввели число неправильной структуры. Пожалуйста, введите четырёхзначное число. Я же прошу не так много.." << endl;
		cout << "Не забывайте, что число должно быть отрицательным." << endl;
	}
	else
	{
		a[0] = -d % 10; d /= 10;
		a[1] = -d % 10; d /= 10;
		a[2] = -d % 10; d /= 10;
		a[3] = -d % 10; d /= 10;

		//cout << "a = " << a << endl;
		//cout << a[0] << " + " << a[1] << " + " << a[2] << " + " << a[3] << endl;

		int b, c;
		b = a[1];
		c = a[2];
		a[1] = c;
		a[2] = b;

		int outp = a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0];
		outp *= -1;

		cout << "Операция успешно выполнена: " << outp << endl;
	}

	return 3;
}
*/
// ---------

// --------- // 3е задание:

/*
int main()
{
	setlocale(LC_ALL, "Russian");

	long d; // Не могу понять, почему при вводе числа 10^17 степени и меньше, получается ответ 7.
	// А с мальенькими числами всё работает.

	cout << "Введите целое число: ";
	cin >> d;
	cout << endl;

	cout << "Последняя цифра числа = " << (d % 10) << endl;

	return 4;
}
*/

// --------

// -------- // 4е задание:

// И я уже устал креативить)

/*

int main()
{
	setlocale(LC_ALL, "Russian");

	float a,b;
	cout << "Введите делитель: ";
	cin >> a;
	cout << endl;

	cout << "Введите частное: ";
	cin >> b;
	cout << endl;

	if(b != 0) 
	{
		cout << int(ceil(a / b)) << endl;
	}
	else
	{
		cout << "Нет!" << endl;
	}

	return 5;
}

*/

// -------

// ------- // 5е задание:

/*

int main()
{
	setlocale(LC_ALL, "Russian");

	int a;
	cout << "Введите число: ";
	cin >> a;
	cout << endl;

	if ((a > 126) || (a < 32))
	{
		cout << "Введите правильное число: 32 <= a <= 126" << endl;
	}
	else
	{
		cout << char(a) << endl; // Явное преобразование типов - наше всё))
	}

	return 6;
}
*/

