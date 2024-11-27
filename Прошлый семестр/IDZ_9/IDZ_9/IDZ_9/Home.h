#pragma once
using namespace std;
#include <iostream>
#include <string>

class Home
{
public:
	string Address = "";
	int NumberOfFlat = 0;

	Home();

	void Home_h(string address);

	void info();
};

class Flat
{
public:
	Home Home_;
	int NubberThisFlat = -1;
	float NubberOfRooms = 0;

	Flat(Home home);

	void info();
};