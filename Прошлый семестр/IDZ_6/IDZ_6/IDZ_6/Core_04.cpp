// ���
#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

struct list // �������� ���������
{
	int field; // ���� ������
	struct list* next; // ��������� �� ��������� �������
	struct list* prev; // ��������� �� ���������� �������
};

struct list* Head; // ������ ������
struct list* Head_const; // ������ ������
int size_ = 0;
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

		/*
		struct list* prev, * next;
		prev = lst->prev; // ����, �������������� lst
		next = lst->next; // ����, ��������� �� lst
		if ((prev != NULL))
			prev->next = lst->next; // ������������ ���������
		if (next != NULL)
			next->prev = lst->prev; // ������������ ���������
		free(lst); // ����������� ������ ���������� ��������
		return(next);
		*/

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
		cout << "�������� �����" << endl;
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

			p = p->next; // ������� � ���������� ����
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
	cout << "������� ����� ������: " << endl;

	if (size_ > 0)
	{
		for (int i = 0; i < size_; i++)
		{
			cout << newList[i] << endl;
		}
	}
	else
	{
		cout << "[������ ����]" << endl;
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
					//cout << "�� ������� ������� " << *newList[j] << endl;

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
		cout << "����� ������� ������� �������� ������������ �����: " << endl;

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
			cout << "� ������������������ ��� �������� ������������ ������������������� ���������" << endl;
		}
	}
	*/
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
		/*
		if (data != 0)
		{
			addelemEnd(data);
		}
		*/
	}

	cout << "������� ������� ������: " << endl;
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

			p = p->next; // ������� � ���������� ����
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
	struct list* p = new list[size_]; //(struct list*)malloc(sizeof(list)); // p - ��������� �� ������ ����� ������� ������������������ �������� ������������ �����
	int buf = 0;
	int* MaxLength = new int[size_];
	int y = 0; // ���������, � ����� ������ ����������, � ���� 2 ��������


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
		if (abs(temp->field) % 2 == 1) // ���� �������� �������
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
			//cout << "�������� �����" << endl;
		}

		i++;
		temp = temp->next;
	}

	cout << endl;
	cout << "����� ������ ������ ��� ������������������, �� ������ �������: " << count_Start_Posl << endl;
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
		cout << "� ������������������ ��� �������� ������������ ������������������� ���������" << endl;
	}
	else
	{
		count_Finish_Posl = count_Start_Posl + Md;
		cout << "����� ����� ������ ��� ������������������, �� ������ �������: " << count_Finish_Posl << endl;

		cout << "������� ������ ��� ������ ��� ���������: " << endl;

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
			cout << "[������ ����]" << endl;
		}
	}


	//printNewList(newList); // ��������

	//cout << "Head = " << Head->field << endl;
}