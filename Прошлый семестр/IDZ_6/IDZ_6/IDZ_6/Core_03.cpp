// ���
#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

/*

struct list // �������� ���������
{
	int field; // ���� ������
	struct list* next; // ��������� �� ��������� �������
	struct list* prev; // ��������� �� ���������� �������
};

struct list* Head; // ������ ������
struct list* Head_const; // ������ ������
int size_;
int fsize;

struct list* init(int a)  // ������������� ������� ��������
{
	//struct list* lst;
	// ��������� ������ ��� ������ ������
	Head = (struct list*)malloc(sizeof(struct list));
	Head->field = a;
	Head->next = NULL; // ��������� �� ��������� ����
	Head->prev = NULL; // ��������� �� ���������� ����
	return(Head);
}

struct list* addelemEnd(int data) // ���������� ������ �������� � �����
{
	struct list* temp, * p;
	temp = (struct list*)malloc(sizeof(list));

	p = Head;
	while (p->next != NULL)
	{
		p = p->next;
	}

	//cout << "��������� ������� ������ = " << p->field << endl;

	p->next = temp;
	temp->prev = p;
	temp->next = NULL;
	temp->field = data;
	
	return(temp);
}

struct list* deletehead(list* temp) // �������� �����
{
	cout << "�� ������� �������, ��� ������: " << temp->field << endl;
	
	return(temp->next); // ����� ������ ������
	Head = temp->next;
	delete(temp);
}

struct list* deletelem(list* temp) // �������� ��������
{
	if (temp = Head)
	{
		deletehead(temp);
	}
	else
	{
		cout << "�� ������� �������: " << temp->field << endl;
		
		//struct list* prev, * nextprev = lst->prev; // ����, �������������� next = lst->next; // ����, ��������� �� if ((prev != NULL)	prev->next = lst->next; // ������������ if (next != NULL	next->prev = lst->prev; // ������������ free(lst); // ����������� ������ ���������� return(next);
		
		
		temp->prev = temp->next;
		temp->next = temp->prev;
		return(temp->next);
		delete(temp);


	}
}

void listprint(list* lst, int coll) // �����
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
					printf("%d ", p->field); // ����� �������� �������� p
				}

				if (p->next == Head)
				{
					break;
				}

				p = p->next; // ������� � ���������� ����
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
					printf("%d ", p->field); // ����� �������� �������� p
				}

				if (p->next == Head)
				{
					break;
				}

				p = p->next; // ������� � ���������� ����
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
	struct list* p = new list[size_]; //(struct list*)malloc(sizeof(list)); // p - ��������� �� ������ ����� ������� ������������������ �������� ������������ �����
	int buf = 0;
	int* MaxLength = new int[size_];
	int y = 0; // ���������, � ����� ������ ����������, � ���� 2 ��������


	temp = Head;
	//p = NULL;

	p = (struct list*)malloc(sizeof(list) * size_);

	for (int i = 0; i < size_; i++)
	{
		MaxLength[i] = 0;
	}

	while (temp->next != NULL)
	{
		if (abs(temp->field) % 2 == 1) // ���� �������� �������
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
			//cout << "�������� �����" << endl;
		}

		temp = temp->next;
	}

	// � ��� ��� !!!

	//cout << "y = " << y << endl;

	cout << endl;

	if (true) //(y != 0)
	{
		cout << "����� ������� ������� �������� ������������ �����: " << endl;

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
			cout << "� ������������������ ��� �������� ������������ ������������������� ���������" << endl;
		}


	}
}

void main()
{
	setlocale(LC_ALL, "Russian");

	cout << "������� �������� ��� ������� � ����� ������: " << endl;
	cout << "����� ����� - ����� 0." << endl;
	int data = 1;
	cin >> data;
	init(data);

	while (data != 0)
	{
		cin >> data;

		// ������� � �����:
		addelemEnd(data);
	}

	cout << "������� ������� ������: " << endl;
	listprint(Head,0);

	//Head_const = (struct list*)malloc(sizeof(list));
	//Head_const->field = Head->field;

	IteratingElements();

	cout << "Head = " << Head->field << endl;
}
*/