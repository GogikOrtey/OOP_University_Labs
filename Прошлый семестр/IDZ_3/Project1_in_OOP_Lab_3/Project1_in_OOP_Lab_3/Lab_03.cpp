#include <iostream>
#include <cmath>
using namespace std;

float summ1(float x, int m)
{
	float y1;
	int k;

	y1 = 0;

	for (k = 1; k <= m; k++)
	{
		y1 = y1 + pow((k + x), 2);
	}

	cout << "[func summ_1] y1 = " << y1 << endl;

	return y1;
}

float summ2(int i, int m)
{
	float y2;

	y2 = 0;
	int j;

	for (j = 1; j <= m; j++)
	{
		y2 = y2 + pow((2 * j + 3 * i), 0.5f);
	}

	cout << "[func summ_2] y2 = " << y2 << endl;

	return y2;
}

int main()
{
	cout << "Task #1: " << endl;

	float n = 20;
	float x = 3.1415;
	double y, t;

	int k;
	t = 0;


	for (k = 0; k <= n; k++)
	{
		t = t + pow((x / (x + 5)), k);
	}

	cout << "[Summ] t = " << t << endl;

	y = 1 + 2 * t * cos(k * x);

	cout << "y = " << y << endl;

	cout << "------------" << endl;
	cout << " " << endl;
	cout << "Task #2: " << endl;

	x = 1;
	float m = 1;
	n = 1;
	k = 0;
	float outp;
	int i = 0;
	float a, b;
	outp = 0;

	for (i = 1; i <= n ; i++)
	{
		outp = outp + ((5 * x + summ1(x, m)) / (x + summ2(i, m)));
	}

	cout << "[Final output] outp = " << outp << endl;

	return 0;
}