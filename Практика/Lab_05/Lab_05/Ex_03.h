//#pragma once
//#include <iostream>
//using namespace std;
//template <typename T>
//class Sample
//
//	{
//	private:
//		T info[10];
//		int n;
//	public:
//		Sample()
//		{
//			n = 0;
//		}
//		int GetN()
//		{
//			return n;
//		}
//		void add(T x)
//		{
//			info[n] = x;
//			n++;
//		}
//		void del(int x)
//		{
//			for (int i = x + 1; i < n; i++)
//			{
//				info[i - 1] = info[i];
//			}
//		}
//
//		class iterator
//		{
//
//			int steps;
//			bool is_at_end;
//			int index;
//			Sample* pdata;
//		public:
//
//			iterator()
//			{
//				index = 0;
//				pdata = nullptr;
//				is_at_end = true;
//				steps = 0;
//			}
//			iterator(int x, Sample* p)
//			{
//				index = x;
//				pdata = p;
//			}
//			void operator++(int)//было index++;
//			{
//				int k = this->pdata->GetN();
//				if (is_at_end)
//				{
//					index = k - 1 - steps;
//					//steps++;
//				}
//				else
//				{
//					index = steps;
//					steps++;
//				}
//				is_at_end = not(is_at_end);
//
//
//			}
//			void operator--(int)
//			{
//				index--;
//			}
//			int operator !=(iterator a)
//			{
//				if (index != a.index)
//				{
//					return 1;
//				}
//				else
//				{
//					return 0;
//				}
//			}
//			int operator >(iterator a)
//			{
//				if (index > a.index)
//				{
//					return 1;
//				}
//				else
//				{
//					return 0;
//				}
//			}
//			int operator ==(iterator a)
//			{
//				if (index == a.index)
//				{
//					return 1;
//				}
//				else
//				{
//					return 0;
//				}
//			}
//			T& operator*()
//			{
//				if (pdata)
//				{
//					return pdata->info[index];
//				}
//				else
//				{
//					throw 0;
//				}
//			}
//
//		};
//		iterator begin()
//		{
//			return iterator(n, this);//было return iterator(0, this);
//		}
//		iterator end()
//		{
//			return iterator(0, this);//было return iterator(n, this);
//		}
//		void print()
//		{
//			iterator iter = begin();
//			iter--;
//			for (int i = 0; i < n; i++)
//			{
//				cout << *iter << " ";
//				iter++;
//			}
//		}
//		void round()//с новым определением ++ работать не будет
//		{
//			iterator iter1;
//			iterator iter2;
//
//			iter1 = begin();
//			iter2 = end();
//			iter2--;
//			while ((iter1 != iter2) && (iter2 > iter1))
//			{
//				cout << *iter2 << " " << *iter1 << " ";
//				iter2--;
//				iter1++;
//			}
//			if (iter1 == iter2) cout << *iter1 << " ";
//		}
//	};
//
//
