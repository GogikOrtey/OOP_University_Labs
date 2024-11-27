#include <iostream>
#include <set>
#include <string>
#include <sstream>
using namespace std;

class PhoneHuman
{
private:
	string LasnName;
	string FirstName;
	long NumberPhone;

public:
	PhoneHuman():LasnName("Empty"),FirstName("Empty"),NumberPhone(0) {}; // Конструктор без параметров со списком инициализации
	PhoneHuman(string LN, string FN, long NP) :LasnName(LN), FirstName(FN), NumberPhone(NP) {};

	friend bool operator == (const PhoneHuman&, const PhoneHuman&);
	friend bool operator < (const PhoneHuman&, const PhoneHuman&);

	// Для множеств и словарей обязательно нужно указывать оба объекта в перегрузке опрераторов, т.е. использовать friend

	void Info() const // Константный метод гарантирует неизменность полей, с которыми он работает
	{
		cout << "LasnName = " << LasnName << ", FirstName = " << FirstName << ", NumberPhone = " << NumberPhone << endl;
	}
};

bool operator == (const PhoneHuman& PH1, const PhoneHuman& PH2)
{
	return ((PH1.LasnName == PH2.LasnName) && (PH1.FirstName == PH2.FirstName));
}

bool operator < (const PhoneHuman& PH1, const PhoneHuman& PH2)
{
	if (PH1.LasnName == PH2.LasnName)
	{
		return(PH1.FirstName < PH2.FirstName);
	}
	else return  (PH1.LasnName < PH2.LasnName);
}

void main()
{
	setlocale(LC_ALL, "rus");

	PhoneHuman A("Ivanov", "Ivan", 4556712);
	PhoneHuman B("Petrovich", "Petrov", 4574512);
	PhoneHuman C("Ivanov", "Ivan", 7826712);

	multiset <PhoneHuman, less<PhoneHuman>> Mult;
	multiset <PhoneHuman, less<PhoneHuman>>::iterator Iter;

	Mult.insert(A);
	Mult.insert(B);
	Mult.insert(C);

	cout << "Size = " << Mult.size() << endl;

	Iter = Mult.begin();
	while (Iter != Mult.end())
	{
		(*Iter++).Info();
	}

	string name, faName;

	cout << "Введите name и faName: " << endl;
	cin >> name;
	cin >> faName;

	PhoneHuman D(faName, name, 0);

	Iter = Mult.lower_bound(D); 
	while (Iter != Mult.upper_bound(D))
	// Задаём диапазон значений в контейнере: от D до D
	{
		(*Iter++).Info();
	}
	// Выводим все совпадения объекта

	int inter = Mult.count(D);
	cout << "inter = " << inter << endl;

	// Множество хранит объекты, содержащие ключи
	// Словари можно представить в виде столбцов - отображение (ключ -> значение)

	// Словари и множества сильно отличаются по работе с ними в коде

}