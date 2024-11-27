#include <iostream>
#include <cmath>
#include <time.h>
#include <string>
#include <sstream>
using namespace std;
#pragma once

// КР_4 Вариант 7

/*
	Базовая часть:
	Собственный класс: должен содержать информацию о самолете (марка, тип (пассажирский,
	грузовой, военный-перечисление), номер, вес). Предусмотреть возможность раздельного изменения полей класса,
	создания и уничтожения  объектов  этого  класса,  вывода  данных  на  консоль.

	Средний уровень:Написать функцию, формирующую по заданному списку(шаблонный класс list)
	множество/мультимножествоиз  элементов спискас  четными значениями и распечатывающую его.
	Продемонстрировать работу функции на контейнерах STLсодержащих объекты встроенного типа и
	собственного класса (четными считать те у которых тип пассажирский).
*/

class AirPlane
{
public:
	string brand;
	int num;
	float weight; // Вес

	enum type
	{
		passenger = 0,	// Пассажирский // Начинаем индекс перечисления с 0
		cargo,			// Грузовой
		military		// Военный
	};

	type currType;


	AirPlane(); // Конструктор без параметров

	AirPlane(string brand1, int num1, float weight1, type currType1); // Конструктор с параметрами

	void Info();

	friend bool operator < (const AirPlane& a1, const AirPlane& a2);
	friend bool operator == (const AirPlane& a1, const AirPlane& a2);
};

