// ДЛС
#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

struct list // Описание структуры
{
	int field; // поле данных
	struct list* next; // указатель на следующий элемент
	struct list* prev; // указатель на предыдущий элемент
};

struct list* Head; // Корень списка
struct list* Head_const; // Корень списка
int size_ = 0;
int fsize;

struct list* init(int a)  // Инициализация первого элемента
{
	//struct list* lst;
	// выделение памяти под корень списка
	Head = (struct list*)malloc(sizeof(struct list));
	Head->field = a;
	Head->next = NULL; // указатель на следующий узел
	Head->prev = NULL; // указатель на предыдущий узел
	return(Head);
}

struct list* addelemEnd(int data) // Добавление нового элемента в конец
{
	struct list* temp, * p;
	temp = (struct list*)malloc(sizeof(list));

	p = Head;
	while (p->next != NULL)
	{
		p = p->next;
	}

	//cout << "Последний элемент списка = " << p->field << endl;

	p->next = temp;
	temp->prev = p;
	temp->next = NULL;
	temp->field = data;

	return(temp);
}

struct list* deletehead(list* temp) // Удаление корня
{
	cout << "Мы удаляем элемент, как корень: " << temp->field << endl;

	return(temp->next); // новый корень списка
	Head = temp->next;
	delete(temp);
}

struct list* deletelem(list* temp) // Удаление элемента
{
	if (temp = Head)
	{
		deletehead(temp);
	}
	else
	{
		cout << "Мы удаляем элемент: " << temp->field << endl;

		/*
		struct list* prev, * next;
		prev = lst->prev; // узел, предшествующий lst
		next = lst->next; // узел, следующий за lst
		if ((prev != NULL))
			prev->next = lst->next; // переставляем указатель
		if (next != NULL)
			next->prev = lst->prev; // переставляем указатель
		free(lst); // освобождаем память удаляемого элемента
		return(next);
		*/

		temp->prev = temp->next;
		temp->next = temp->prev;
		return(temp->next);
		delete(temp);


	}
}

void listprint(list* lst, int coll) // Вывод
{
	

	struct list* p;
	p = lst;
	size_ = 0;

	if (coll == 0)
	{
		while (p != NULL)
		{
			if (p->field != NULL)
			{
				if (p->field != 0)
				{
					printf("%d ", p->field); // вывод значения элемента p
				}

				if (p->next == Head)
				{
					break;
				}

				p = p->next; // переход к следующему узлу
				size_++;
			}
			else
			{
				break;
			}
		}
	}
	else
	{
		cout << "Неверный вывод" << endl;
	}

	cout << endl;
}

//int *nL = new (int);

void CrateNewList(list* lst)
{
	//int* newList = new int[size_];
	/*
	int i = 0;

	struct list* p;
	p = lst;

	while (p != NULL)
	{
		if (p->field != NULL)
		{
			if (p->field != 0)
			{
				newList[i] = p->field;
				i++;
			}
			/*
			if (p->next == Head)
			{
				break;
			}
			*/
	/*

			p = p->next; // переход к следующему узлу
		}
		else
		{
			break;
		}
	}
	*/

	//*nL = *newList;

	//cout << "*newList = " << newList[size_ - 1] << endl;
	//return(*newList);

}

void printNewList(int* newList)
{
	cout << "Выводим новый список: " << endl;

	if (size_ > 0)
	{
		for (int i = 0; i < size_; i++)
		{
			cout << newList[i] << endl;
		}
	}
	else
	{
		cout << "[Список пуст]" << endl;
	}
}

int count_Finish_Posl;
int count_Start_Posl = 0;
int Md = 0;

void IteratingElements(int* newList[])
{


	//cout << "y = " << y << endl;


	{

		/*
		if (true)
		{
			int j = 0;
			while (j < size_)
			{
				if ((j >= count_Start_Posl) && (j <= count_Finish_Posl))
				{
					//cout << "Мы удаляем элемент " << *newList[j] << endl;

					for (int k = j; k<size_ - 1 - j; k++)
					{
						newList[k] = newList[k + 1];
					}

					size_--;
					if (size_ <= 0) break;
				}

				j++;
			}
		}
		*/
	}




	/*

	if (false) //(y != 0)
	{
		cout << "Самая длинная цепочка нечётных возрастающих чисел: " << endl;

		int u = 0;
		int Mbuf = (MaxLength[0]);

		for (int i = 0; i < y + 1; i++)
		{
			if (Mbuf < (MaxLength[i]))
			{
				u = i;
				Mbuf = MaxLength[i];
			}
		}

		if (MaxLength[0] != 0)
		{
			*temp = p[u];
			int err = 0;

			while ((temp->next != NULL) and (abs(temp->field) % 2 == 1))
			{
				if (temp->next == p[u].next)
				{
					if (err == 0)
					{
						err = 1;
					}
					else
					{
						break;
					}
				}

				cout << temp->field << endl;

				//deletelem(temp);

				temp = temp->next;
			}
		}
		else
		{
			cout << "В последовательности нет нечётных возрастающих последовательностей элементов" << endl;
		}
	}
	*/
}

void main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Введите элементы для вставки в конец списка: " << endl;
	cout << "Конец ввода - число 0." << endl;
	int data = 1;
	cin >> data;
	init(data);

	while (data != 0)
	{
		cin >> data;

		// Вставка в конец:
		addelemEnd(data);
		/*
		if (data != 0)
		{
			addelemEnd(data);
		}
		*/
	}

	cout << "Выводим знаения списка: " << endl;
	listprint(Head, 0);

	int* newList = new int[size_];

	int i = 0;

	struct list* p;
	p = Head;

	while (p != NULL)
	{
		if (p->field != NULL)
		{
			if (p->field != 0)
			{
				newList[i] = p->field;
				i++;
			}
			/*
			if (p->next == Head)
			{
				break;
			}
			*/

			p = p->next; // переход к следующему узлу
		}
		else
		{
			break;
		}
	}

	//CrateNewList(Head);





	//Head_const = (struct list*)malloc(sizeof(list));
	//Head_const->field = Head->field;

	//IteratingElements(&newList);

	struct list* temp, * temp2;
	struct list* p = new list[size_]; //(struct list*)malloc(sizeof(list)); // p - Указатель на начало самой длинной последовательности нечётных возрастающих чисел
	int buf = 0;
	int* MaxLength = new int[size_];
	int y = 0; // Указатель, в какую ячейку записывать, в этих 2 массивах


	int i = 0;

	temp = Head;
	//p = NULL;

	p = (struct list*)malloc(sizeof(list) * size_);

	for (int i = 0; i < size_; i++)
	{
		MaxLength[i] = 0;
	}

	while (temp->next != NULL)
	{
		if (abs(temp->field) % 2 == 1) // Если значение нечётно
		{
			if (abs(temp->field) > buf)
			{
				if (buf == 0)
				{
					p[y] = *temp;
					count_Start_Posl = i;
				}
				buf = temp->field;
				MaxLength[y]++;
			}
			else
			{
				buf = 0;
				y++;
			}
		}
		else
		{
			buf = 0;
			y++;
			//cout << "Значение чётно" << endl;
		}

		i++;
		temp = temp->next;
	}

	cout << endl;
	cout << "Номер начала нужной нам последовательности, по новому формату: " << count_Start_Posl << endl;
	Md = 0;

	for (int u = 0; u < size_; u++)
	{
		if (MaxLength[u] > 0)
		{
			Md = MaxLength[u];
		}
		cout << "MaxLength[" << u << "] = " << MaxLength[u] << endl;
	}

	if (Md == 0)
	{
		cout << "В последовательности нет нечётных возрастающих последовательностей элементов" << endl;
	}
	else
	{
		count_Finish_Posl = count_Start_Posl + Md;
		cout << "Номер конца нужной нам последовательности, по новому формату: " << count_Finish_Posl << endl;

		cout << "Выводим список без нужных нам элементов: " << endl;

		if (size_ > 0)
		{
			for (int i = 0; i < size_; i++)
			{
				if ((i < count_Start_Posl) || (i >= count_Finish_Posl))
				{
					printf("%d ", newList[i]);
					//cout << newList[i] << endl;
				}


				//cout << "i = " << i << endl;
			}
		}
		else
		{
			cout << "[Список пуст]" << endl;
		}
	}


	//printNewList(newList); // Работает

	//cout << "Head = " << Head->field << endl;
}