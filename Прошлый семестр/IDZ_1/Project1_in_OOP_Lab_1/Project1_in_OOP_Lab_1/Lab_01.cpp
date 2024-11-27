#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	float a = 11.2;
	float b = 10.83;
	float c = 9.31;

	float p = a + b + c;

	float bisector1 = (2 / a * sqrt(p * (p - a)*(p - b)*(p - c)));
	float bisector2 = (2 / b * sqrt(p * (p - a)*(p - b)*(p - c)));
	float bisector3 = (2 / c * sqrt(p * (p - a)*(p - b)*(p - c)));

	cout << "����������� ������������ A: " << bisector1 << endl;
	cout << "����������� ������������ B: " << bisector2 << endl;
	cout << "����������� ������������ C: " << bisector3 << endl;
	cout << " " << endl;

	cout << "--------" << endl;
	cout << " " << endl;


	cout << "������� �������� x: ";

	float x;
	cin >> x;

	cout << endl;

	if (x != 0)
	{
		double y;
		double m;

		m = abs(3 * x - 0.512f);
		y = m * 9.81f * pow(x, 2);

		cout << "�������� y: " << y << endl;

		double t;
		double l;

		t = 5 * pow(x, 2) * y - 3;
		l = pow(x, 3) - 2 * x * y + 4 * pow(y, 4);

		double z;

		z = t / l;

		cout << "�������� z: " << z << endl;
	}
	else
	{
		cout << "������� ����� 0. ���������� 0/0. ������� ������ �������� �." << endl;
	}
	
	return 0;
}