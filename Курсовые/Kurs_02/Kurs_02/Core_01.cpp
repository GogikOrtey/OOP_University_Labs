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

	// Создаём авторов:
	Author Es = author.CreateNew("Es");
	Author Ph = author.CreateNew("Ph");

	// Создаём книги:
	Book A_01 = Books.CreateNewBook("A_01", Es); 
	Book A_02 = Books.CreateNewBook("A_02", Es); 
	Book A_03 = Books.CreateNewBook("A_03", Ph);

	// Создаём новых пользователей:
	User Petya = user.CreateNew("Petya", 12);
	User Vasya = user.CreateNew("Vasya", 17);


	author.ShowAllAuthors();		// Выводим всех авторов

	Razd();
	Books.InfoForBook(A_03);		// Выводим название книги

	Razd();
	Books.ShowAllBooks();			// Выводим все книги

	Razd();
	Books.DelBook("A_02");			// Удаляем книгу по имени

	Razd();
	Books.ShowAllBooks();			// Ещё раз выводим все книги

	Razd();
	Books.ShowBooksGivenAuthor(Es);	// Выводим все книги автора Es

	Razd();
	user.ShowAllUsers();			// Выводим всех пользователей, которые у нас есть

	Razd();
	A_03.TakeBook(Vasya);			// Вася берёт себе 3ю книгу из нашей библиотеки
}

