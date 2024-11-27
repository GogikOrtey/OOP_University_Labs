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
	PhoneHuman():LasnName("Empty"),FirstName("Empty"),NumberPhone(0) {}; // ����������� ��� ���������� �� ������� �������������
	PhoneHuman(string LN, string FN, long NP) :LasnName(LN), FirstName(FN), NumberPhone(NP) {};

	friend bool operator == (const PhoneHuman&, const PhoneHuman&);
	friend bool operator < (const PhoneHuman&, const PhoneHuman&);

	// ��� �������� � �������� ����������� ����� ��������� ��� ������� � ���������� �����������, �.�. ������������ friend

	void Info() const // ����������� ����� ����������� ������������ �����, � �������� �� ��������
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

	cout << "������� name � faName: " << endl;
	cin >> name;
	cin >> faName;

	PhoneHuman D(faName, name, 0);

	Iter = Mult.lower_bound(D); 
	while (Iter != Mult.upper_bound(D))
	// ����� �������� �������� � ����������: �� D �� D
	{
		(*Iter++).Info();
	}
	// ������� ��� ���������� �������

	int inter = Mult.count(D);
	cout << "inter = " << inter << endl;

	// ��������� ������ �������, ���������� �����
	// ������� ����� ����������� � ���� �������� - ����������� (���� -> ��������)

	// ������� � ��������� ������ ���������� �� ������ � ���� � ����

}