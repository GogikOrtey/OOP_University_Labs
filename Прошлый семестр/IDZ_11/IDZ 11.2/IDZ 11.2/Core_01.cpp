#include "DoobleAr.h"

#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

float random()
{
	float t = (rand() % 99 + 0);
	float m = t / 100;
	return(m);
}

void main()
{
	srand(time(0));
	setlocale(LC_ALL, "rus");

	int s = 0;

	while (true)
	{
		cout << "”кажите размер 2го массива: ";		
		cin >> s;
		if (s > 0) break;
	}

	DoobleAr arr1, arr2(s);

	cout << endl;
	arr1.info();
	arr2.info();

	cout << "¬водим значени€ дл€ 1го массива:" << endl;

	for (int i = 0; i < arr1.GetSize(); i++)
	{
		float n;
		cin >> n;
		double a = n + random();
		arr1.addElement(a);
	}

	cout << endl;
	arr1.info();
	cout << endl;
	cout << "¬водим значени€ дл€ 2го массива:" << endl;

	for (int i = 0; i < arr2.GetSize(); i++)
	{
		float n;
		cin >> n;
		double a = n + random();
		arr2.addElement(a);
	}

	cout << endl;
	arr2.info();
	cout << endl;

	arr2++;

	cout << endl;
	arr2.info();
	cout << endl;
}