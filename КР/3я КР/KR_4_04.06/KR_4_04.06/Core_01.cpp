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

// КР_4 Вариант 7

/*
	+ Базовая часть:
	Собственный класс: должен содержать информацию о самолете (марка, тип (пассажирский, 
	грузовой, военный-перечисление), номер, вес). Предусмотреть возможность раздельного изменения полей класса, 
	создания и уничтожения  объектов  этого  класса,  вывода  данных  на  консоль.
	
	Средний уровень:
	Написать функцию, формирующую по заданному списку(шаблонный класс list) 
	множество/мультимножество из элементов списка с четными значениями и распечатывающую его. 
	Продемонстрировать работу функции на контейнерах STLсодержащих объекты встроенного типа и 
	собственного класса (четными считать те у которых тип пассажирский). 
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
	cout << "2я часть задания: " << endl;
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

