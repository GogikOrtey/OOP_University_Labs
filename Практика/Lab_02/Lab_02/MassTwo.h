#include <iostream>
#include <cmath>
#include <time.h>
#pragma once
using namespace std;

class MassTwo
{
public:
	int a = 0;
	int b = 0;

	MassTwo() {};
	MassTwo(int a, int b)
	{
		this->a = a;
		this->b = b;
	}

	MassTwo& operator + (MassTwo& m2);
	MassTwo& operator * (MassTwo& m2);
	MassTwo& operator / (MassTwo& m2);
	MassTwo& operator - (MassTwo& m2);
	bool operator == (int m2);
	MassTwo& operator = (MassTwo& m2);

	// Никогда больше в жизни не буду страдать такой фигнёй

};

