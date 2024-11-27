// ДЛС
#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

/*

struct list // Описание структуры
{
	int field; // поле данных
	struct list* next; // указатель на следующий элемент
	struct list* prev; // указатель на предыдущий элемент
};

struct list* Head; // Корень списка
struct list* Head_const; // Корень списка
int size_;
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
		
		//struct list* prev, * nextprev = lst->prev; // узел, предшествующий next = lst->next; // узел, следующий за if ((prev != NULL)	prev->next = lst->next; // переставляем if (next != NULL	next->prev = lst->prev; // переставляем free(lst); // освобождаем память удаляемого return(next);
		
		
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
		cout << "coll = " << coll << endl;
		while ((coll - 1) != 0)
		{
			coll--;
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


	cout << endl;
}


void IteratingElements()
{
	struct list* temp, *temp2; 
	struct list* p = new list[size_]; //(struct list*)malloc(sizeof(list)); // p - Указатель на начало самой длинной последовательности нечётных возрастающих чисел
	int buf = 0;
	int* MaxLength = new int[size_];
	int y = 0; // Указатель, в какую ячейку записывать, в этих 2 массивах


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

		temp = temp->next;
	}

	// и ещё тут !!!

	//cout << "y = " << y << endl;

	cout << endl;

	if (true) //(y != 0)
	{
		cout << "Самая длинная цепочка нечётных возрастающих чисел: " << endl;

		int u = 0;
		int Mbuf = (MaxLength[0]);

		for (int i = 0; i < y+1; i++)
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
	}

	cout << "Выводим знаения списка: " << endl;
	listprint(Head,0);

	//Head_const = (struct list*)malloc(sizeof(list));
	//Head_const->field = Head->field;

	IteratingElements();

	cout << "Head = " << Head->field << endl;
}
*/