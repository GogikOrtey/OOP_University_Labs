#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <math.h>

using namespace std;

int main(int argc, char* argv[])
{
    vector<int> v1;
    list<int> list1;
    deque<int> d1;

    for (int i = 0; i < 10; i++)
    {
        v1.push_back((int)(rand()% 100));
    }

    vector<int>::iterator vectIt;
    for (vectIt = v1.begin();
        vectIt != v1.end();
        vectIt++)
    {
        cout << *vectIt << ", ";
        if (*vectIt % 2 == 0)
        {
            list1.push_back(*vectIt);
        }
        else
        {
            d1.push_back(*vectIt);
        }
    }
    cout << "\n";

    list<int>::iterator listIt;
    for (listIt = list1.begin();
        listIt != list1.end();
        listIt++)
    {
        cout << *listIt << ", ";
    }
    cout << "\n";

    deque<int>::iterator deqIt;
    for (deqIt = d1.begin();
        deqIt != d1.end();
        deqIt++)
    {
        cout << *deqIt << ", ";
    }
    cout << "\n";
           
    return 0;
}
