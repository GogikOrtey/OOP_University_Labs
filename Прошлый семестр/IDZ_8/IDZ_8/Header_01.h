#pragma once
using namespace std;
#include <iostream>
#include <string>

class file
{
public:
	bool isInvisible = false;	// �������
	bool isCompressed = false;	// ������
	bool isEmpty = true;		// ������
	string Data;
	string Name;
	int size = 0;

	file(string name, bool Empty); // ����������� ������ �����
	file();


		void info();


	/*
	void delFile() // ����������
	{
		cout << "���� " << Name << " ������� �����" << endl;
		delete(file);
	}
	*/
	
};