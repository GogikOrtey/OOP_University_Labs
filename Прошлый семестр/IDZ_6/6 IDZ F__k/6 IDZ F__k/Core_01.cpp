/*
#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

int main()
{
	/*
	* Чётное значение, идущие после цепочки удаления, не выводит
	* Инногда выводит какие-то симовлы, в середине удалённой цепочки
	*/
/*

	setlocale(LC_ALL, "rus");
	int size;

	cout << "Введите колличество элементов: ";
	cin >> size;

	int* mass = new int[size];

	cout << "Введите числа: " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> mass[i];
	}

	int* startPosl = new int[size]; // Создаю массив, для хранения началных позиций всех возрастающих нечётных цепочек, которые найду
	int* sizePosl = new int[size];  // Создаю массив, для хранения длинн всех этих цепочек
	int buf = -1;
	int y = 0;						// у - это будет бегунок, для этих двух массивов

	for (int i = 0; i < size; i++)
	{
		startPosl[i] = 0;
		sizePosl[i] = 0;
	}

	for (int i = 0; i < size; i++)
	{
		if (abs(mass[i]) % 2 == 1)								// Если нечётно
		{
			//cout << mass[i] << " нечётно" << endl;

			if (abs(mass[i]) > buf)								// Если возрастает
			{
				//cout << mass[i] << " > " << buf << endl;

				if (sizePosl[y] == 0)	// Если это первое значение нечётной возрастающей цепочки
				{
					sizePosl[y]++;
					startPosl[y] = i;	// То мы записываем его индекс, как индекс начала новой нечётной возрасающей цепочки
				}
				else
				{
					sizePosl[y]++;		// И в любом случае увеличиваем размер нашей цепочки на +1
				}
				buf = mass[i];
			}
			else						// Если следующее значение чётно, или если оно не больше предыдущего, то мы
			{
				y++;					// Переходим в наших двух массивах на запись в следующую ячейку
				buf = -1;				// Обнуляем начальное значение, для корректной работы
			}
		}
		else
		{
			y++;
			buf = -1;
		}
	}

	for (int i = 0; i < size; i++)
	{
		//cout << "sizePosl[" << i << "] = " << sizePosl[i] << "  startPosl[" << i << "] = " << startPosl[i] << endl;
	}

	int ind = 0;

	for (int i = 0; i < size; i++)		// Находим длинну самой длинной нечётной возрасающей цепочки, и записывам её индекс, в наших 2х массивах
	{
		if (sizePosl[i] > sizePosl[ind])
		{
			//cout << sizePosl[i] << " > " << sizePosl[ind] << endl;
			ind = i;
		}
	}

	//cout << "Индекс начала последовательности макимальной длинны: " << startPosl[ind] << endl;

	cout << endl;

	if (sizePosl[ind] <= 1)				// Если максимальная длинна нашей нечётной возрасающей цепочки == 0, то значит её не существует
	{
		cout << "Такой последовательности нет" << endl;
	}
	else
	{
		//cout << "sizePosl[" << ind << "] = " << sizePosl[ind] << "  startPosl[" << ind << "] = " << startPosl[ind] << endl;

		cout << "Выводим наибольшую возрастающую последовательность из нечётных чисел: " << endl;

		for (int i = startPosl[ind]; i < startPosl[ind] + sizePosl[ind]; i++) // Мы идём от индекса начала нашей последовательности, до этого индекса + её длинны
		{
			cout << mass[i] << endl;
		}

		cout << endl;
		cout << "Теперь удалим её их исходного массива: " << endl;

		int newSize = size;

		for (int i = startPosl[ind]; i < startPosl[ind] + sizePosl[ind]; i++)
		{
			for (int j = i; j < size-1; j++) // Каждое значение подвигаем на 1 влево, затирая наше удаляемое значение
			{
				mass[j] = mass[j + 1];
			}
			newSize--; // Уменьшаем размер нашего массива на -1
		}

		cout << "Выводим новый массив: " << endl;

		for (int i = 0; i < newSize; i++)
		{
			cout << mass[i] << endl;
		}

		if (newSize == 0)
		{
			cout << "[Массив пуст]" << endl;
		}
	}
	
	delete(mass);
	delete(startPosl);
	delete(sizePosl);
}
*/