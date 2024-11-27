#include <iostream>
#include <cmath>
#include <time.h>
#include <string>
#pragma once
using namespace std;

class SuperInt
{
public:
	int super = 0;

	SuperInt() {};
	SuperInt(int a)
	{
		this->super = a;
	}

	SuperInt& operator + (SuperInt& m2);
	SuperInt& operator - (SuperInt& m2);
	bool operator == (int m2);
	SuperInt& operator = (SuperInt& m2);
	bool operator == (SuperInt& m2);
	SuperInt& operator * (SuperInt& m2);
	SuperInt& operator * (int m2);
	SuperInt& operator = (int aa);

	bool operator > (SuperInt& m2);
	bool operator != (int m2);
};