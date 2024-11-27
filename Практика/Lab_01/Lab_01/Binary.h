#pragma once
#include "Integer.h"
#include <iostream>
using namespace std;

class Binary : public Integer
{
	int* NumbersB = new int[5];

	int BinToDec(int a);
	int DecToBin(int a);

public: 
	int num;

	Binary();
	~Binary() {};

	void SetNum(int a[5]);
	void Print();

	void Summ(int b);
	void mult(int b);
};

