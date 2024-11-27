#include <iostream>
#include <cmath>
using namespace std;


int f1(int x, int y)
{
	float outp, a, b, c, y1, s1;

	a = 11.2;
	b = 10.83;
	c = 9.31;

	outp = 0;

	y1 = (c - log(x)) / (b);

	s1 = abs(x) + abs(y);
	if ((s1 <= 1) && (x >= 0))
	{
		outp = 1;
	}
	else
	{
		outp = 2;
	}

	cout << "y1 = " << y1 << endl;
	cout << "s1 = " << s1 << endl;

	return outp;
}

int main()
{
	float x = 5;
	float y = 10;

	cout << f1(x, y) << endl;

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

	//f1(x, y);

	return 0;
}