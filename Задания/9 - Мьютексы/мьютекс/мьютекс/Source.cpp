#include <iostream>
#include "hungryperson.h"
#include "plate.h"
#include <cmath>
#include <time.h>
#include <string>
#include <sstream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "rus");
    Plate plate1(20); // 1Р№ Р±РѕРєСЃ РїРѕРіСЂСѓР·РєРё
    Plate plate2(20); // 2Р№ Р±РѕРєСЃ РїРѕРіСЂСѓР·РєРё

    // Р’ РєРѕРЅСЃС‚СЂСѓРєС‚РѕСЂ РїРµСЂРµРґР°С‘Рј СѓРєР°Р·Р°С‚РµР»СЊ РЅР° Р±РѕРєСЃ РїРѕРіСЂСѓР·РєРё, РёР· РєРѕС‚РѕСЂРѕРіРѕ Р±СѓРґРµС‚ Р·Р°РіСЂСѓР¶Р°С‚СЊСЃСЏ С‡РµР»РѕРІРµРє
    HungryPerson hp1(&plate1, 1);
    HungryPerson hp2(&plate1, 2);

    // Рђ СЌС‚Рё Р·Р°РіСЂСѓР¶Р°СЋС‚СЃСЏ РёР· РґСЂСѓРіРѕРіРѕ Р±РѕРєСЃР°
    HungryPerson hp4(&plate2, 4);
    HungryPerson hp5(&plate2, 5);


    // Р–РґС‘Рј Р·Р°РІРµСЂС€РµРЅРёСЏ РІСЃРµС… РїРѕС‚РѕРєРѕРІ
    hp1.getThreadReference()->join();
    hp2.getThreadReference()->join();

    hp4.getThreadReference()->join();
    hp5.getThreadReference()->join();

    cout << "Р’СЃРµ РіСЂСѓР·С‹ РїРѕРіСЂСѓР¶РµРЅС‹!" << endl;
}