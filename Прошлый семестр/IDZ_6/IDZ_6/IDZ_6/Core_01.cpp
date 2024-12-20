#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

/*
struct List
{
	int val;
};

struct node {
	int data;
	struct node* left;
	struct node* right;
};

// Создание нового узла
struct node* newNode(int data) {
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data;

	node->left = NULL;
	node->right = NULL;
	return (node);
}

// Прямой обход дерева
void traversePreOrder(struct node* temp) {
	if (temp != NULL) {
		cout << " " << temp->data;
		traversePreOrder(temp->left);
		traversePreOrder(temp->right);
	}
}

// Центрированный обход дерева
void traverseInOrder(struct node* temp) {
	if (temp != NULL) {
		traverseInOrder(temp->left);
		cout << " " << temp->data;
		traverseInOrder(temp->right);
	}
}

// Обратный обход дерева
void traversePostOrder(struct node* temp) {
	if (temp != NULL) {
		traversePostOrder(temp->left);
		traversePostOrder(temp->right);
		cout << " " << temp->data;
	}
}

/*
int mainf() // f убрать
{
	setlocale(LC_ALL, "Russian");

	struct node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);

	cout << "Прямой обход дерева: ";
	traversePreOrder(root);
	cout << "\nЦентрированный обход дерева: ";
	traverseInOrder(root);
	cout << "\nОбратный обход дерева: ";
	traversePostOrder(root);

	return 0;
}
*/

/*

// Двоичное дерево на С++

#include <stdlib.h>
#include <iostream>

using namespace std;

struct node {
  int data;
  struct node *left;
  struct node *right;
};

// Создание нового узла
struct node *newNode(int data) {
  struct node *node = (struct node *)malloc(sizeof(struct node));
  node->data = data;

  node->left = NULL;
  node->right = NULL;
  return (node);
}

// Прямой обход дерева
void traversePreOrder(struct node *temp) {
  if (temp != NULL) {
	cout << " " << temp->data;
	traversePreOrder(temp->left);
	traversePreOrder(temp->right);
  }
}

// Центрированный обход дерева
void traverseInOrder(struct node *temp) {
  if (temp != NULL) {
	traverseInOrder(temp->left);
	cout << " " << temp->data;
	traverseInOrder(temp->right);
  }
}

// Обратный обход дерева
void traversePostOrder(struct node *temp) {
  if (temp != NULL) {
	traversePostOrder(temp->left);
	traversePostOrder(temp->right);
	cout << " " << temp->data;
  }
}

int main() {
  struct node *root = newNode(1);
  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(4);

  cout << "Прямой обход дерева: ";
  traversePreOrder(root);
  cout << "\nЦентрированный обход дерева: ";
  traverseInOrder(root);
  cout << "\nОбратный обход дерева: ";
  traversePostOrder(root);
}

*/

/*
struct Sponsor
{
 char name[32];
 char surname[32];
 double sum;
};

Sponsor* AddStruct(Sponsor* Obj, const int amount);
void setData(Sponsor* Obj, const int amount);
void showData(const Sponsor* Obj, const int amount);

int main()
{
 setlocale(LC_ALL, "rus");

 Sponsor* OurSponsors = 0;
 int sponsorAmount = 0;
 int YesOrNot = 0; //  продолжить или остановить ввод данных

 do
 {
 OurSponsors = AddStruct(OurSponsors, sponsorAmount);
 setData(OurSponsors, sponsorAmount);

 sponsorAmount++;

 cout << "Продолжить ввод данных (1 - да, 0 - нет): ";
 cin >> YesOrNot;
 cin.get();
 } while (YesOrNot != 0);

 showData(OurSponsors, sponsorAmount);

 delete[] OurSponsors;
 return 0;
}

Sponsor* AddStruct(Sponsor* Obj, const int amount)
{
 if (amount == 0)
 {
 Obj = new Sponsor[amount + 1]; // выделение памяти для первой структуры
 }
 else
 {
 Sponsor* tempObj = new Sponsor[amount + 1];

 for (int i = 0; i < amount; i++)
 {
 tempObj[i] = Obj[i]; // копируем во временный объект
 }
 delete [] Obj;

 Obj = tempObj;
 }
 return Obj;
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void setData(Sponsor* Obj, const int amount)
{
 cout << "Фамилия: ";
 cin.getline(Obj[amount].surname, 32);
 cout << "Имя: ";
 cin.getline(Obj[amount].name, 32);
 cout << "Сумма пожертвования: ";
 cin >> Obj[amount].sum;
 cin.get();
 cout << endl;
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void showData(const Sponsor* Obj, const int amount)
{
 system("cls");
 cout << "№  " << "Фамилия\t" << "Имя\t" << "Сумма\t" << endl;
 cout << "========================================" << endl;
 for (int i = 0; i < amount; i++)
 {
 cout << i + 1 << "  " << Obj[i].surname << '\t' << Obj[i].name << '\t' << Obj[i].sum << endl;
 }
*/