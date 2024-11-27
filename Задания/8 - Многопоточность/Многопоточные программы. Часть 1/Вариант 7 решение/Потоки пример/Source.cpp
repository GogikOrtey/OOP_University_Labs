//7. РќР°Р№С‚Рё РїСЂРѕРёР·РІРµРґРµРЅРёРµ Рё С‡Р°СЃС‚РЅРѕРµ РІСЃРµС… РѕС‚СЂРёС†Р°С‚РµР»СЊРЅС‹С… СЌР»РµРјРµРЅС‚РѕРІ СЃС‚СЂРѕРє РјР°С‚СЂРёС†С‹. 
// РљР°Р¶РґР°СЏ СЃС‚СЂРѕРєР° РѕР±СЂР°Р±Р°С‚С‹РІР°РµС‚СЃСЏ СЃРІРѕРёРј РѕС‚РґРµР»СЊРЅС‹Рј РїРѕС‚РѕРєРѕРј.

#include <iostream>
#include <vector>
#include <thread>
#include <mutex>
#include <cmath>
#include <time.h>
#include <string>
#include <sstream>
using namespace std;

void mult(vector<int> arr, int& res)    // Р¤СѓРЅРєС†РёСЏ РїРѕС‚РѕРєР°, СЃСѓРјРјРёСЂСѓСЋС‰Р°СЏ СЌР»РµРјРµРЅС‚С‹ РјР°СЃСЃРёРІР°.
{                                       // Р РµР·СѓР»СЊС‚Р°С‚ Р·Р°РїРёСЃС‹РІР°РµС‚СЃСЏ РІ РїРµСЂРµРјРµРЅРЅСѓСЋ sum, РїРµСЂРµРґР°РІР°РµРјСѓСЋ РїРѕ СЃСЃС‹Р»РєРµ    
    int result = 1;
    for (int element : arr) 
    {
        if(element < 0) result = result * element;
    }
    res = result;

    /*
        int result = 0;
    for (int element : arr) 
    {
        result = result + element;
    }
    sum = result;
    */    
}

void divi(vector<int> arr, float& res)  // Р¤СѓРЅРєС†РёСЏ РїРѕС‚РѕРєР°, СЃСѓРјРјРёСЂСѓСЋС‰Р°СЏ СЌР»РµРјРµРЅС‚С‹ РјР°СЃСЃРёРІР°.
{                                       // Р РµР·СѓР»СЊС‚Р°С‚ Р·Р°РїРёСЃС‹РІР°РµС‚СЃСЏ РІ РїРµСЂРµРјРµРЅРЅСѓСЋ sum, РїРµСЂРµРґР°РІР°РµРјСѓСЋ РїРѕ СЃСЃС‹Р»РєРµ    
    float result = 1.0;
    for (int element : arr)
    {
        if (element < 0) result = result / element;
    }
    res = result;
}

void main()
{
    setlocale(LC_ALL, "rus");
    srand((unsigned)time(NULL));

    int vectorNumber = 20;  // Р§РёСЃР»Рѕ СЃС‚СЂРѕРє РјР°С‚СЂРёС†С‹
    int vectorSize = 20;    // Р§РёСЃР»Рѕ СЃС‚РѕР»Р±С†РѕРІ

    // РЎРѕР·РґР°С‘Рј РјР°С‚СЂРёС†Сѓ - РІРµРєС‚РѕСЂ РёР· РІРµСЃС‚РѕСЂРѕРІ
    vector<vector<int> > matrix(vectorNumber);
    for (vector<int>& element : matrix)
    {
        element = vector<int>(vectorSize);
    }

    // Р—Р°РїРѕР»РЅСЏРµРј РјР°С‚СЂРёС†Сѓ Р·РЅР°С‡РµРЅРёСЏРјРё
    for (int i = 0; i < vectorNumber; i++)
    {
        for (int j = 0; j < vectorSize; j++)
        {
            int n = rand() % 41 + 0;    //РѕС‚ 0 РґРѕ 40 (РІРєР»СЋС‡РёС‚РµР»СЊРЅРѕ)
            matrix[i][j] = n - 20;      //РѕС‚ -20 РґРѕ 20
        }
    }

    cout << "Р’С‹РІРѕРґРёРј РјР°С‚СЂРёС†Сѓ: " << endl;
    cout << endl;
    for (int i = 0; i < vectorNumber; i++)
    {
        for (int j = 0; j < vectorSize; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "РџСЂРѕРёР·РІРµРґРµРЅРёРµ РІСЃРµС… РѕС‚СЂРёС†Р°С‚РµР»СЊРЅС‹С… СЌР»РµРјРµРЅС‚РѕРІ СЃС‚СЂРѕРє РјР°С‚РёС†С‹: " << endl;
    cout << endl;

    //// РџСЂРѕРёР·РІРµРґРµРЅРёРµ

    vector<int> vectorOfSum(vectorNumber); //РІРµРєС‚РѕСЂ РґР»СЏ С…СЂР°РЅРµРЅРёСЏ СЃСѓРјРј СЃС‚СЂРѕРє РјР°С‚СЂРёС†С‹
    vector<thread> vectorOfTreads(vectorNumber); //РІРµРєС‚РѕСЂ РїРѕС‚РѕРєРѕРІ

    // СЃРѕР·РґР°С‘Рј РїРѕС‚РѕРєРё
    for (int i = 0; i < vectorNumber; i++)
    {
        vectorOfTreads[i] = thread(mult, matrix[i], ref(vectorOfSum[i]));
        //vectorOfTreads[i] = thread(mult, matrix, ref(vectorOfSum[i]));
    }

    // Р¶РґС‘Рј Р·Р°РІРµСЂС€РµРЅРёСЏ РІСЃРµС… РїРѕС‚РѕРєРѕРІ
    for (int i = 0; i < vectorNumber; i++)
    {
        vectorOfTreads[i].join();
    }

    // РІС‹РІРѕРґРёРј СЂРµР·СѓР»СЊС‚Р°С‚
    for (int i = 0; i < vectorNumber; i++)
    {
        cout << vectorOfSum[i] << "\n";
    }

    //// Р§Р°СЃС‚РЅРѕРµ

    cout << endl;
    cout << "Р§Р°СЃС‚РЅРѕРµ РІСЃРµС… РѕС‚СЂРёС†Р°С‚РµР»СЊРЅС‹С… СЌР»РµРјРµРЅС‚РѕРІ СЃС‚СЂРѕРє РјР°С‚РёС†С‹: " << endl;
    cout << endl;

    vector<float> vectorOfSum1(vectorNumber); //РІРµРєС‚РѕСЂ РґР»СЏ С…СЂР°РЅРµРЅРёСЏ СЃСѓРјРј СЃС‚СЂРѕРє РјР°С‚СЂРёС†С‹
    vector<thread> vectorOfTreads1(vectorNumber); //РІРµРєС‚РѕСЂ РїРѕС‚РѕРєРѕРІ

    // СЃРѕР·РґР°С‘Рј РїРѕС‚РѕРєРё
    for (int i = 0; i < vectorNumber; i++)
    {
        vectorOfTreads1[i] = thread(divi, matrix[i], ref(vectorOfSum1[i]));
        //vectorOfTreads[i] = thread(mult, matrix, ref(vectorOfSum[i]));
    }

    // Р¶РґС‘Рј Р·Р°РІРµСЂС€РµРЅРёСЏ РІСЃРµС… РїРѕС‚РѕРєРѕРІ
    for (int i = 0; i < vectorNumber; i++)
    {
        vectorOfTreads1[i].join();
    }

    // РІС‹РІРѕРґРёРј СЂРµР·СѓР»СЊС‚Р°С‚
    for (int i = 0; i < vectorNumber; i++)
    {
        cout << vectorOfSum1[i] << "\n";
    }
}


/*
// РџСЂРёРјРµСЂ Р·Р°РґР°С‡Рё, РІ РєРѕС‚РѕСЂРѕР№ РёСЃРїРѕР»СЊР·СѓРµС‚СЃСЏ РјРЅРѕРіРѕРїРѕС‚РѕС‡РЅРѕРµ РІС‹РїРѕР»РЅРµРЅРёРµ РїСЂРѕРіСЂР°РјРјС‹
// РќСѓР¶РЅРѕ СЃР»РѕР¶РёС‚СЊ СЌР»РµРјРµРЅС‚С‹ СЃС‚СЂРѕРє РјР°С‚СЂРёС†С‹
// РљР°Р¶РґР°СЏ СЃС‚СЂРѕРєР° СЃСѓРјРјРёСЂСѓРµС‚СЃСЏ СЃРІРѕРёРј  РѕС‚РґРµР»СЊРЅС‹Рј РїРѕС‚РѕРєРѕРј

#include <iostream>
#include <vector>
#include <thread>
#include <mutex>
#include <cmath>
#include <time.h>
#include <string>
#include <sstream>
using namespace std;

void add(vector<int> arr, int& sum)     // Р¤СѓРЅРєС†РёСЏ РїРѕС‚РѕРєР°, СЃСѓРјРјРёСЂСѓСЋС‰Р°СЏ СЌР»РµРјРµРЅС‚С‹ РјР°СЃСЃРёРІР°.
{                                       // Р РµР·СѓР»СЊС‚Р°С‚ Р·Р°РїРёСЃС‹РІР°РµС‚СЃСЏ РІ РїРµСЂРµРјРµРЅРЅСѓСЋ sum, РїРµСЂРµРґР°РІР°РµРјСѓСЋ РїРѕ СЃСЃС‹Р»РєРµ
    int result = 1;
    for (int element : arr)
    {
        if(element < 0) result = result * element;
    }
    sum = result;

    
        int result = 0;
    for (int element : arr)
    {
        result = result + element;
    }
    sum = result;
    
}

void add1(vector<int> arr, float& sum)  // Р¤СѓРЅРєС†РёСЏ РїРѕС‚РѕРєР°, СЃСѓРјРјРёСЂСѓСЋС‰Р°СЏ СЌР»РµРјРµРЅС‚С‹ РјР°СЃСЃРёРІР°.
{                                       // Р РµР·СѓР»СЊС‚Р°С‚ Р·Р°РїРёСЃС‹РІР°РµС‚СЃСЏ РІ РїРµСЂРµРјРµРЅРЅСѓСЋ sum, РїРµСЂРµРґР°РІР°РµРјСѓСЋ РїРѕ СЃСЃС‹Р»РєРµ    
    float result = 1.0;
    for (int element : arr)
    {
        if (element < 0) result = result / element;
    }
    sum = result;
}

void main()
{
    setlocale(LC_ALL, "rus");
    srand((unsigned)time(NULL));

    int vectorNumber = 20;  // Р§РёСЃР»Рѕ СЃС‚СЂРѕРє РјР°С‚СЂРёС†С‹
    int vectorSize = 20;   // Р§РёСЃР»Рѕ СЃС‚РѕР»Р±С†РѕРІ

    //vector<int> resVect(vectorNumber * vectorSize);

    // РЎРѕР·РґР°С‘Рј РјР°С‚СЂРёС†Сѓ - РІРµРєС‚РѕСЂ РёР· РІРµСЃС‚РѕСЂРѕРІ
    vector<vector<int> > matrix(vectorNumber);
    for (vector<int>& element : matrix)
    {
        element = vector<int>(vectorSize);
    }

    // Р—Р°РїРѕР»РЅСЏРµРј РјР°С‚СЂРёС†Сѓ Р·РЅР°С‡РµРЅРёСЏРјРё
    for (int i = 0; i < vectorNumber; i++)
    {
        for (int j = 0; j < vectorSize; j++)
        {
            int n = rand() % 41 + 0;    //РѕС‚ 0 РґРѕ 40 (РІРєР»СЋС‡РёС‚РµР»СЊРЅРѕ)
            matrix[i][j] = n - 20;      //РѕС‚ -20 РґРѕ 20
        }
    }

    cout << "Р’С‹РІРѕРґРёРј РјР°С‚СЂРёС†Сѓ: " << endl;
    cout << endl;
    for (int i = 0; i < vectorNumber; i++)
    {
        for (int j = 0; j < vectorSize; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "РџСЂРѕРёР·РІРµРґРµРЅРёРµ РІСЃРµС… РѕС‚СЂРёС†Р°С‚РµР»СЊРЅС‹С… СЌР»РµРјРµРЅС‚РѕРІ СЃС‚СЂРѕРє РјР°С‚РёС†С‹: " << endl;
    cout << endl;

    //// РџСЂРѕРёР·РІРµРґРµРЅРёРµ

    vector<int> vectorOfSum(vectorNumber); //РІРµРєС‚РѕСЂ РґР»СЏ С…СЂР°РЅРµРЅРёСЏ СЃСѓРјРј СЃС‚СЂРѕРє РјР°С‚СЂРёС†С‹
    vector<thread> vectorOfTreads(vectorNumber); //РІРµРєС‚РѕСЂ РїРѕС‚РѕРєРѕРІ

    // СЃРѕР·РґР°С‘Рј РїРѕС‚РѕРєРё
    for (int i = 0; i < vectorNumber; i++)
    {
        vectorOfTreads[i] = thread(add, matrix[i], ref(vectorOfSum[i]));
        //vectorOfTreads[i] = thread(mult, matrix, ref(vectorOfSum[i]));
    }

    // Р¶РґС‘Рј Р·Р°РІРµСЂС€РµРЅРёСЏ РІСЃРµС… РїРѕС‚РѕРєРѕРІ
    for (int i = 0; i < vectorNumber; i++)
    {
        vectorOfTreads[i].join();
    }

    // РІС‹РІРѕРґРёРј СЂРµР·СѓР»СЊС‚Р°С‚
    for (int i = 0; i < vectorNumber; i++)
    {
        cout << vectorOfSum[i] << "\n";
    }

    //// Р§Р°СЃС‚РЅРѕРµ

    cout << endl;
    cout << "Р§Р°СЃС‚РЅРѕРµ РІСЃРµС… РѕС‚СЂРёС†Р°С‚РµР»СЊРЅС‹С… СЌР»РµРјРµРЅС‚РѕРІ СЃС‚СЂРѕРє РјР°С‚РёС†С‹: " << endl;
    cout << endl;

    vector<float> vectorOfSum1(vectorNumber); //РІРµРєС‚РѕСЂ РґР»СЏ С…СЂР°РЅРµРЅРёСЏ СЃСѓРјРј СЃС‚СЂРѕРє РјР°С‚СЂРёС†С‹
    vector<thread> vectorOfTreads1(vectorNumber); //РІРµРєС‚РѕСЂ РїРѕС‚РѕРєРѕРІ

    // СЃРѕР·РґР°С‘Рј РїРѕС‚РѕРєРё
    for (int i = 0; i < vectorNumber; i++)
    {
        vectorOfTreads1[i] = thread(add1, matrix[i], ref(vectorOfSum1[i]));
        //vectorOfTreads[i] = thread(mult, matrix, ref(vectorOfSum[i]));
    }

    // Р¶РґС‘Рј Р·Р°РІРµСЂС€РµРЅРёСЏ РІСЃРµС… РїРѕС‚РѕРєРѕРІ
    for (int i = 0; i < vectorNumber; i++)
    {
        vectorOfTreads1[i].join();
    }

    // РІС‹РІРѕРґРёРј СЂРµР·СѓР»СЊС‚Р°С‚
    for (int i = 0; i < vectorNumber; i++)
    {
        cout << vectorOfSum1[i] << "\n";
    }
}

*/