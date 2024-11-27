#include "Vector.h"
#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

Vector::Vector() {}

Vector::Vector(float x1, float y1, float x2, float y2)
{
	this->x1 = x1;
	this->x2 = x2;
	this->y1 = y1;
	this->y2 = y2;
}

Vector::Vector(bool l) // �����������, ��� ������������� ������ �������� �������, ������ � �������, �� ������������
{
	int x1, x2, y1, y2;

	cout << "x1 = ";
	cin >> x1;
	cout << "x2 = ";
	cin >> x2;
	cout << "y1 = ";
	cin >> y1;
	cout << "y2 = ";
	cin >> y2;

	this->x1 = x1;
	this->x2 = x2;
	this->y1 = y1;
	this->y2 = y2;
}

void Vector::info()
{
	cout << "������ ��� �� ����� (" << this->x1 << "," << this->y1 << "), � ����� (" << this->x2 << "," << this->y2 << ")" << endl;
	float l1 = x2 - x1;
	float l2 = y2 - y1;
	float l = sqrt(l1 * l1 + l2 * l2);
	cout << "������ ������� = " << l << endl;
}

bool operator==(const Vector& a, const Vector& b)
{
	float l1 = a.x2 - a.x1;
	float l2 = a.y2 - a.y1;
	float al = sqrt(l1 * l1 + l2 * l2);

	l1 = b.x2 - b.x1;
	l2 = b.y2 - b.y1;
	float bl = sqrt(l1 * l1 + l2 * l2);

	if (al == bl)	return true;
	else return false;
}

bool operator!=(const Vector& a, const Vector& b)
{
	float l1 = a.x2 - a.x1;
	float l2 = a.y2 - a.y1;
	float al = sqrt(l1 * l1 + l2 * l2);

	l1 = b.x2 - b.x1;
	l2 = b.y2 - b.y1;
	float bl = sqrt(l1 * l1 + l2 * l2);

	if (al == bl)	return true;
	else return false;
}
