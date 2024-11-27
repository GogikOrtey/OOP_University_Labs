#pragma once
#include <iostream>
#include <cmath>
#include <time.h>
#include <string>
#include <sstream>
#include <list>
#include <set>

using namespace std;

class User
{
public:
	set<User> Users;

	string Name = "";
	int Age = 0;

	User CreateNew(string name, int age)
	{
		Name = name;
		Age = age;
		Users.insert(*this);
		return *this;
	}

	void ShowAllUsers()
	{
		cout << "Выводим всех пользователей, которые у нас есть: " << endl;

		for (set<User>::iterator it = Users.begin();
			it != Users.end();
			it++)
		{
			cout << "Пользователь: (" << it->Name << ", " << it->Age << " лет)" << endl;
		}
	}	

	friend bool operator < (const User& a1, const User& a2)
	{
		if (a1.Name < a2.Name) return true;
		else return false;
	}

	friend bool operator == (const User& a1, const User& a2)
	{
		if ((a1.Name == a2.Name) && (a1.Age == a2.Age)) return true;
		else return false;
	}
};

