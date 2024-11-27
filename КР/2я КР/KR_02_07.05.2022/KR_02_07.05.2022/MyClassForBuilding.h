#include <iostream>
#include <cmath>
#include <time.h>
#include <string>
#pragma once
using namespace std;

struct Adress
{
	string street;
	string house;
	string city;
};

struct MyBuilding
{
	Adress Adr;
	int Floors; // ����-�� ������
	bool Residential; // true, ���� �����
};

class MyClassForBuilding
{
public:
	MyBuilding myBuilding;

	MyClassForBuilding()
	{
		myBuilding.Adr.street = "";
		myBuilding.Adr.house = "";
		myBuilding.Adr.city = "";

		myBuilding.Floors = 0; // ����-�� ������
		myBuilding.Residential = false; // true, ���� �����
	}

	bool operator <= (MyClassForBuilding& m2);
	bool operator >= (MyClassForBuilding& m2);
	bool operator != (MyClassForBuilding& m2);
};

