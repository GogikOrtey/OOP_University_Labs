#pragma once
class MyComplex
{
private:
    char buf[30];
public:
    double re;
    double im;
    MyComplex();
    MyComplex(double re, double im);
    operator char* ();
    bool operator !=(int x);
    MyComplex operator* (MyComplex c2);
};

