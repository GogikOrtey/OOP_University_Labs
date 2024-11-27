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

// �������� ������ ����
struct node* newNode(int data) {
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data;

	node->left = NULL;
	node->right = NULL;
	return (node);
}

// ������ ����� ������
void traversePreOrder(struct node* temp) {
	if (temp != NULL) {
		cout << " " << temp->data;
		traversePreOrder(temp->left);
		traversePreOrder(temp->right);
	}
}

// �������������� ����� ������
void traverseInOrder(struct node* temp) {
	if (temp != NULL) {
		traverseInOrder(temp->left);
		cout << " " << temp->data;
		traverseInOrder(temp->right);
	}
}

// �������� ����� ������
void traversePostOrder(struct node* temp) {
	if (temp != NULL) {
		traversePostOrder(temp->left);
		traversePostOrder(temp->right);
		cout << " " << temp->data;
	}
}

/*
int mainf() // f ������
{
	setlocale(LC_ALL, "Russian");

	struct node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);

	cout << "������ ����� ������: ";
	traversePreOrder(root);
	cout << "\n�������������� ����� ������: ";
	traverseInOrder(root);
	cout << "\n�������� ����� ������: ";
	traversePostOrder(root);

	return 0;
}
*/

/*

// �������� ������ �� �++

#include <stdlib.h>
#include <iostream>

using namespace std;

struct node {
  int data;
  struct node *left;
  struct node *right;
};

// �������� ������ ����
struct node *newNode(int data) {
  struct node *node = (struct node *)malloc(sizeof(struct node));
  node->data = data;

  node->left = NULL;
  node->right = NULL;
  return (node);
}

// ������ ����� ������
void traversePreOrder(struct node *temp) {
  if (temp != NULL) {
	cout << " " << temp->data;
	traversePreOrder(temp->left);
	traversePreOrder(temp->right);
  }
}

// �������������� ����� ������
void traverseInOrder(struct node *temp) {
  if (temp != NULL) {
	traverseInOrder(temp->left);
	cout << " " << temp->data;
	traverseInOrder(temp->right);
  }
}

// �������� ����� ������
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

  cout << "������ ����� ������: ";
  traversePreOrder(root);
  cout << "\n�������������� ����� ������: ";
  traverseInOrder(root);
  cout << "\n�������� ����� ������: ";
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
 int YesOrNot = 0; //  ���������� ��� ���������� ���� ������

 do
 {
 OurSponsors = AddStruct(OurSponsors, sponsorAmount);
 setData(OurSponsors, sponsorAmount);

 sponsorAmount++;

 cout << "���������� ���� ������ (1 - ��, 0 - ���): ";
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
 Obj = new Sponsor[amount + 1]; // ��������� ������ ��� ������ ���������
 }
 else
 {
 Sponsor* tempObj = new Sponsor[amount + 1];

 for (int i = 0; i < amount; i++)
 {
 tempObj[i] = Obj[i]; // �������� �� ��������� ������
 }
 delete [] Obj;

 Obj = tempObj;
 }
 return Obj;
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void setData(Sponsor* Obj, const int amount)
{
 cout << "�������: ";
 cin.getline(Obj[amount].surname, 32);
 cout << "���: ";
 cin.getline(Obj[amount].name, 32);
 cout << "����� �������������: ";
 cin >> Obj[amount].sum;
 cin.get();
 cout << endl;
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void showData(const Sponsor* Obj, const int amount)
{
 system("cls");
 cout << "�  " << "�������\t" << "���\t" << "�����\t" << endl;
 cout << "========================================" << endl;
 for (int i = 0; i < amount; i++)
 {
 cout << i + 1 << "  " << Obj[i].surname << '\t' << Obj[i].name << '\t' << Obj[i].sum << endl;
 }
*/