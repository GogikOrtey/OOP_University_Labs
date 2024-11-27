#include "MassTwo.h"
#include <iostream>
#include <cmath>
#include <time.h>
#include <string>
using namespace std;

SuperInt& SuperInt::operator+(SuperInt& m2)
{
	SuperInt c;

	c.super = this->super + m2.super;

	return(c);
}

SuperInt& SuperInt::operator-(SuperInt& m2)
{
	SuperInt c;

	c.super = this->super - m2.super;

	return(c);
}

bool SuperInt::operator>(SuperInt& m2)
{
	if(this->super > m2.super) return(true);
	else return(false);
}

bool SuperInt::operator==(int m2)
{
	if (this->super != m2) return false;
	else return true;
}

bool SuperInt::operator!=(int m2)
{
	if (this->super != m2) return true;
	else return false;
}

SuperInt& SuperInt::operator=(SuperInt& m2)
{
	this->super = m2.super;

	return(*this);
}

SuperInt& SuperInt::operator=(int aa)
{
	this->super = aa;

	return(*this);
}

int SuperInt::operator<<(SuperInt& m2)
{
	return this->super;
}

int SuperInt::operator<<(int)
{
	return this->super;
}
