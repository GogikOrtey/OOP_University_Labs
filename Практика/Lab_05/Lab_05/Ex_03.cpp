//#include "Ex_03.h"
///*Описать шаблон класса для хранения данных(контейнер).
//Данные должны хранится, например, в виде массива.
//Шаблон должен включать в себя функции добавления данных, удаления данных, вывода данных на консоль(info()).
//Реализовать итератор для перебора данных контейнера так, чтобы он перебирал элементы в следующем порядке :
//сначала последний добавленный в массив элемент, затем первый, затем предпоследний добавленный в массив элемент, затем второй и т.д.
//При достижении последнего элемента итератор должен «переключаться» снова на первый элемент, то есть быть «кольцевым».
//Продемонстрировать работу шаблона на объектах как встроенного типа, так и собственного класса.
//Для этого создать собственный класс и перегрузить в нём нужные функции - операции.*/
//#include <iostream>
//#include "Time.h"
//using namespace std;
//
//int main()
//{
//	Sample<int> obj;
//	obj.add(8);
//	obj.add(86);
//	obj.add(38);
//	obj.add(1);
//	obj.add(7);
//	obj.add(9);
//
//	obj.print();
//	cout << endl;
//
//	Sample<Time> obj2;
//	Time* mess = new Time[6];
//	for (int i = 0; i < 6; i++)
//	{
//		mess[i].hou = i;
//		mess[i].min = i + 5;
//		obj2.add(mess[i]);
//	}
//
//	obj2.print();
//
//	return 0;
//}
