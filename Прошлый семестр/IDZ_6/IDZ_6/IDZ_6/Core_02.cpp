#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

void mainf()
{
	cout << ((-5) % 2) << endl;
}

/*
struct node // Создаём новую структуру динамического массива, у которого есть data, указатель на следующий и предыдущий элемент
{
	int data;
	struct node* next;
	struct node* prev;
};

/*
struct node* newNode(int data) // Создание нового узла
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data;

	node->next = NULL;
	node->prev = NULL;
	return (node);
}


struct node* newNodeFirst(int data) // Создание нового узла
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data;

	node->next = NULL;
	node->prev = NULL;
	return (node);
}

struct node* newNode(int data, node *nodeLast) // Создание нового узла
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data;

	node->next = NULL;
	node->prev = nodeLast; // Создаём новый элемент, и сзади к нему прикрепляем предыдущий
	return (node);
}

// Прямой обход дерева
void traversePreOrder(struct node* temp) 
{
	if (temp != NULL) {
		cout << " " << temp->data;
		traversePreOrder(temp->next);
		//traversePreOrder(temp->prev);
	}
}

int main() // f убрать
{
	setlocale(LC_ALL, "Russian");

	cout << "Введите 2 новых значения списка: " << endl;

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

	cout << "Выводим значения списка: " << endl;
	traversePreOrder(Head);

	*/

//}
