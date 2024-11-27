#include "MyClassForBuilding.h"
#include <iostream>
#include <cmath>
#include <time.h>
#include <string>
#pragma once
using namespace std;

bool MyClassForBuilding::operator<=(MyClassForBuilding& m2)
{
	if (myBuilding.Floors <= m2.myBuilding.Floors) return true;
	else return false;
}

bool MyClassForBuilding::operator>=(MyClassForBuilding& m2)
{
	if (myBuilding.Floors >= m2.myBuilding.Floors) return true;
	else return false;
}

bool MyClassForBuilding::operator!=(MyClassForBuilding& m2)
{
	if (myBuilding.Floors != m2.myBuilding.Floors) return true;
	else return false;
}
