#include <iostream>
#include <list>
#include <set>

using namespace std;

int main()
{
    list<int> list1;

    list1.push_back(2);
    list1.push_back(5);
    list1.push_back(15);
    list1.push_back(6);
    list1.push_back(6);
    list1.push_back(10);
    list1.push_back(3);

    for (list<int>::iterator it =
        list1.begin();
        it != list1.end();
        it++)
    {
        cout << *it << ", ";
    }
    cout << "\n";

    set<int> s1;
    multiset<int> ms1;

    for (list<int>::iterator it =
        list1.begin();
        it != list1.end();
        it++)
    {
        if (*it % 2 == 0)
        {
            s1.insert(*it);
            ms1.insert(*it);
        }
    }

    for (set<int>::iterator it = s1.begin();
        it != s1.end();
        it++)
    {
        cout << *it << ", ";
    }
    cout << "\n";

    for (multiset<int>::iterator it = ms1.begin();
        it != ms1.end();
        it++)
    {
        cout << *it << ", ";
    }
    cout << "\n";
    return 0;
}
