#include "DoobleAr.h"
#include <iostream>
using namespace std;

// Поле индекс убрать. При создании массива без параметорв -  стартовый размер
// При добавлении элемента, создаём массив на +1 элемент больше, и перезаписывам туда все значения.

// Переписать

DoobleAr::DoobleAr()
{
	index = 0;
	this->size = 5; // Размер по умолчанию = 5
	this->arr = new double[size];
}

DoobleAr::DoobleAr(int size)
{
	index = 0;
	this->size = size;
	arr = new double[size];
}

DoobleAr::~DoobleAr()
{
	cout << "Destr sucs compl for mass size = " << this->size << endl;
	delete[] this->arr;
}

void DoobleAr::info()
{
	cout << "Размер массива = " << this->size << endl;
	for (int i = 0; i < index; i++) {
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
	if ((index + 1) <= size) {
		this->arr[index] = elem;
		this->index++;
	}
	else {
		cout << "Массив заполнен" << endl;
	}
	return *this;
}

DoobleAr& DoobleAr::delElement(int id)
{
	for (int i = id; i < this->index - 1; i++) {
		this->arr[i] = this->arr[i + 1];
	}
	this->index--;
	return *this;
}

DoobleAr& DoobleAr::operator++(int)
{
	for (int i = 0; i < this->index; i++)
	{
		this->arr[i]++; // = this->arr[i] + 1;
	}
	return *this;
}
