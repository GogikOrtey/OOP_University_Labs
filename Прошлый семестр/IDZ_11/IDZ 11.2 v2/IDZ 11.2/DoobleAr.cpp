 #include "DoobleAr.h"
#include <iostream>
using namespace std;

DoobleAr::DoobleAr()
{
	this->size = 2; // Размер по умолчанию = 2
	this->arr = new double[size];

	for (int i = 0; i < size; i++)
	{
		this->arr[i] = 0;
	}
}

DoobleAr::DoobleAr(int size)
{
	this->size = size;
	arr = new double[size];

	for (int i = 0; i < size; i++)
	{
		this->arr[i] = 0;
	}
}


DoobleAr::~DoobleAr()
{
	cout << "Destr sucs compl for mass size = " << this->size << endl;
	delete[] this->arr;
}


void DoobleAr::info()
{
	cout << "Размер массива = " << this->size << endl;
	for (int i = 0; i < size; i++) 
	{
		cout << arr[i] << "; ";
	}
	cout << endl;
}

int DoobleAr::GetSize()
{
	return this->size;
}

DoobleAr& DoobleAr::addElement(double elem)
{
	bool fl = false;
	int ii = 0;

	for (int i = 0; i < size; i++)
	{
		if (this->arr[i] == 0)
		{
			fl = true;
			ii = i;
			break;
		}
	}

	if (fl == true) // Если в массиве есть нулевые элементы
	{
		//cout << "В массиве есть нулевой элемент с индексом " << ii << endl;
		this->arr[ii] = elem;
	}

	if (fl == false) // Если в массиве нет нулевых элементов
	{
		cout << "size++" << endl;
		double* arr2 = new double[size+1];

		for (int i = 0; i < size; i++)
		{
			arr2[i] = this->arr[i];
			cout << "arr2[" << i << "] = " << arr2[i];
		}
		arr2[size] = elem;

		size++;

		this->arr = arr2;
	}

	return *this;
}

DoobleAr& DoobleAr::delElement(int id)
{
	size--;
	double* arr2 = new double[size];

	for (int i = 0; i < id; i++)
	{
		arr2[i] = this->arr[i];
	}

	for (int i = id; i < size; i++)
	{
		arr2[i] = this->arr[i + 1];
	}

	this->arr = arr2;

	return *this;
}

DoobleAr& DoobleAr::operator++(int)
{
	for (int i = 0; i < this->size; i++)
	{
		this->arr[i]++; // = this->arr[i] + 1;
	}
	return *this;
}
