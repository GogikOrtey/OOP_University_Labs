#include "MassTwo.h"
#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

MassTwo& MassTwo::operator+(MassTwo& m2)
{
	MassTwo c;

	c.a = this->a + m2.a;
	c.b = this->b + m2.b;

	return(c);
}

MassTwo& MassTwo::operator-(MassTwo& m2)
{
	MassTwo c;

	c.a = this->a - m2.a;
	c.b = this->b - m2.b;

	return(c);
}

MassTwo& MassTwo::operator*(MassTwo& m2)
{
	MassTwo c;

	c.a = this->a * m2.a;
	c.b = this->b * m2.b;

	return(c);
}

MassTwo& MassTwo::operator/(MassTwo& m2)
{
	MassTwo c;

	if (m2.a != 0) c.a = this->a / m2.a;
	else c.a = 0;

	if (m2.b != 0) c.b = this->b / m2.b;
	else c.b = 0;

	return(c);
}

bool MassTwo::operator==(int m2)
{
	if (this->a != m2) return false;
	if (this->b != m2) return false;
	else return true;
}

MassTwo& MassTwo::operator=(MassTwo& m2)
{
	// 2 раза умер, пока не сделал это правильно

	this->a = m2.a;
	this->b = m2.b;

	return(*this);
}