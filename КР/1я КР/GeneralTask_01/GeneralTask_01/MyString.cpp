#include "MyString.h"
#include <iostream>
using namespace std;

MyString::MyString()
{
	simv = new char[1];
	simv[0] = '\0';
	length = 0;
}

MyString::MyString(char* massSimv)
{
	simv = massSimv;
	length = sizeof(massSimv);
}

//MyString::MyString(string massSimv)
//{
//	length = massSimv.length();
//	//char* simv = new char[length];
//
//	for (int i = 0; i < length; i++)
//	{
//		simv[i] << massSimv[i];
//	}
//}

MyString::~MyString()
{
}

MyString::MyString(char simvol)
{
	simv = new char[2];
	simv[1] = '\0';
	simv[0] = simvol;
	length = 1;
}

//void MyString::Print(char* massSimv)
//{
//	cout << "Р’С‹РІРѕРґРёРј СЃС‚СЂРѕРєСѓ:" << endl;
//
//	for (int i = 0; i < length; i++)
//	{
//		cout << massSimv[i];
//	}
//
//	cout << endl;
//}

void MyString::Print()
{
	cout << "Р’С‹РІРѕРґРёРј СЃС‚СЂРѕРєСѓ:" << endl;

	string s = "";

	for (int i = 0; i < length; i++)
	{
		if(simv[i]!='СЌ')
		{
			s += simv[i];
		}
	}

	if ((s.length() == 0) || (simv[0] == '\0'))
	{
		cout << "[РЎС‚СЂРѕРєР° РїСѓСЃС‚Р°]" << endl;
	}
	else cout << s;

	cout << endl;
}

MyString& MyString::operator+(MyString& massSimv)
{
	int length3 = length + sizeof(massSimv.simv);
	MyString simv3(simv);

	int j = 0;

	for (int i = length; i < sizeof(massSimv); i++)
	{
		simv3.simv[i] = massSimv.simv[j];
		j++;
	}

	return(simv3);
}

MyString& MyString::operator-(MyString& massSimv)
{
	MyString simv3;

	// РќР°С…РѕРґРёРј РЅР°РёРјРµРЅСЊС€СѓСЋ РґР»РёРЅРЅСѓ, С‡С‚Рѕ Р±С‹ РЅРµ Р±С‹Р»Рѕ РІС‹С…РѕРґР° Р·Р° РїСЂРµРґРµР»С‹ РјР°СЃСЃРёРІР°
	int length3 = 0;
	if (length < massSimv.length) length3 = length;
	else length3 = massSimv.length;

	int y = 0;

	for (int i = 0; i < length3; i++)
	{
		if (simv[i] != massSimv.simv[i])
		{
			simv3.simv[y] = simv[i];
		}
	}

	return(simv3);
}

void MyString::In()
{
	cout << "Р’РІРѕРґРёС‚Рµ Р·РЅР°С‡РµРЅРёСЏ СЃС‚СЂРѕРєРё, РїРѕСЃРёРјРІРѕР»СЊРЅРѕ. РљРѕРЅРµС† РІРІРѕРґР° - РјРёРЅСѓСЃ" << endl;

	char a = '0';
	int i = 0;
	while (a != '-')
	{
		cin >> a;
		simv[i] = a;
		i++;
	}
	simv[i] = '\0';
}