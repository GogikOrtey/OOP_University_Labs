#include <iostream>
#include <cmath>
#include <time.h>
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <deque>

#include "MyMass.h"
#include "MyClassForBuilding.h"

using namespace std;

ostream& operator<<(ostream& os, const MyClassForBuilding& d)
{
	return os << "[ City = " << d.myBuilding.Adr.city << ", Street = " << d.myBuilding.Adr.street << ", House = " << d.myBuilding.Adr.house << ", Floors = " << d.myBuilding.Floors << ", Residential = " << d.myBuilding.Residential; // ����� ������� ������, � ����, ����)
}


/*
	� ������� �� 2� �������� ����� ������� �������� ��������...
*/

//template<typename Type>
//class Data
//{
//private:
//	Type info[10];
//	int ind;
//
//public:
//
//	Data()
//	{
//		ind = 0;
//	}
//
//	void add(Type x)
//	{
//		info[ind] = x;
//		ind++;
//	}
//
//	void del(Type x)
//	{
//		for (int i = 0 + 1; i < ind; i++)
//		{
//			info[i - 1] = info[i];
//		}
//	}
//
//	class iterator
//	{
//	private:
//		int index;
//		Data* pdata;
//		bool isNotParity = false;
//
//		Data* OldData = new Data[2];
//
//		int Duble = 0;
//
//	public:
//
//		Data e = pdata;
//
//		iterator()
//		{
//			index = 0;
//			pdata = nullptr;
//		}
//
//		iterator(int x, Data* p)
//		{
//			index = x;
//			pdata = p;
//		}
//
//		void operator++(int)
//		{
//
//
//			if (OldData[0] == nullptr) OldData[0] = e;
//			else if ((OldData[0] == e) && (OldData[1] == nullptr)) OldData[1] = e;
//			else if ((OldData[0] == e) && (OldData[1] == e))
//			{
//				index++;
//			}
//
//			index++;
//		}
//
//		Type operator !=(iterator a)
//		{
//			if (index != a.index)
//			{
//				return 1;
//			}
//			else
//			{
//				return 0;
//			}
//		}
//
//		Type operator ==(iterator a)
//		{
//			if (index == a.index)
//			{
//				return 1;
//			}
//			else
//			{
//				return 0;
//			}
//		}
//
//		Type& operator*()
//		{
//			if (pdata)
//			{
//				return pdata->info[index];
//			}
//			else
//			{
//				throw 0;
//			}
//		}
//	};
//	iterator begin()
//	{
//		return iterator(0, this);
//	}
//	iterator end()
//	{
//		return iterator(ind, this);
//	}
//
//	void print()
//	{
//		iterator iter = begin();
//		for (int i = 0; i < ind; i++)
//		{
//			cout << *iter << ", ";
//			iter++;
//		}
//		cout << endl;
//	}
//};
//
//void BustingTheContainer_Int(MyMass<int> myMassInt)
//{
//	Data <int> SuperMyClass;
//
//	for (int i = 0; i < myMassInt.size; i++)
//	{
//		SuperMyClass.add(i);
//	}
//
//	SuperMyClass.print();
//}

/*
	3� ������� ���� � ���� �� �������(
*/

//template <typename T>
//deque<T> VectorToQueue(vector<T>& vec, int n)
//{
//	deque<T> qu;
//	for (auto i = vec.begin(); i != vec.end(); i++)
//	{
//		if (&i% 2 == 0) qu.push(&i);
//	}
//	return qu;
//}
//
//
//
//void VecToDeq_Int(MyMass<int> myMassInt)
//{
//	vector<int> vect;
//	deque<int> deq;
//	//vector<int> vectRes;
//
//	// �������� ������
//	for (int i = 0; i < myMassInt.size; i++)
//	{
//		vect.push_back(myMassInt.Mass[i]);
//	}
//
//	deq = VectorToQueue(vect, myMassInt.size);
//
//	// ������ �������� deque
//	deque<int>::iterator vectIt;
//	for (vectIt = deq.begin(); vectIt != deq.end(); vectIt++)
//	{
//		cout << *vectIt << ", ";
//	}
//	cout << endl;
//}



void main()
{
	setlocale(LC_ALL, "rus");	

	try
	{
		MyMass<int> myMassInt = MyMass<int>();
		{
			myMassInt.info();

			for (int i = 0; i < 11; i++)
			{
				myMassInt.Insert(i);
			}
			myMassInt.info();

			//BustingTheContainer_Int(myMassInt); // 2 �������
			//VecToDeq_Int(myMassInt); // 3 �������

			// ������� �� �������
			myMassInt.DelInd(1, 2);
			myMassInt.info();

			// ������� �� ��������
			myMassInt.DelValue(5, 6);
			myMassInt.info();

			cout << "��������� ������� ���������!" << endl;
		}

		cout << "-----" << endl;
		cout << "-----" << endl;

		MyClassForBuilding My123;

		My123.myBuilding.Adr.city = "City_1";
		My123.myBuilding.Adr.house = "House_1";
		My123.myBuilding.Adr.street = "Street_1";

		//My123.myBuilding.

		MyClassForBuilding* MyBuil = new MyClassForBuilding[6]; // ���� ��������� �������-������

		MyMass<MyClassForBuilding> myMassBuild = MyMass<MyClassForBuilding>(); // ��� ������������� ������, � ������� �� ��� ������� ���������
		{
			myMassBuild.info();


			for (int i = 0; i < 6; i++)
			{
				MyBuil[i].myBuilding.Adr = My123.myBuilding.Adr;
				MyBuil[i].myBuilding.Floors = i;
				MyBuil[i].myBuilding.Residential = true;

				myMassBuild.Insert(MyBuil[i]);
			}
			myMassBuild.info();

			// ������� �� �������
			myMassBuild.DelInd(0, 1);
			myMassBuild.info();

			// ������� �� ��������
			myMassBuild.DelValue(MyBuil[2], MyBuil[3]);
			myMassBuild.info();

			cout << "��������� ������� ���������!" << endl;
		}

	}
	catch (string msg)
	{
		cout << "-----" << endl;
		cout << "�������� ������, ���������� ���� ��������������! ����������� ������:" << endl;
		std::cout << msg << std::endl;
		cout << "-----" << endl;
	}
}