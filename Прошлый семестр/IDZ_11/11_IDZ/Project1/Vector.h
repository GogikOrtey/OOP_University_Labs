#pragma once
class Vector
{
private:
	int x1 = 0;
	int y1 = 0;
	int x2 = 0;
	int y2 = 0;

public:
	Vector();
	Vector(float x1, float y1, float x2, float y2);
	Vector(bool l);
	void info();

	friend bool operator == (const Vector& a, const Vector& b);
	friend bool operator != (const Vector& a, const Vector& b);
};

