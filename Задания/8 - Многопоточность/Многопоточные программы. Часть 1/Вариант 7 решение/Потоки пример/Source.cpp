//7. ����� ������������ � ������� ���� ������������� ��������� ����� �������. 
// ������ ������ �������������� ����� ��������� �������.

#include <iostream>
#include <vector>
#include <thread>
#include <mutex>
#include <cmath>
#include <time.h>
#include <string>
#include <sstream>
using namespace std;

void mult(vector<int> arr, int& res)    // ������� ������, ����������� �������� �������.
{                                       // ��������� ������������ � ���������� sum, ������������ �� ������    
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

void divi(vector<int> arr, float& res)  // ������� ������, ����������� �������� �������.
{                                       // ��������� ������������ � ���������� sum, ������������ �� ������    
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

    int vectorNumber = 20;  // ����� ����� �������
    int vectorSize = 20;    // ����� ��������

    // ������ ������� - ������ �� ��������
    vector<vector<int> > matrix(vectorNumber);
    for (vector<int>& element : matrix)
    {
        element = vector<int>(vectorSize);
    }

    // ��������� ������� ����������
    for (int i = 0; i < vectorNumber; i++)
    {
        for (int j = 0; j < vectorSize; j++)
        {
            int n = rand() % 41 + 0;    //�� 0 �� 40 (������������)
            matrix[i][j] = n - 20;      //�� -20 �� 20
        }
    }

    cout << "������� �������: " << endl;
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
    cout << "������������ ���� ������������� ��������� ����� ������: " << endl;
    cout << endl;

    //// ������������

    vector<int> vectorOfSum(vectorNumber); //������ ��� �������� ���� ����� �������
    vector<thread> vectorOfTreads(vectorNumber); //������ �������

    // ������ ������
    for (int i = 0; i < vectorNumber; i++)
    {
        vectorOfTreads[i] = thread(mult, matrix[i], ref(vectorOfSum[i]));
        //vectorOfTreads[i] = thread(mult, matrix, ref(vectorOfSum[i]));
    }

    // ��� ���������� ���� �������
    for (int i = 0; i < vectorNumber; i++)
    {
        vectorOfTreads[i].join();
    }

    // ������� ���������
    for (int i = 0; i < vectorNumber; i++)
    {
        cout << vectorOfSum[i] << "\n";
    }

    //// �������

    cout << endl;
    cout << "������� ���� ������������� ��������� ����� ������: " << endl;
    cout << endl;

    vector<float> vectorOfSum1(vectorNumber); //������ ��� �������� ���� ����� �������
    vector<thread> vectorOfTreads1(vectorNumber); //������ �������

    // ������ ������
    for (int i = 0; i < vectorNumber; i++)
    {
        vectorOfTreads1[i] = thread(divi, matrix[i], ref(vectorOfSum1[i]));
        //vectorOfTreads[i] = thread(mult, matrix, ref(vectorOfSum[i]));
    }

    // ��� ���������� ���� �������
    for (int i = 0; i < vectorNumber; i++)
    {
        vectorOfTreads1[i].join();
    }

    // ������� ���������
    for (int i = 0; i < vectorNumber; i++)
    {
        cout << vectorOfSum1[i] << "\n";
    }
}


/*
// ������ ������, � ������� ������������ ������������� ���������� ���������
// ����� ������� �������� ����� �������
// ������ ������ ����������� �����  ��������� �������

#include <iostream>
#include <vector>
#include <thread>
#include <mutex>
#include <cmath>
#include <time.h>
#include <string>
#include <sstream>
using namespace std;

void add(vector<int> arr, int& sum)     // ������� ������, ����������� �������� �������.
{                                       // ��������� ������������ � ���������� sum, ������������ �� ������
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

void add1(vector<int> arr, float& sum)  // ������� ������, ����������� �������� �������.
{                                       // ��������� ������������ � ���������� sum, ������������ �� ������    
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

    int vectorNumber = 20;  // ����� ����� �������
    int vectorSize = 20;   // ����� ��������

    //vector<int> resVect(vectorNumber * vectorSize);

    // ������ ������� - ������ �� ��������
    vector<vector<int> > matrix(vectorNumber);
    for (vector<int>& element : matrix)
    {
        element = vector<int>(vectorSize);
    }

    // ��������� ������� ����������
    for (int i = 0; i < vectorNumber; i++)
    {
        for (int j = 0; j < vectorSize; j++)
        {
            int n = rand() % 41 + 0;    //�� 0 �� 40 (������������)
            matrix[i][j] = n - 20;      //�� -20 �� 20
        }
    }

    cout << "������� �������: " << endl;
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
    cout << "������������ ���� ������������� ��������� ����� ������: " << endl;
    cout << endl;

    //// ������������

    vector<int> vectorOfSum(vectorNumber); //������ ��� �������� ���� ����� �������
    vector<thread> vectorOfTreads(vectorNumber); //������ �������

    // ������ ������
    for (int i = 0; i < vectorNumber; i++)
    {
        vectorOfTreads[i] = thread(add, matrix[i], ref(vectorOfSum[i]));
        //vectorOfTreads[i] = thread(mult, matrix, ref(vectorOfSum[i]));
    }

    // ��� ���������� ���� �������
    for (int i = 0; i < vectorNumber; i++)
    {
        vectorOfTreads[i].join();
    }

    // ������� ���������
    for (int i = 0; i < vectorNumber; i++)
    {
        cout << vectorOfSum[i] << "\n";
    }

    //// �������

    cout << endl;
    cout << "������� ���� ������������� ��������� ����� ������: " << endl;
    cout << endl;

    vector<float> vectorOfSum1(vectorNumber); //������ ��� �������� ���� ����� �������
    vector<thread> vectorOfTreads1(vectorNumber); //������ �������

    // ������ ������
    for (int i = 0; i < vectorNumber; i++)
    {
        vectorOfTreads1[i] = thread(add1, matrix[i], ref(vectorOfSum1[i]));
        //vectorOfTreads[i] = thread(mult, matrix, ref(vectorOfSum[i]));
    }

    // ��� ���������� ���� �������
    for (int i = 0; i < vectorNumber; i++)
    {
        vectorOfTreads1[i].join();
    }

    // ������� ���������
    for (int i = 0; i < vectorNumber; i++)
    {
        cout << vectorOfSum1[i] << "\n";
    }
}

*/