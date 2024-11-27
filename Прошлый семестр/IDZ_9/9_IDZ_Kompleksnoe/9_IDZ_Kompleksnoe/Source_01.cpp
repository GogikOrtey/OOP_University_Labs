#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

struct strl
{
	strl* prev;
	char simv;
	strl* next;	
};

class stroka
{
	char* adr = NULL;
	int length = 0;
	strl CurrSimv;

	//char* strl = new char[];

public:

	stroka() // Пустой конструктор
	{
		adr = NULL;
	}

	stroka(string str) // Конструктор из строки
	{
		CurrSimv.prev = NULL;
		CurrSimv.next = NULL;
		for (int i; i < str.length(); i++)
		{
			//strl[i] = str[i];
			if (i > 0)
			{
				CurrSimv.simv = str[i];
			}
			
		}
	}

	stroka(char simv)
	{
		strl[0] = simv;
	}

	void copyStrock() // Конструктор копирования
	{

	}

	int lengthStrock() // Получение длинны строки
	{
		//while
	}
};

void main()
{
	setlocale(LC_ALL, "rus");

	stroka str; 
}