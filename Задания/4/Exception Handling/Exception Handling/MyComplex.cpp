#include "MyComplex.h"
#include <stdio.h>

MyComplex::MyComplex()
{
    re = 0;
    im = 0;
}

MyComplex::MyComplex(double re, double im)
{
    this->re = re;
    this->im = im;
}

MyComplex::operator char* ()
{
    sprintf_s(buf, "%f + i%f", re, im);
    return buf;
}

bool MyComplex::operator !=(int x)
{
    if (x == 0)
    {
        if (re == 0 && im == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    else
    {
        return true;
    }
}

MyComplex MyComplex::operator *(MyComplex c2)
{
    MyComplex help;
    help.re = re * c2.re - im * c2.im;
    help.im = re * c2.im + im * c2.re;
    return help;
}