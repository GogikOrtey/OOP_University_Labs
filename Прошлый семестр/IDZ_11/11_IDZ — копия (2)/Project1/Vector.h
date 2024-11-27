#pragma once
class Vector
{
private:
	float x1 = 0;
	float y1 = 0;
	float x2 = 0;
	float y2 = 0;

public:
	Vector();
	Vector(float x1, float y1, float x2, float y2);
	Vector(bool l);
	void info();

	bool operator == (const Vector& b);
	bool operator != (const Vector& b);
};

