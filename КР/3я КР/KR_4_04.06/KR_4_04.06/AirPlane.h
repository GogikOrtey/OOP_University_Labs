#include <iostream>
#include <cmath>
#include <time.h>
#include <string>
#include <sstream>
using namespace std;
#pragma once

// ��_4 ������� 7

/*
	������� �����:
	����������� �����: ������ ��������� ���������� � �������� (�����, ��� (������������,
	��������, �������-������������), �����, ���). ������������� ����������� ����������� ��������� ����� ������,
	�������� � �����������  ��������  �����  ������,  ������  ������  ��  �������.

	������� �������:�������� �������, ����������� �� ��������� ������(��������� ����� list)
	���������/�����������������  ��������� �������  ������� ���������� � ��������������� ���.
	������������������ ������ ������� �� ����������� STL���������� ������� ����������� ���� �
	������������ ������ (������� ������� �� � ������� ��� ������������).
*/

class AirPlane
{
public:
	string brand;
	int num;
	float weight; // ���

	enum type
	{
		passenger = 0,	// ������������ // �������� ������ ������������ � 0
		cargo,			// ��������
		military		// �������
	};

	type currType;


	AirPlane(); // ����������� ��� ����������

	AirPlane(string brand1, int num1, float weight1, type currType1); // ����������� � �����������

	void Info();

	friend bool operator < (const AirPlane& a1, const AirPlane& a2);
	friend bool operator == (const AirPlane& a1, const AirPlane& a2);
};

