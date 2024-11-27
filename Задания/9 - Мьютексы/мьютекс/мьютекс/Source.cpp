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
    Plate plate1(20); // 1й бокс погрузки
    Plate plate2(20); // 2й бокс погрузки

    // В конструктор передаём указатель на бокс погрузки, из которого будет загружаться человек
    HungryPerson hp1(&plate1, 1);
    HungryPerson hp2(&plate1, 2);

    // А эти загружаются из другого бокса
    HungryPerson hp4(&plate2, 4);
    HungryPerson hp5(&plate2, 5);


    // Ждём завершения всех потоков
    hp1.getThreadReference()->join();
    hp2.getThreadReference()->join();

    hp4.getThreadReference()->join();
    hp5.getThreadReference()->join();

    cout << "Все грузы погружены!" << endl;
}