#pragma once
class DoobleAr
{
private:
	int size;
	double* arr;
public:
	DoobleAr();
	DoobleAr(int size);
	~DoobleAr();
	void info();
	int GetSize();
	DoobleAr& addElement(double elem);
	DoobleAr& delElement(int id);
	DoobleAr& operator ++(int);
};

