#include <iostream>
#include "Integer.h"
#include "Decimal.h"
#include "Binary.h"
using namespace std;


void main()
{
	setlocale(LC_ALL, "rus");
	cout << "Р’РІРѕРґРёРј С‡РёСЃР»Рѕ: " << endl;

	int* Numbers = new int[5]; // РџСѓСЃС‚СЊ Р±СѓРґРµС‚ РјР°РєСЃРёРјР°Р»СЊРЅРѕ С‡РёСЃР»Рѕ РёР· 5Рё СЃРёРјРІРѕР»РѕРІ
	bool isBinary = true;
	int y = -1; // Р’РІРѕРґ РґР»СЏ РѕРїСЂРµРґРµР»РµРЅРёСЏ Р±РёРЅР°СЂРЅР°СЏ РёР»Рё 10СЏ СЃРёСЃС‚РµРјР°
	int z = -1; // Р’РІРѕРґ РґР»СЏ РѕРїСЂРµРґРµР»РµРЅРёСЏ РјРµСЃС‚Р° Р·Р°РїСЏС‚РѕР№ РІ С‡РёСЃР»Рµ

	Decimal Dec;
	Binary Bin;

	Integer* Inn;

	while (true)
	{
		isBinary = true;

		for (int i = 0; i < 5; i++)
		{
			int n = 0;
			cin >> n;
			if (!((n == 0) || (n == 1)))
			{
				isBinary = false;
			}
			Numbers[i] = n;
		}

		while (true)
		{
			cout << "Р’С‹Р±РµСЂРµС‚Рµ РЅСѓР¶РЅСѓСЋ РїРѕРґСЃРёСЃС‚РµРјСѓ. Р’РІРµРґРёС‚Рµ:" << endl;
			cout << "0 - РµСЃР»Рё Р”РІРѕРёС‡РЅР°СЏ, 1 - РµСЃР»Рё Р”РµСЃСЏС‚РёС‡РЅР°СЏ" << endl;


			cin >> y;

			if (!((y == 0) || (y == 1)))
			{
				cout << "РќРµРІРµСЂРЅС‹Р№ РІРІРѕРґ, РїРѕРїСЂРѕР±СѓР№С‚Рµ Р·Р°РЅРѕРІРѕ" << endl;
			}
			else break;	
		}

		if (y == 0)
		{
			if (isBinary == false)
			{
				cout << "РќРµРІРµСЂРЅС‹Р№ РІРІРѕРґ С‡РёСЃР»Р°, РїРѕРїСЂРѕР±СѓР№С‚Рµ РµС‰С‘ СЂР°Р·, РёСЃРїРѕР»СЊР·СѓСЏ 0 Рё 1" << endl;
			}
			else
			{
				Inn = &Bin;
				
				Bin.SetNum(Numbers);

				// Р—РЅР°С‡РµРЅРёСЏ РґР»СЏ Mult Рё Summ РІРІРѕРґСЏС‚СЃСЏ РІ РґРµСЃСЏС‚РёС‡РЅРѕРј РІРёРґРµ, Рё СѓР¶Рµ РІРЅСѓС‚СЂРё РєР»Р°СЃСЃРѕРІ РїСЂРµРѕР±СЂР°Р·РѕРІС‹РІР°СЋС‚СЃСЏ РєР°Рє РЅР°РґРѕ

				Bin.Print();
				cout << "* 5 " << endl; 
				//Bin.mult(5);

				Inn->mult(5);

				Bin.Print();
				cout << "+ 3 " << endl;	Bin.Summ(3);
				Bin.Print();

				break;
			}
		}
		else if (y == 1)
		{
			while (true)
			{
				cout << "Р’С‹Р±РµСЂРµС‚Рµ РјРµСЃС‚Рѕ, РіРґРµ Р±СѓРґРµС‚ СЃС‚РѕСЏС‚СЊ Р·Р°РїСЏС‚Р°СЏ, РІ РІР°С€РµРј С‡РёСЃР»Рµ. Р’РІРµРґРёС‚Рµ С†РёС„СЂСѓ РѕС‚ 0 РґРѕ 4" << endl;
				cin >> z;
				if (!((z >= 0) && (z <= 4)))
				{
					cout << "Р§РёСЃР»Рѕ РІРІРµРґРµРЅРѕ РЅРµРІРµСЂРЅРѕ, РїРѕРїСЂРѕР±СѓР№С‚Рµ РµС‰С‘ СЂР°Р·" << endl;
				}
				else break;
			}

			Dec.PosComma = z;
			Dec.SetNum(Numbers);

			Dec.Print();
			cout << "* 5 " << endl; Dec.mult(5);
			Dec.Print();
			cout << "+ 3 " << endl;	Dec.Summ(3);
			Dec.Print();

			break;
		}		
	}
}