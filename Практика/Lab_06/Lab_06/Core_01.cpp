#include <iostream>
#include <cmath>
#include <time.h>
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int const Size = 9;

vector<int> DeqToVect(vector<int> vect, deque<int> deq)
{
    deque<int>::iterator deqIt;
    for (deqIt = deq.begin(); deqIt != deq.end(); deqIt++)
    {
        if (*deqIt % 2 == 0)
        {
            vect.push_back(*deqIt);
        }
        cout << *deqIt << ", ";
    }
    cout << endl;

    return(vect);
}

void main()
{
	setlocale(LC_ALL, "rus");

	vector<int> vect;
	deque<int> deq;
    vector<int> vectRes;

    // Заполняю двухстороннюю очередь
	for (int i = 0; i < Size; i++)
	{
		deq.push_back(i);
	}

    // Переношу из очереди в вектор
    vectRes = DeqToVect(vect, deq);

    // Вывожу знвчения вектора
    vector<int>::iterator vectIt;
    for (vectIt = vectRes.begin(); vectIt != vectRes.end(); vectIt++)
    {
        cout << *vectIt << ", ";
    }
    cout << endl;
}