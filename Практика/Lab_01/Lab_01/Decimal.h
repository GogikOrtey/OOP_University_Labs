#pragma once
#include "Integer.h"
#include <iostream>
using namespace std;

class Decimal : public Integer
{
private:
	int* NumbersD = new int[5];

public:
	int PosComma = -1; // Позиция запятой
	float num = 0;

	Decimal();
	~Decimal() {};

	void SetNum(int a[5]);
	void Print();

	void Summ(int b);
	void mult(int b);
};