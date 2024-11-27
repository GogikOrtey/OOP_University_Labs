#pragma once
using namespace std;
#include <iostream>

class Integer
{
public:
	Integer() {};
	virtual ~Integer() {};

	void virtual Summ(int b) = 0; // +
	void virtual mult(int b) = 0; // *
};

