#include <iostream>
#include <cmath>
#include <time.h>
#include <string>
#include <sstream>
#include <list>
#include <set>
#include "AirPlane.h"
#pragma warning (disable:4786)
using namespace std;

// РљР _4 Р’Р°СЂРёР°РЅС‚ 7

/*
	+ Р‘Р°Р·РѕРІР°СЏ С‡Р°СЃС‚СЊ:
	РЎРѕР±СЃС‚РІРµРЅРЅС‹Р№ РєР»Р°СЃСЃ: РґРѕР»Р¶РµРЅ СЃРѕРґРµСЂР¶Р°С‚СЊ РёРЅС„РѕСЂРјР°С†РёСЋ Рѕ СЃР°РјРѕР»РµС‚Рµ (РјР°СЂРєР°, С‚РёРї (РїР°СЃСЃР°Р¶РёСЂСЃРєРёР№, 
	РіСЂСѓР·РѕРІРѕР№, РІРѕРµРЅРЅС‹Р№-РїРµСЂРµС‡РёСЃР»РµРЅРёРµ), РЅРѕРјРµСЂ, РІРµСЃ). РџСЂРµРґСѓСЃРјРѕС‚СЂРµС‚СЊ РІРѕР·РјРѕР¶РЅРѕСЃС‚СЊ СЂР°Р·РґРµР»СЊРЅРѕРіРѕ РёР·РјРµРЅРµРЅРёСЏ РїРѕР»РµР№ РєР»Р°СЃСЃР°, 
	СЃРѕР·РґР°РЅРёСЏ Рё СѓРЅРёС‡С‚РѕР¶РµРЅРёСЏ  РѕР±СЉРµРєС‚РѕРІ  СЌС‚РѕРіРѕ  РєР»Р°СЃСЃР°,  РІС‹РІРѕРґР°  РґР°РЅРЅС‹С…  РЅР°  РєРѕРЅСЃРѕР»СЊ.
	
	РЎСЂРµРґРЅРёР№ СѓСЂРѕРІРµРЅСЊ:
	РќР°РїРёСЃР°С‚СЊ С„СѓРЅРєС†РёСЋ, С„РѕСЂРјРёСЂСѓСЋС‰СѓСЋ РїРѕ Р·Р°РґР°РЅРЅРѕРјСѓ СЃРїРёСЃРєСѓ(С€Р°Р±Р»РѕРЅРЅС‹Р№ РєР»Р°СЃСЃ list) 
	РјРЅРѕР¶РµСЃС‚РІРѕ/РјСѓР»СЊС‚РёРјРЅРѕР¶РµСЃС‚РІРѕ РёР· СЌР»РµРјРµРЅС‚РѕРІ СЃРїРёСЃРєР° СЃ С‡РµС‚РЅС‹РјРё Р·РЅР°С‡РµРЅРёСЏРјРё Рё СЂР°СЃРїРµС‡Р°С‚С‹РІР°СЋС‰СѓСЋ РµРіРѕ. 
	РџСЂРѕРґРµРјРѕРЅСЃС‚СЂРёСЂРѕРІР°С‚СЊ СЂР°Р±РѕС‚Сѓ С„СѓРЅРєС†РёРё РЅР° РєРѕРЅС‚РµР№РЅРµСЂР°С… STLСЃРѕРґРµСЂР¶Р°С‰РёС… РѕР±СЉРµРєС‚С‹ РІСЃС‚СЂРѕРµРЅРЅРѕРіРѕ С‚РёРїР° Рё 
	СЃРѕР±СЃС‚РІРµРЅРЅРѕРіРѕ РєР»Р°СЃСЃР° (С‡РµС‚РЅС‹РјРё СЃС‡РёС‚Р°С‚СЊ С‚Рµ Сѓ РєРѕС‚РѕСЂС‹С… С‚РёРї РїР°СЃСЃР°Р¶РёСЂСЃРєРёР№). 
*/


//void main1()
//{
//	enum aa
//	{
//		a = 0,
//		b
//	};
//
//	aa Aaa = a;
//	aa Aab = b;
//
//	if (Aaa < Aab) cout << "a" << endl;
//}

set<AirPlane> Func(list<AirPlane> list1)
{
	set<AirPlane> set1;
	//AirPlane *MyAir;
	AirPlane::type MycurrType;

	for (list<AirPlane>::iterator it =
		list1.begin();
		it != list1.end();
		it++)
	{
		MycurrType = it->currType;

		if (MycurrType == 0)
		{
			set1.insert(*it);
		}
	}

	return set1;
}

void main()
{
	setlocale(LC_ALL, "rus");

	AirPlane MyAir;

	MyAir.Info();

	string s = "Sam";

	AirPlane MyAir2(s, 2, 2.12, MyAir.cargo);

	MyAir2.Info();

	MyAir2.weight = 0.12;

	MyAir2.Info();

	// ------
	cout << "-----" << endl;
	cout << "2СЏ С‡Р°СЃС‚СЊ Р·Р°РґР°РЅРёСЏ: " << endl;
	cout << endl;

	list<AirPlane> list1;

	AirPlane MyAir01(s, 01, 00, MyAir.cargo); list1.push_back(MyAir01);
	AirPlane MyAir02(s, 02, 00, MyAir.military); list1.push_back(MyAir02);
	AirPlane MyAir03(s, 03, 00, MyAir.passenger); list1.push_back(MyAir03);
	AirPlane MyAir04(s, 04, 00, MyAir.military); list1.push_back(MyAir04);
	AirPlane MyAir05(s, 05, 00, MyAir.passenger); list1.push_back(MyAir05);

	set<AirPlane> set1 = Func(list1);

	for (set<AirPlane>::iterator it =
		set1.begin();
		it != set1.end();
		it++)
	{
		AirPlane MyAir00 = *it;
		MyAir00.Info();
	}
}

