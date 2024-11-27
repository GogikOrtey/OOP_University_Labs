//7. Найти произведение и частное всех отрицательных элементов строк матрицы. 
// Каждая строка обрабатывается своим отдельным потоком.

#include <iostream>
#include <vector>
#include <thread>
#include <mutex>
#include <cmath>
#include <time.h>
#include <string>
#include <sstream>
using namespace std;

void mult(vector<int> arr, int& res)    // Функция потока, суммирующая элементы массива.
{                                       // Результат записывается в переменную sum, передаваемую по ссылке    
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

void divi(vector<int> arr, float& res)  // Функция потока, суммирующая элементы массива.
{                                       // Результат записывается в переменную sum, передаваемую по ссылке    
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

    int vectorNumber = 20;  // Число строк матрицы
    int vectorSize = 20;    // Число столбцов

    // Создаём матрицу - вектор из весторов
    vector<vector<int> > matrix(vectorNumber);
    for (vector<int>& element : matrix)
    {
        element = vector<int>(vectorSize);
    }

    // Заполняем матрицу значениями
    for (int i = 0; i < vectorNumber; i++)
    {
        for (int j = 0; j < vectorSize; j++)
        {
            int n = rand() % 41 + 0;    //от 0 до 40 (включительно)
            matrix[i][j] = n - 20;      //от -20 до 20
        }
    }

    cout << "Выводим матрицу: " << endl;
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
    cout << "Произведение всех отрицательных элементов строк матицы: " << endl;
    cout << endl;

    //// Произведение

    vector<int> vectorOfSum(vectorNumber); //вектор для хранения сумм строк матрицы
    vector<thread> vectorOfTreads(vectorNumber); //вектор потоков

    // создаём потоки
    for (int i = 0; i < vectorNumber; i++)
    {
        vectorOfTreads[i] = thread(mult, matrix[i], ref(vectorOfSum[i]));
        //vectorOfTreads[i] = thread(mult, matrix, ref(vectorOfSum[i]));
    }

    // ждём завершения всех потоков
    for (int i = 0; i < vectorNumber; i++)
    {
        vectorOfTreads[i].join();
    }

    // выводим результат
    for (int i = 0; i < vectorNumber; i++)
    {
        cout << vectorOfSum[i] << "\n";
    }

    //// Частное

    cout << endl;
    cout << "Частное всех отрицательных элементов строк матицы: " << endl;
    cout << endl;

    vector<float> vectorOfSum1(vectorNumber); //вектор для хранения сумм строк матрицы
    vector<thread> vectorOfTreads1(vectorNumber); //вектор потоков

    // создаём потоки
    for (int i = 0; i < vectorNumber; i++)
    {
        vectorOfTreads1[i] = thread(divi, matrix[i], ref(vectorOfSum1[i]));
        //vectorOfTreads[i] = thread(mult, matrix, ref(vectorOfSum[i]));
    }

    // ждём завершения всех потоков
    for (int i = 0; i < vectorNumber; i++)
    {
        vectorOfTreads1[i].join();
    }

    // выводим результат
    for (int i = 0; i < vectorNumber; i++)
    {
        cout << vectorOfSum1[i] << "\n";
    }
}


/*
// Пример задачи, в которой используется многопоточное выполнение программы
// Нужно сложить элементы строк матрицы
// Каждая строка суммируется своим  отдельным потоком

#include <iostream>
#include <vector>
#include <thread>
#include <mutex>
#include <cmath>
#include <time.h>
#include <string>
#include <sstream>
using namespace std;

void add(vector<int> arr, int& sum)     // Функция потока, суммирующая элементы массива.
{                                       // Результат записывается в переменную sum, передаваемую по ссылке
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

void add1(vector<int> arr, float& sum)  // Функция потока, суммирующая элементы массива.
{                                       // Результат записывается в переменную sum, передаваемую по ссылке    
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

    int vectorNumber = 20;  // Число строк матрицы
    int vectorSize = 20;   // Число столбцов

    //vector<int> resVect(vectorNumber * vectorSize);

    // Создаём матрицу - вектор из весторов
    vector<vector<int> > matrix(vectorNumber);
    for (vector<int>& element : matrix)
    {
        element = vector<int>(vectorSize);
    }

    // Заполняем матрицу значениями
    for (int i = 0; i < vectorNumber; i++)
    {
        for (int j = 0; j < vectorSize; j++)
        {
            int n = rand() % 41 + 0;    //от 0 до 40 (включительно)
            matrix[i][j] = n - 20;      //от -20 до 20
        }
    }

    cout << "Выводим матрицу: " << endl;
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
    cout << "Произведение всех отрицательных элементов строк матицы: " << endl;
    cout << endl;

    //// Произведение

    vector<int> vectorOfSum(vectorNumber); //вектор для хранения сумм строк матрицы
    vector<thread> vectorOfTreads(vectorNumber); //вектор потоков

    // создаём потоки
    for (int i = 0; i < vectorNumber; i++)
    {
        vectorOfTreads[i] = thread(add, matrix[i], ref(vectorOfSum[i]));
        //vectorOfTreads[i] = thread(mult, matrix, ref(vectorOfSum[i]));
    }

    // ждём завершения всех потоков
    for (int i = 0; i < vectorNumber; i++)
    {
        vectorOfTreads[i].join();
    }

    // выводим результат
    for (int i = 0; i < vectorNumber; i++)
    {
        cout << vectorOfSum[i] << "\n";
    }

    //// Частное

    cout << endl;
    cout << "Частное всех отрицательных элементов строк матицы: " << endl;
    cout << endl;

    vector<float> vectorOfSum1(vectorNumber); //вектор для хранения сумм строк матрицы
    vector<thread> vectorOfTreads1(vectorNumber); //вектор потоков

    // создаём потоки
    for (int i = 0; i < vectorNumber; i++)
    {
        vectorOfTreads1[i] = thread(add1, matrix[i], ref(vectorOfSum1[i]));
        //vectorOfTreads[i] = thread(mult, matrix, ref(vectorOfSum[i]));
    }

    // ждём завершения всех потоков
    for (int i = 0; i < vectorNumber; i++)
    {
        vectorOfTreads1[i].join();
    }

    // выводим результат
    for (int i = 0; i < vectorNumber; i++)
    {
        cout << vectorOfSum1[i] << "\n";
    }
}

*/