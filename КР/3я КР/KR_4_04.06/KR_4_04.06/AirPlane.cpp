#include "AirPlane.h"
#include <iostream>
#include <cmath>
#include <time.h>
#include <string>
#include <sstream>
using namespace std;

AirPlane::AirPlane() // Конструктор без параметров
{
	brand = "";
	num = 0;
	weight = 0;
	currType = passenger;
}

AirPlane::AirPlane(string brand1, int num1, float weight1, type currType1) // Конструктор с параметрами
{
	brand = brand1;
	num = num1;
	weight = weight1;
	currType = currType1;
}

void AirPlane::Info()
{
	cout << "Выводим информацию о самолёте: " << endl;
	cout << "brand = " << brand << " num = " << num << " weight = " << weight << " currType = "; //<< currType << endl;

	if (currType == 0) cout << "passenger";
	else if (currType == 1) cout << "cargo";
	else cout << "military";

	cout << endl;
	cout << endl;
}

bool operator<(const AirPlane& a1, const AirPlane& a2)
{
	if (a1.num < a2.num) return true;
	else if (a1.num == a2.num)
	{
		if (a1.weight < a2.weight)  return true;
		else if (a1.weight == a2.weight)
		{
			if (a1.currType < a2.currType) return true;
			else return false;
		}
		else return false;
	}
	else return false;
}

bool operator==(const AirPlane& a1, const AirPlane& a2)
{
	if ((a1.num == a2.num) && (a1.brand == a2.brand) && (a1.currType == a2.currType) && (a1.weight == a2.weight)) return true;
	else return false;
}