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

	// РЎРѕР·РґР°С‘Рј Р°РІС‚РѕСЂРѕРІ:
	Author Es = author.CreateNew("Es");
	Author Ph = author.CreateNew("Ph");

	// РЎРѕР·РґР°С‘Рј РєРЅРёРіРё:
	Book A_01 = Books.CreateNewBook("A_01", Es); 
	Book A_02 = Books.CreateNewBook("A_02", Es); 
	Book A_03 = Books.CreateNewBook("A_03", Ph);

	// РЎРѕР·РґР°С‘Рј РЅРѕРІС‹С… РїРѕР»СЊР·РѕРІР°С‚РµР»РµР№:
	User Petya = user.CreateNew("Petya", 12);
	User Vasya = user.CreateNew("Vasya", 17);


	author.ShowAllAuthors();		// Р’С‹РІРѕРґРёРј РІСЃРµС… Р°РІС‚РѕСЂРѕРІ

	Razd();
	Books.InfoForBook(A_03);		// Р’С‹РІРѕРґРёРј РЅР°Р·РІР°РЅРёРµ РєРЅРёРіРё

	Razd();
	Books.ShowAllBooks();			// Р’С‹РІРѕРґРёРј РІСЃРµ РєРЅРёРіРё

	Razd();
	Books.DelBook("A_02");			// РЈРґР°Р»СЏРµРј РєРЅРёРіСѓ РїРѕ РёРјРµРЅРё

	Razd();
	Books.ShowAllBooks();			// Р•С‰С‘ СЂР°Р· РІС‹РІРѕРґРёРј РІСЃРµ РєРЅРёРіРё

	Razd();
	Books.ShowBooksGivenAuthor(Es);	// Р’С‹РІРѕРґРёРј РІСЃРµ РєРЅРёРіРё Р°РІС‚РѕСЂР° Es

	Razd();
	user.ShowAllUsers();			// Р’С‹РІРѕРґРёРј РІСЃРµС… РїРѕР»СЊР·РѕРІР°С‚РµР»РµР№, РєРѕС‚РѕСЂС‹Рµ Сѓ РЅР°СЃ РµСЃС‚СЊ

	Razd();
	A_03.TakeBook(Vasya);			// Р’Р°СЃСЏ Р±РµСЂС‘С‚ СЃРµР±Рµ 3СЋ РєРЅРёРіСѓ РёР· РЅР°С€РµР№ Р±РёР±Р»РёРѕС‚РµРєРё
}

