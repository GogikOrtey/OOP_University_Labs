#include "Binary.h"
#include <iostream>
using namespace std;

int Binary::BinToDec(int a)
{
	int b = 0;
	int i = 0;

	while (a > 0)
	{
		b += a % 10 * pow(2, i);
		a = a / 10;
		i++;
	}
	return b;
}

int Binary::DecToBin(int a)
{
	int b = 0;
	int c = 0;
	int i = 0;

	while (a > 0)
	{
		b += (a % 2) * pow(10.0, i);
		a /= 2;
		i++;
	}
	return b;
}


Binary::Binary()
{
	for (int i = 0; i < 5; i++)
	{
		NumbersB[i] = 0;
	}
}

void Binary::SetNum(int a[5])
{
	for (int i = 0; i < 5; i++)
	{
		NumbersB[i] = a[i];
	}
}

void Binary::Print()
{
	if (num == 0)
	{
		for (int i = 0; i < 5; i++)
		{
			num += NumbersB[i] * pow(10, (5 - i - 1));
		}

		cout << "Двоичное число = " << num << endl;
	}
	else cout << "Двоичное число = " << num << endl;
}


void Binary::Summ(int b) // +
{
	int c = BinToDec(num);
	int d = b + c;
	//cout << "c = " << c << "d = " << d << endl;
	num = DecToBin(d);
}

void Binary::mult(int b) // *
{
	int c = BinToDec(num);
	int d = b * c;
	//cout << "c = " << c << "d = " << d << endl;
	num = DecToBin(d);
}