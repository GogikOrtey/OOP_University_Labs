#pragma once
#include <iostream>
#include <cmath>
#include <time.h>
#include <string>
#include <sstream>
#include <list>
#include <set>

using namespace std;


class Author
{
public:
	set<Author> Authors;

	string FIO = "";	

	Author CreateNew(string fio)
	{
		FIO = fio;
		Authors.insert(*this);
		return *this;
	}

	void ShowAllAuthors()
	{
		cout << "Выводим всех авторов, которые у нас есть: " << endl;

		for (set<Author>::iterator it = Authors.begin();
			it != Authors.end();
			it++)
		{
			cout << "Автор с именем: {" << it->FIO << "}" << endl;
		}
	}

	friend bool operator < (const Author& a1, const Author& a2)
	{
		if (a1.FIO < a2.FIO) return true;
		else return false;
	}

	friend bool operator == (const Author& a1, const Author& a2)
	{
		if (a1.FIO == a2.FIO) return true;
		else return false;
	}
};

