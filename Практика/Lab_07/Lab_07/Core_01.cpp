#include <iostream>
#include <cmath>
#include <time.h>
#include <string>
#include <sstream>
#include <iostream>

#include <list>
#include <set>
using namespace std;

const int Size = 11;

// Функция, которая копирует чётные значения из Set в List
list<int> SetToList(set<int> set1)
{
    list<int> list1;

    // Вставляю в List значения из Set
    for (set<int>::iterator it =
        set1.begin();
        it != set1.end();
        it++)
    {
        if (*it % 2 == 0)
        {
            list1.push_back(*it);
        }
    }

    return(list1);
}

void main()
{
	setlocale(LC_ALL, "rus");

	list<int> list1;
	set<int> set1;

    // Заполняю Set значениями
    for (int i = 0; i < Size; i++)
    {
        set1.insert(i);
    }

    // Вызываю нужную функцию
    list1 = SetToList(set1);

    // Вывожу элементы из list
    for (list<int>::iterator it = list1.begin();
        it != list1.end();
        it++)
    {
        cout << *it << ", ";
    }
    cout << endl;
}