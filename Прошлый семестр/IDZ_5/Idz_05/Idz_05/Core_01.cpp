#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

int const n = 5;
int mass[n][n];
int mass_X[n+1];
int mass_sum[n];

/*
	Я долго выписывал, что бы матрица выводилась в понятном (читаемом, по столбцам), для человека виде.
	Однако, я обнаружил, что функция ToString() не работает в моём С++. Это было очень грустно и обидно.
	Тогда, я создал свою функцию, преобразовывающую число, в колличество символов в нём. Это нужно было, для вставки определённого числа пробелов,
	для того, что бы все столбцы были строго вертикальными, а не плавали вправо-влево. Я это сделал)
*/

void f_fill(int i, int j) // Тут мы заполняем каждую ячейку матрицы случайными значениями. Также, и отрицательными.
{
	mass[i][j] = rand() % 11-5;
	/*
	if (rand()%2 == 1)
	{
		mass[i][j] = mass[i][j] * -1;
	}
	*/
}

int Count_Length(int a) // Вот тут мы получаем длинну числа
{
	//cout << "a = " << a << endl;
	//cout << "a%10 = " << a % 10 << endl;
	//cout << "a%10 = " << (a % 10)%10 << endl;

	int f = 0;
	if (a < 0) { f++; }

	while (abs(a) > 9)
	{
		f++;
		a = a % 10;
		if (a < 10) { break; }
	}
	return (f + 1);
}

void f_output(int i, int j) // Здесь мы выводим каждый новый элемент матрицы, в матричном виде
{
	int z = Count_Length(mass[i][j]);
	//cout << mass[i][j] << " " << z << ",";
	cout << "  ";
	if (j != n - 1) 
	{
		cout << mass[i][j] << ","; 
	}
	else
	{
		cout << mass[i][j];
	}

	
	if (z == 2) // С прописанным колличеством пробелов
	{
		cout << " ";
	}
	else if (z == 1)
	{
		cout << "  ";
	}
}

void Ziro_Mass_X() // Обнуляем массив со значениями параметра Х (для каждого столбца)
{
	for (int i = 0; i < n + 1; i++)
	{
		mass_X[i] = 0;
	}
}

void X_Mass_Count() // Заново считаем параметр Х, для каждого столбца
{
	Ziro_Mass_X();

	for (int i = 0; i < n+1; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (mass[j][i] < 0)
			{
				//cout << mass[j][i];
				mass_X[i] += abs(mass[j][i]);
				//cout << "mass_X[" << i << "] = " << mass_X[i] << endl;
			}
		}
	}
}

void Fill_and_Print_Mass() // Основная процедура вывода матрицы, с заполнением её рандомными числами
{
	for (int i = 0; i < n; i++)
	{
		cout << "[";
		for (int j = 0; j < n - 1; j++)
		{
			f_fill(i, j);
			f_output(i, j);
			//cout << " " << mass[i][j] << "" << ",";
		}
		//mass[i][n-1] = rand() % 20;
		cout << " ";
		f_fill(i, n-1);
		f_output(i, n - 1);
		//cout << mass[i][n - 1];
		cout << "]" << endl;
	}
	cout << "________________________________" << endl;

	cout << "X=";

	X_Mass_Count();

	for (int i = 0; i < n; i++)
	{
		cout << "  " << mass_X[i] << "  ";
	}

	cout << endl;
	cout << "Параметр Х - это сумма модулей всех отрицательных чисел в столбце" << endl;

}

void Prints_Mass() // Основная процедура вывода матрицы
{
	for (int i = 0; i < n; i++)
	{
		cout << "[";
		for (int j = 0; j < n - 1; j++)
		{
			//f_fill(i, j);
			f_output(i, j);
			//cout << " " << mass[i][j] << "" << ",";
		}
		//mass[i][n-1] = rand() % 20;
		cout << " ";
		//f_fill(i, n - 1);
		f_output(i, n - 1);
		//cout << mass[i][n - 1];
		cout << "]" << endl;
	}
	cout << "________________________________" << endl;

	cout << "X=";

	X_Mass_Count();

	for (int i = 0; i < n; i++)
	{
		cout << "  " << mass_X[i] << "  ";
	}

	cout << endl;
	cout << "Параметр Х - это сумма модулей всех отрицательных чисел в столбце" << endl;

}

void print_Mass_X() // Печатаем массив со значеними параметра Х
{
	cout << "X=";

	for (int i = 0; i < n; i++)
	{
		cout << "  " << mass_X[i] << "  ";
	}

	cout << endl;
}

void Swat_two_colum(int i) // Свапем(меняем местами) 2 столбца у матрицы, поэлементно
{
	int buf;

	for (int j = 0; j < n; j++)
	{
		//cout << "mass[i][j] = " << mass[i][j] << endl;
		//cout << "mass[j][i] = " << mass[j][i] << endl;
		
		buf = mass[j][i];
		mass[j][i] = mass[j][i + 1];
		mass[j][i + 1] = buf;
	}
}

void SummMass() // Считаем сумму каждого столбца
{
	for (int i = 0; i < n; i++)
	{
		mass_sum[i] = 0;
	}

	for (int i = 0; i < n + 1; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (mass_X[i] != 0)
			{
				mass_sum[i] += (mass[j][i]);
			}
		}
	}
}

void print_Mass_sum() // Выводим сумму каждого столбца
{
	cout << "  ";

	for (int i = 0; i < n; i++)
	{
		if (mass_sum[i] != 0)
		{
			cout << "  " << mass_sum[i] << "  ";
		}
		else
		{
			cout << "  No  ";
		}
	}

	cout << " = Sum" << endl;
	cout << "Sum - это сумма столбца, если в нём есть хотя бы один отрицательный элемент (если нет, выводится 'No')" << endl;
}

void swapColumn() // Главная процедура для расположения столбцов матрицы в порядке возрастания
{
	cout << "Теперь переставим эти стоблцы, в порядке возрастания их характеристики Х: " << endl;
	cout << endl;

	int y = 0;
	while (y < n)
	{
		if (mass_X[y-1] > mass_X[y])
		{
			cout << mass_X[y-1] << " > " << mass_X[y] << endl;
			
			Swat_two_colum(y-1);
			
			X_Mass_Count();
			print_Mass_X();
			cout << endl;
			y = 0;
		}
		y++;
	}

	//Print_Mass();
	cout << endl;
	Prints_Mass();
	SummMass();
	print_Mass_sum();
}

void main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));

	//cout << "f = " << Count_Length(-14) << endl;

	for (int i = 0; i < n; i++)
	{
		mass_X[n] = 0;
	}

	cout << "Создадим и заполним матрицу значений." << endl;

	cout << "Выводим двумерный массив, из [" << n << "] на [" << n << "] элементов:" << endl;
	cout << endl;

	Fill_and_Print_Mass();
	swapColumn();
}