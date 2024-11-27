#pragma once
#include <iostream>
const int maxN = 100;

template <class T>
class Data
{
public:
    T array[maxN];
    int index;
    Data();
    void add(T x);
    T del();
    void info();
    T multy();
    class Full {};
    class Empty {};
    class Zero {};
};

template <class T>
Data<T>::Data()
{
    index = 0;
}

template <class T>
void Data<T>::add(T x)
{
    if (index < maxN)
    {
        array[index] = x;
        index++;
    }
    else
    {
        throw Full();
    }
}

template <class T>
T Data<T>::del()
{
    if (index != 0)
    {
        return array[--index];
    }
    else
    {
        throw Empty();
    }
}

template <class T>
void Data<T>::info()
{
    for (int i = 0; i < index; i++)
    {
        std::cout << array[i] << ", ";
    }
    std::cout << "\n";
}

template <class T>
T Data<T>::multy()
{
    if (index != 0)
    {
        T help = array[0];
        for (int i = 0; i < index; i++)
        {
            if (array[i] != 0)
            {
                help = help * array[i];
            }
            else
            {
                throw Zero();
            }
        }
        return help;
    }
    else
    {
        throw Empty();
    }
}
