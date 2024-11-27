#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

struct Time
{
	int Min = 0;
	int Hour = 0;
};

Time t;

#include <sstream>

template <typename T>
std::string NumberToString(T Number)
{
	std::ostringstream ss;
	ss << Number;
	return ss.str();
}

string printTime(Time value)
{
	//cout << "[" << value.hour << ":" << value.min << "]";
	string c1 = "[";
	string c2 = ":";
	string c3 = "]";
	string str2 = c1 + NumberToString(value.Hour) + c2 + NumberToString(value.Min) + c3;
	return(str2);
}

void InputTime()
{
	int a = 0;

	while (true)
	{
		cout << "Hours = ";
		cin >> a;
		if ((a >= 0) && (a < 24)) //(24 > a >= 0)
		{
			
		}
		else
		{
			cout << "Введено неправильное время. Часы не могут быть >= 24 и <= 0." << endl;
			break;
		}

		cout << "Minutes = ";
		cin >> a;
		if ((a >= 0) && (a < 60)) //(60 > a >= 0)
		{
			
		}
		else
		{
			cout << "Введено неправильное время. Минуты не могут быть >= 60 и <= 0." << endl;
			break;
		}
	}
}

void c(Time t)
{
	cout << "[" << t.Hour << ":" << t.Min << "]" << endl;
}

void a()
{
	int a;
	int b;
	cin >> a;
	cin >> b;
	t.Hour = a;
	t.Min = b;
	//c(t);
	cout << printTime(t) << endl;
}

void main()
{
	setlocale(LC_ALL, "rus");
	//a();
	InputTime();
}

