#include <iostream>
#include <cmath>
#include <time.h>
#include <string>
#include <sstream>
#include <iostream>

#include "SuperInt.h"

using namespace std;

ostream& operator<<(ostream& os, const SuperInt& d)
{
	return os << d.super;
}

template<typename Type>
class Data
{
private:
	Type info[10];
	int ind;

public:

	Data()
	{
		ind = 0;
	}

	void add(Type x)
	{
		info[ind] = x;
		ind++;
	}

	void del(Type x)
	{
		for (int i = 0 + 1; i < ind; i++)
		{
			info[i - 1] = info[i];
		}
	}

	class iterator
	{
	private:
		int index;
		Data* pdata;
		bool isNotParity = false;

	public:

		iterator()
		{
			index = 0;
			pdata = nullptr;
		}

		iterator(int x, Data* p)
		{
			index = x;
			pdata = p;
		}

		void operator++(int)
		{
			if (index % 2 == 0)
			{
				index++;
			}

			index++;		
		}

		Type operator !=(iterator a)
		{
			if (index != a.index)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}

		Type operator ==(iterator a)
		{
			if (index == a.index)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}

		Type& operator*()
		{
			if (pdata)
			{
				return pdata->info[index];
			}
			else
			{
				throw 0;
			}
		}
	};
	iterator begin()
	{
		return iterator(0, this);
	}
	iterator end()
	{
		return iterator(ind, this);
	}

	void print()
	{
		iterator iter = begin();
		for (int i = 0; i<(ind/2); i++)
		{
			cout << *iter << ", ";
			iter++;
		}
		cout << endl;
	}
};

void main()
{
	Data <SuperInt> SuperMyClass;

	SuperInt MyInt;

	MyInt = 1; SuperMyClass.add(MyInt);
	MyInt = 2; SuperMyClass.add(MyInt);
	MyInt = 4; SuperMyClass.add(MyInt);
	MyInt = 8; SuperMyClass.add(MyInt);
	MyInt = 16; SuperMyClass.add(MyInt);
	MyInt = 32; SuperMyClass.add(MyInt);

	SuperMyClass.print();

	SuperMyClass.del(0);

	SuperMyClass.print();
}