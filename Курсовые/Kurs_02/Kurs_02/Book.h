#pragma once
#include <iostream>
#include <cmath>
#include <time.h>
#include <string>
#include <sstream>
#include <list>
#include <set>

#include "Author.h"
#include "User.h"
using namespace std;

class Book
{
public:
	set<Book> Books;

	string Name;
	Author author;
	User user;
	bool isTaken = false;

	User NullUser;

	Book CreateNewBook(string name, Author author_)
	{
		Name = name;
		author = author_;
		NullUser.Age = 0;
		user = NullUser;

		InsertNewBook(*this);
		return *this;
	}

	void TakeBook(User user_)
	{
		cout << "������������ " << user_.Name << ", ��������� " << user_.Age << " ��� ���� ����� " << Name << endl;
		isTaken = true;
		user = user_;
	}

	void TakeBook(User user_, Book book)
	{
		cout << "������������ " << user_.Name << ", ��������� " << user_.Age << " ��� ���� ����� " << book.Name << endl;
		book.isTaken = true;
		book.user = user_;
	}

	User ReturnBook()
	{
		isTaken = false;
		user = NullUser;
		return user;
	}

	User ReturnBook(Book book)
	{
		book.isTaken = false;
		book.user = NullUser;
		return book.user;
	}

	void InsertNewBook(Book book)
	{
		Books.insert(book);
	}

	void InfoForBook(Book book)
	{
		cout << "��� ����� � ��������� [" << book.Name << "], ������ {" << book.author.FIO << "}" << endl;
		if (book.isTaken == true) cout << "-> ���� ������ ������� ������������ " << book.user.Name << ", ��������� " << book.user.Age << " ���" << endl;
	}

	void InfoForBook()
	{
		cout << "��� ����� � ��������� [" << Name << "], ������ {" << this->author.FIO << "}" << endl;
		if (isTaken == true) cout << "-> ���� ������ ������� ������������ " << user.Name << ", ��������� " << user.Age << " ���" << endl;
	}

	Book SearchBook(string name)
	{
		for (set<Book>::iterator it = Books.begin();
			it != Books.end();
			it++)
		{
			if (it->Name == name)
			{
				return *it;
			}
		}
	}

	Book DelBook(string name)
	{
		Book b = SearchBook(name);
		if (b.Name == name)
		{
			Books.erase(b);
			cout << "������� �����: ";
			b.InfoForBook();
		}
		return b;
	}

	void DelAllBooksForAuthor(Author Au)
	{
		author.Authors.erase(Au);

		for (set<Book>::iterator it = Books.begin();
			it != Books.end();
			it++)
		{
			if (it->author == Au)
			{
				DelBook(it->Name);
			}
		}
	}

	void DelUser(User user1)
	{
		bool isTrue = true;

		for (set<Book>::iterator it = Books.begin();
			it != Books.end();
			it++)
		{
			if (it->isTaken == true)
			{
				if (it->user == user1) isTrue = false;
				//cout << "it->user.Name = " << it->user.Name << "; user.Name = " << user1.Name << endl;
			}
		}

		if (isTrue == true)
		{
			user1.Users.erase(user1);
			cout << "������� ������� ������������ " << user1.Name << endl;
		}
		else
		{
			cout << "�� ����� ������� ������������" << user1.Name << ", �.�. � ���� ���� �����, ������� �� �� ������" << endl;
		}
	}

	void ShowAllBooks()
	{
		cout << "������� ��� �����, ������� � ��� ����: " << endl;

		for (set<Book>::iterator it = Books.begin();
			it != Books.end();
			it++)
		{
			InfoForBook(*it);
			//cout << "����� � ������: [" << it->Name << "], ������ {" << it->author.FIO << "}" << endl;
		}
	}

	void ShowBooksGivenAuthor(Author Auf)
	{
		cout << "��� ����� ������ {" << Auf.FIO << "}:" << endl;

		for (set<Book>::iterator it = Books.begin();
			it != Books.end();
			it++)
		{
			if (it->author.FIO == Auf.FIO)
			{
				InfoForBook(*it);
			}
		}
	}

	friend bool operator < (const Book& a1, const Book& a2)
	{
		if (a1.Name < a2.Name) return true;
		else return false;
	}
};

