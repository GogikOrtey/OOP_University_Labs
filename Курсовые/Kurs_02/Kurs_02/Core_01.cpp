#include <iostream>
#include <cmath>
#include <time.h>
#include <string>
#include <sstream>
#include <list>
#include <set>

#include "Book.h"
#include "Author.h"
#include "User.h"
using namespace std;

void Razd()
{
	cout << endl;
	cout << "-----" << endl;
	cout << endl;
}


void main()
{
	setlocale(LC_ALL, "rus");

	Book Books; 
	Author author;
	User user;

	// ������ �������:
	Author Es = author.CreateNew("Es");
	Author Ph = author.CreateNew("Ph");

	// ������ �����:
	Book A_01 = Books.CreateNewBook("A_01", Es); 
	Book A_02 = Books.CreateNewBook("A_02", Es); 
	Book A_03 = Books.CreateNewBook("A_03", Ph);

	// ������ ����� �������������:
	User Petya = user.CreateNew("Petya", 12);
	User Vasya = user.CreateNew("Vasya", 17);


	author.ShowAllAuthors();		// ������� ���� �������

	Razd();
	Books.InfoForBook(A_03);		// ������� �������� �����

	Razd();
	Books.ShowAllBooks();			// ������� ��� �����

	Razd();
	Books.DelBook("A_02");			// ������� ����� �� �����

	Razd();
	Books.ShowAllBooks();			// ��� ��� ������� ��� �����

	Razd();
	Books.ShowBooksGivenAuthor(Es);	// ������� ��� ����� ������ Es

	Razd();
	user.ShowAllUsers();			// ������� ���� �������������, ������� � ��� ����

	Razd();
	A_03.TakeBook(Vasya);			// ���� ���� ���� 3� ����� �� ����� ����������
}

