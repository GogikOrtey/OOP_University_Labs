#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

void mainf()
{
	cout << ((-5) % 2) << endl;
}

/*
struct node // ������ ����� ��������� ������������� �������, � �������� ���� data, ��������� �� ��������� � ���������� �������
{
	int data;
	struct node* next;
	struct node* prev;
};

/*
struct node* newNode(int data) // �������� ������ ����
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data;

	node->next = NULL;
	node->prev = NULL;
	return (node);
}


struct node* newNodeFirst(int data) // �������� ������ ����
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data;

	node->next = NULL;
	node->prev = NULL;
	return (node);
}

struct node* newNode(int data, node *nodeLast) // �������� ������ ����
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data;

	node->next = NULL;
	node->prev = nodeLast; // ������ ����� �������, � ����� � ���� ����������� ����������
	return (node);
}

// ������ ����� ������
void traversePreOrder(struct node* temp) 
{
	if (temp != NULL) {
		cout << " " << temp->data;
		traversePreOrder(temp->next);
		//traversePreOrder(temp->prev);
	}
}

int main() // f ������
{
	setlocale(LC_ALL, "Russian");

	cout << "������� 2 ����� �������� ������: " << endl;

	int data;
	struct node* Head = (struct node*)malloc(sizeof(struct node));
	//Head->next = NULL;
	struct node* slider = (struct node*)malloc(sizeof(struct node));

	for (int i = 0; i < 2; i++)
	{
		cin >> data;

		if (Head == NULL)
		{
			struct node* Head = newNodeFirst(data);
			cout << "Head->data = " << Head->data << endl;
		}
		else
		{
			slider = Head;
			cout << "slider->data = " << slider->data << endl;
			while (slider->next != NULL)
			{
				slider = slider->next;
			}
			newNode(data, slider);
			cout << "slider->data = " << slider->data << endl;
		}

	}

	cout << "������� �������� ������: " << endl;
	traversePreOrder(Head);

	*/

//}
