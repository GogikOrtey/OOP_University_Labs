#pragma once
#include <iostream>
#include <cmath>
#include <time.h>
#include <string>
#include <sstream>
using namespace std;

//****// Использовать лист вектор словари множества

void Razd()
{
	cout << endl;
	cout << "-----" << endl;
	cout << endl;
}

class Author
{
public:
	char Name;
	string FaName;
	char Otch;

	int CountBooks = 0;

	Book* Books = new Book[CountBooks];

	Author()
	{
		FaName = "";
		Name = '.';
		Otch = '.';
	}
	// Выводит информацию об авторе
	void InfoAuthor(Author author)	
	{
		cout << "Автор: " << FaName << " " << Name << ". " << Otch << "." << endl;

		cout << "В библиотеке есть " << CountBooks << " книг этого автора" << endl;

		int TookUs = 0;

		for (int i = 0; i < CountBooks; i++)
		{
			if(&Books[i].)
		}

		// Сколько его книг есть в нашей библиотеке
		// Сколько его книг сейчас взято пользователями

		// Мы не будем хранить эти данные, а каждый раз при вызове процедуры, пересчитывать их заново
		Razd();
	}

	// Процедура добавления автора. Чаще всего будет использоваться другими процедурами
	void InsertAuthor(/* Тут параметры для создания нового автора */)
	{

	}

	// Удаляем книгу у автора
	// К этому методу нужен приватный доступ
	void DeleteBookInTheAuthor(Book book)
	{
		// Т.к. у книги уже есть автор, это будет несложно.
		// Вывел это в отдельную процедуру скорее для простоты кода, чем для удобства.
	}

	// Удаляем автора и все его книги
	Author DeleteAuthor(Author author)
	{
		// Проверяем, нет ли у него книг в нашей библиотеке, если есть - удаляем их -> DeleteBook(book)
		// Возвращаем только что удалённый элемент, так как это хороший тон в программировании 
		// (И потому что этот элемент нам понадобится позже))
	}
};

class User
{
public:
	string FIO;
	int Age;
	bool isMan;
	int TakensBooks;
	// Ссылка на динамический список взятых книг

	User()
	{
		Age = 0;
		FIO = "";
		isMan = true;
		TakensBooks = 0;
		// Ссылка на динамический список взятых книг
	}

	// Выводит информацию о пользователе
	void InfoUser(User user)
	{
		// Его ФИО
		// Возраст и пол
		// Сколько книг он взял на данный момент
	}

	// Добавляем нового пользователя
	void InsertUser(/* Тут параметры для создания нового пользователя */)
	{

	}

	// Удаляем данные пользователя
	User DeleteUser(User user)
	{
		// Проверяем, нет ли у пользователя взятых книг. Если есть - генерируем исключения, и НЕ удаляем пользователя.
	}
};

class Book
{
public:
	string Title;
	Author* author;
	bool In_stock;
	User TookUser;
	// Ссылка на раздел, которому принадлежит книга

	Book()
	{
		author = author;
		In_stock = false;
		Title = "";
		TookUser = TookUser;
		// Ссылка на раздел, которому принадлежит книга
	}

	// Выводит информацию о книге
	void InfoBook(Book book)
	{
		// Название книги
		// Её автора
		// Её раздел
		// Взята ли она сейчас, и если да - ФИО пользователя, который её взял
	}

	// Создаём новую книгу
	void InsertBook(/* Тут параметры для создания новой книги */)
	{

	}

	// К этому методу нужен приватный доступ
	// Удаляем книгу у всех пользователей, у которых она взята
	void DeleteBookOnAllUsers(Book book)
	{
		// В поисковом цикле:
		DeleteTookBookFromUser(TookUser, book);
	}

	// Добавляем книгу в список взятых книг у пользователя (когда он берёт её из библиотеки)
	Book InsertTookBookFromUser(User user, Book book)
	{
		// Проверяем, была ли она взята
		// Если нет, то добавляем её в список взятых книг пользователя, а также его count взятых книг + 1
		// Для книги прописываем, что она теперь взята

		// Возвращаем эту книгу, для удобства.
	}

	// Удаляем взятую книгу у пользователя (когда он вернул её)
	Book DeleteTookBookFromUser(User user, Book book)
	{
		// Проверяем, была ли она взята
		// Если да, то удаляем её из списка взятых книг пользователя, а также его count взятых книг - 1
		// Для книги прописываем, что она теперь не взята

		// Возвращаем эту книгу, для удобства.
	}

	// Удаляем книгу из нашей библиотеки
	Book DeleteBook(Book book)
	{
		// Также удаляем её у автора -> DeleteBookInTheAuthor(book) 
		// Также удаляем её у всех пользователей, у которых она есть -> DeleteBookOnAllUsers(Book book) 
	}

	// Проверяет, нет ли у этой книги дубликатов, в этом или других разделах
	// Если есть, выводит их число 
	int intDublicateBook(Book book)
	{

	}

	// Проверяет, нет ли у этой книги дубликатов, в этом или других разделах
	// Если есть, выводит их динамический список
	void massDublicateBook(Book book)
	{

	}

	// Перенос книги в другой раздел. Указываем книгу и новый раздел
	void MigrateBookFromCharacter(Book book, Chapter chapter)
	{
		// Удаляем книгу в старом разделе -> DeleteBook(book)
		// И добавляем книгу в новый раздел -> InsertBook(book(chapter))
	}
};

class Chapter
{
public:
	string TitleChapter;
	int Size;
	int TakenBooks; // Лишнее
	// Ссылка на неупорядоченный массив с книгами (Book)

	Chapter()
	{
		Size = 0;
		TakenBooks = 0;
		TitleChapter = "";
		// Ссылка на неупорядоченный массив с книгами (Book)
	}

	// Выводит все книги, числящиеся в разделе
	void InfoAllBooksInCaracter(Chapter chapter)
	{
		InfoChapter(chapter);

		// Вывод всех книг из неупорядоченного массива с книгами -> InfoBook(book)
	}

	// Выводит информацию о разделе
	void InfoChapter(Chapter chapter)
	{
		// Порядковый номер раздела (в нашем динамическом массиве) и его название
		// Колличество книг в разделе, и сколько из них взято пользователями
	}

	// Выводит информацию о разделе
	void InfoChapter(int i)
	{
		// Порядковый номер раздела (в нашем динамическом массиве) и его название
		// Колличество книг в разделе, и сколько из них взято пользователями
	}

	// Создаём новый раздел
	void InsertCaracter(/* Тут параметры для создания нового раздела */)
	{

	}

	// Удаляем все книги из раздела
	void DeleteAllBooksInCharacter(Chapter chapter)
	{

	}

	// Удаляем раздел из нашей библиотеки
	Chapter DeleteChapter(Chapter chapter)
	{
		// Если в разделе есть книги, то выводится предупреждение
		// Если пользователь подтверждает удаление, то запускается процедура -> DeleteAllBooksInCharacter(chapter)
		// Потом раздел удаляется из списка разделов. Если он был в середине, остальные подвигаются
	}

	// Выводит информацию обо всех разделах
	void InfoAllChapters()
	{
		// Общее количество разделов

		for (int i = 0; i < CountChapters; i++)
		{
			chapter.InfoChapter(i);
		}
	}
};

class Search
{
public:

	// ################ //
	//      SEARCH:		//
	// ################ //


	void SearchBooks(string title)
		// Будет возвращать массив всех книг, которые нашлись, по заголовку
	{
		// Если поле title пустое, то возвращает динамический массив из всех книг из всех разделов
	}

	void SearchBooks(string title, bool isTook)
		// Будет возвращать массив всех книг, которые нашлись, по заголовку и условию взятости
	{
		// Если поле title пустое, то возвращает динамический массив из всех книг из всех разделов по условию взятости
	}

	void SearchCharacters(string title)
		// Будет возвращать массив всех разделов, которые нашлись, по заголовку
	{
		// Если поле title пустое, то возвращает динамический массив всех разделов (наш, который у нас уже есть))
	}

	void SearchUsers(string title)
		// Будет возвращать массив всех пользователей, которые нашлись, по заголовку (Поиск в ФИО)
	{
		// Если поле title пустое, то возвращает динамический массив всех пользователей
	}

	void SearchUsers(string title, bool isTookBooks)
		// Будет возвращать массив всех пользователей, которые нашлись, по заголовку (Поиск в ФИО) и условию взятия книг
	{
		// Если поле title пустое, то возвращает динамический массив всех пользователей по условию взятия книг
	}

	void SearchAuthors(string title)
		// Будет возвращать массив всех авторов, которые нашлись, по заголовку (Поиск в фамилии)
	{
		// Если поле title пустое, то возвращает динамический массив всех авторов
	}

	// *** Нужно переписать void на возвращаемый тип динамического массива
};