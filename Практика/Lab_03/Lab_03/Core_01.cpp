п»ї#include <iostream>
#include <cmath>
#include <time.h>
#include <string>
#include "MyPatternMassClass.h"
#include "MassTwo.h"
using namespace std;

ostream& operator<<(ostream& os, const SuperInt& d)
{
	return os << d.super << endl;
}

void main()
{
	setlocale(LC_ALL, "rus");
	int const sizeMass = 5;

	// РЇ СЃРґРµР»Р°Р» СЂР°Р·РЅС‹Рµ РєРѕРјР±РёРЅР°С†РёРё СЌС‚РёС… РјРµС‚РѕРґРѕРІ, С‡С‚Рѕ Р±С‹ РїРѕСЃРјРѕС‚СЂРµС‚СЊ, РєР°Рє РѕРЅРё СЂР°Р±РѕС‚Р°СЋС‚ РґСЂСѓРі РїРѕСЃР»Рµ РґСЂСѓРіР°



	cout << "--- <int> ---" << endl;

	MyPatternMassClass <int> MyClass;

	MyClass.DelAllData();
	MyClass.GetMin();
	MyClass.Info();

	cout << "-----" << endl;

	MyClass.SetMass();
	MyClass.Info();

	cout << endl;
	cout << endl;
	cout << "--- <float> ---" << endl;

	MyPatternMassClass <float> MyClass2;

	MyClass2.SetMass();
	MyClass2.Info();
	MyClass2.GetMin();
	MyClass2.DelAllData();
	MyClass2.Info();

	cout << endl;
	cout << endl;
	cout << "--- <char> ---" << endl;

	MyPatternMassClass <char> MyClass3;

	char* NMassChar = new char[sizeMass];

	NMassChar[0] = '+';
	NMassChar[1] = '-';
	NMassChar[2] = 'z';
	NMassChar[3] = 'СЏ';
	NMassChar[4] = 'В§';

	MyClass3.SetMass(NMassChar);
	MyClass3.Info();
	MyClass3.GetMin();
	MyClass3.DelAllData();


	cout << endl;
	cout << endl;
	cout << "--- <bool> ---" << endl;

	MyPatternMassClass <bool> MyClass4;

	MyClass4.SetMass();
	MyClass4.Info();
	MyClass4.GetMin();
	MyClass4.DelAllData();
	MyClass4.Info();

	cout << endl;
	cout << endl;
	cout << "--- <SuperInt> ---" << endl;
	MyPatternMassClass <SuperInt> MyClass5;

	SuperInt* NMassMassTwo = new SuperInt[sizeMass];

	NMassMassTwo[0].super = 0;
	NMassMassTwo[1].super = 1;
	NMassMassTwo[2].super = 2;
	NMassMassTwo[3].super = 3;
	NMassMassTwo[4].super = 4;

	MyClass5.SetMass(NMassMassTwo);
	MyClass5.Info();
	MyClass5.GetMin();
	MyClass5.DelAllData();
	MyClass5.Info();
}