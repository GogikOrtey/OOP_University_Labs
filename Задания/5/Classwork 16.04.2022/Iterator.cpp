#include <iostream>

class Data
{
private:
	int info[10];
	int n;
public:
	Data()
	{
		n = 0;
	}
	void add(int x)
	{
		info[n] = x;
		n++;
	}
	class iterator
	{
		int index;
		Data* pdata;
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
			index++;
		}
		int operator !=(iterator a)
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
		int operator ==(iterator a)
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
		int& operator*()
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
		return iterator(n, this);
	}
};

int main()
{
	Data obj;
	obj.add(8);
	obj.add(86);
	obj.add(38);
	obj.add(2);
	obj.add(8);
	obj.add(8);
	Data::iterator iter;
	for (iter = obj.begin(); iter != obj.end(); iter++)
	{
		std::cout << *iter;
	}
	return 0;
}