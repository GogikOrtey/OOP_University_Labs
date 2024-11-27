#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

void processingEnumeration(int size, int* mass, int buf, int* sizePosl, int* startPosl, int y, int i)
{
	if (abs(mass[i]) % 2 == 1)								// Если нечётно
	{
		cout << mass[i] << " нечётно" << endl;

		if ((abs(mass[i]) > buf) && (mass[i] != mass[i-1]))							// Если возрастает ///////
		{
			cout << mass[i] << " > " << buf << endl;

			if (sizePosl[y] == 0)	// Если это первое значение нечётной возрастающей цепочки
			{
				cout << mass[i] << " это первое значение нечётной возрастающей цепочки." << endl;
				sizePosl[y]++;
				startPosl[y] = i;	// То мы записываем его индекс, как индекс начала новой нечётной возрасающей цепочки
			}
			else
			{
				cout << mass[i] << " это НЕ первое значение нечётной возрастающей цепочки." << endl;
				sizePosl[y]++;		// И в любом случае увеличиваем размер нашей цепочки на +1
			}
			buf = mass[i];
		}
		else						// Если следующее значение чётно, или если оно не больше предыдущего, то мы
		{
			cout << mass[i] << " нечётно, но не больше предыдущего." << endl;
			y++;					// Переходим в наших двух массивах на запись в следующую ячейку
			buf = -1;				// Обнуляем начальное значение, для корректной работы
		}
	}
	else
	{
		cout << mass[i] << " чётно" << endl;
		y++;
		buf = -1;
	}
}

int main()
{
	/*
	* Не получилось сделать нормальный вывод удалённого массива
	* Наверняка, не получилось сделать нормальное удаление значений, из массива. Надо разобраться с этим.
	*/

	setlocale(LC_ALL, "rus");
	int size;

	cout << "Программа, для вывода самой длинной цепочки нечётных возрастающих чисел" << endl;

	cout << "Введите колличество элементов: ";
	cin >> size;

	int* mass = new int[size];

	cout << "Введите числа: " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> mass[i];
	}

	cout << endl;

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
			cout << mass[i] << " нечётно" << endl;

			if (abs(mass[i]) > buf)								// Если возрастает
			{
				cout << mass[i] << " > " << buf << endl;

				if (sizePosl[y] == 0)	// Если это первое значение нечётной возрастающей цепочки
				{
					cout << mass[i] << " это первое значение нечётной возрастающей цепочки." << endl;
					sizePosl[y]++;
					startPosl[y] = i;	// То мы записываем его индекс, как индекс начала новой нечётной возрасающей цепочки
				}
				else
				{
					cout << mass[i] << " это НЕ первое значение нечётной возрастающей цепочки." << endl;
					sizePosl[y]++;		// И в любом случае увеличиваем размер нашей цепочки на +1
				}
				buf = mass[i];
			}
			else						// Если следующее значение чётно, или если оно не больше предыдущего, то мы
			{
				//cout << mass[i] << " нечётно, но не больше предыдущего." << endl;
				y++;					// Переходим в наших двух массивах на запись в следующую ячейку
				buf = -1;				// Обнуляем начальное значение, для корректной работы
				processingEnumeration(size, mass, buf, sizePosl, startPosl, y, i);  
				
			}
		}
		else
		{
			cout << mass[i] << " чётно" << endl;
			y++;
			buf = -1;
		}

		cout << endl;
	}

	for (int i = 0; i < size; i++)
	{
		cout << "sizePosl[" << i << "] = " << sizePosl[i] << "  startPosl[" << i << "] = " << startPosl[i] << endl;
	}

	int ind = 0;
	cout << endl;

	for (int i = 0; i < size; i++)		// Находим длинну самой длинной нечётной возрасающей цепочки, и записывам её индекс, в наших 2х массивах
	{
		if (sizePosl[i] > sizePosl[ind])
		{
			cout << sizePosl[i] << " > " << sizePosl[ind] << endl;
			ind = i;
		}
	}

	cout << "ind = " << ind << endl;
	cout << "Индекс начала последовательности макимальной длинны: " << startPosl[ind] << endl;

	cout << endl;

	if (sizePosl[ind] <= 0)				// Если максимальная длинна нашей нечётной возрасающей цепочки == 0, то значит её не существует
	{
		cout << "Такой последовательности нет" << endl;
	}
	else
	{
		cout << "sizePosl[" << ind << "] = " << sizePosl[ind] << "  startPosl[" << ind << "] = " << startPosl[ind] << endl;
		cout << endl;

		cout << "Выводим наибольшую возрастающую последовательность из нечётных чисел: " << endl;

		for (int i = startPosl[ind]; i < startPosl[ind] + sizePosl[ind]; i++) // Мы идём от индекса начала нашей последовательности, до этого индекса + её длинны
		{
			cout << mass[i] << endl;
		}

		cout << endl;
		cout << "Теперь удалим её их исходного массива: " << endl;

		int newSize = size;
		int thisAverySize = 0;

		cout << "size = " << size << endl;

		for (int r = 0; r < size; r++) cout << "mass[" << r << "] = " << mass[r] << endl;
		cout << endl;

		for (int i = startPosl[ind]; i < startPosl[ind] + sizePosl[ind] - 1 ; i++)
		{
			
			for (int j = i; j < size; j++) // Каждое значение подвигаем на 1 влево, затирая наше удаляемое значение
			{
				mass[j] = mass[j + 1];
			}
			
			//mass[i] = mass[i+1];
			newSize--; // Уменьшаем размер нашего массива на -1
			thisAverySize++;
			for (int r = 0; r < size; r++) cout << "mass[" << r << "] = " << mass[r] << endl;
			cout << endl;
		}
		//mass[startPosl[ind] + sizePosl[ind]]

		// 		for (int j = (mass[startPosl[ind]] + sizePosl[ind]) - 1; j < size; j++) 

		//cout << "___" << endl;


		//cout << "startPosl[ind] = " << startPosl[ind] << endl;

		for (int j = startPosl[ind]; j < size; j++)
		{
			//cout << "j = " << j << endl;
			mass[j] = mass[j + 1];
		}
		newSize--;

		for (int r = 0; r < size; r++) cout << "mass[" << r << "] = " << mass[r] << endl;
		cout << endl;

		for (int i = 0; i < 100; i++)
		{
			cout << "_";
		}

		cout << endl;
		cout << endl;

		cout << "Выводим новый массив: " << endl;

		for (int i = 0; i < newSize; i++)
		{
			cout << mass[i] << endl;
		}

		if (newSize == 0)
		{
			cout << "[Массив пуст]" << endl;
		}

		/*
		cout << "Выводим новый массив: " << endl;

		for (int i = thisAverySize; i < size; i++) // Нет, это не работает.
		{
			cout << mass[i] << endl;
		}

		if (thisAverySize == size)
		{
			cout << "[Массив пуст]" << endl;
		}
		*/
	}

	delete(mass);
	delete(startPosl);
	delete(sizePosl);
}