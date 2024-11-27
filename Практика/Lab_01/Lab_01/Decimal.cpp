#include "Decimal.h"
#include <iostream>
using namespace std;

Decimal::Decimal()
{
	num = 0;
	for (int i = 0; i < 5; i++)
	{
		NumbersD[i] = 0;
	}
}

void Decimal::SetNum(int a[5])
{
	for (int i = 0; i < 5; i++)
	{
		NumbersD[i] = a[i];
	}
}

void Decimal::Print()
{
	if (num == 0)
	{
		for (int i = 0; i < 5; i++)
		{
			num += NumbersD[i] * pow(10, (5 - i - 1));
		}

		num = num / pow(10, (5 - PosComma));

		cout << "Число = " << num << endl;
	}
	else cout << "Число = " << num << endl;
}

void Decimal::Summ(int b) // +
{
	num = (num + b);
}

void Decimal::mult(int b) // *
{
	num = (num * b);
}