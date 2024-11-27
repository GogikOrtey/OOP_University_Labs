#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <iomanip>
#include <string>
#include <Windows.h>

using namespace std;

void maind(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ifstream f;
	f.open("text.txt");

	int n = 0;

	char letter;
	while (!f.eof())
	{
		letter = f.get();
		//cout << letter;
		n++;
	}
	cout << "Длинна файла = " << n << endl;
}


void maino()
{
	fstream f("text.txt", fstream::in | fstream::out); // Открываем файл в режиме чтения и записи одновременно

	if (f.is_open()) // Если файл открылся
	{
		while (!f.eof()) 
		{
			if (f.get() == ' ') // Ищем пробелы (.get берёт по 1 символу из файла)
			{
				f.seekp((f.tellp() - static_cast<streampos>(1))); // Ставим курсор на позицию, где пробел
				f.put('!'); // Вставляем символ на место курсора
				f.seekp(f.tellp());
			}
		}
		f.close();
	}
	else 
	{
		cout << "Faild to open" << '\n';
	}
}

void main0()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ifstream f;
	f.open("text.txt"); // Открываем файл для чтения

	if (f)
	{
		f.seekg(0, ios::beg); //  Идём в начало 

		string a;
		char r;
		
		int n = 0;
		char letter;

		while (!f.eof())
		{
			letter = f.get();
			//cout << letter; // Выводим файл по срокам
			n++; // Сичтаем длинну всего файла, в символах
		}
		cout << "Длинна файла = " << n << endl;
		cout << endl;

		int* mass = new int[n]; // Создаём массив с максимально возможным запасом, так как весь текст может состоять из пробелов

		for (int i = 0; i < n; i++)
		{
			mass[i] = -1; // Обнуляем его
		}

		int an = 0; // Указатель на место записи места пробла в тексте, в наш массив (mass)

		f.close();
		f.open("text.txt");
		f.seekg(0, ios::beg); //  Идём в начало 
		

		for (int i = 0; i<n; i++)
		{
			f.get(r);

			if (r == ' ')
			{
				cout << "Пробел на месте " << f.tellg() << endl;
				mass[an] = f.tellg();
				an++;
			}

			cout << r << endl;
			//f.seekg(1, ios::cur);
		}
		
		
		for (int i = 0; i < n; i++)
		{
			cout << mass[i] << "," << endl;
		}
	}

	f.close();
	ifstream output_file("text.txt", ios::app); // Открываем файл для записи

	if (f)
	{

	}

}

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ifstream f;
	int p, j, i, kol, m, n = 0;
	string S[10];
	f.open("text.txt"); 
	if (f)
	{
		while (!f.eof())
		{
			getline(f, S[n]);
			cout << S[n] << "\n";
			n++;
		}
		f.close();
		cout << endl;
		//cout << "Количество строк в тексте - " << n << endl;
		/*


		for (kol = 0, i = 0; i < n; i++)
		{
			m = S[i].length();
			S[i] += " ";
			for (p = 0; p < m; )
			{
				j = S[i].find(" ", p);
				if (j != 0)
				{
					kol++;
					p = j + 1;
					cout << "Пробел на месте: " << f.tellg() << endl;

				}
				else break;
			}
		}

		cout << "Количество слов в тексте - " << kol << endl;
	}
	else cout << "Файл не найден" << endl;
	*/
	//return 0;
	}
}
