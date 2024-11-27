#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <iomanip>
#include <string>
#include <Windows.h>

using namespace std;

void main11()
{
	setlocale(LC_ALL, "rus");
	fstream f("text.txt", fstream::in | fstream::out); // Открываем файл в режиме чтения и записи одновременно

	if (f.is_open()) // Если файл открылся
	{
		while (!f.eof())
		{
			if (f.get() == ' ') // Ищем пробелы (.get берёт по 1 символу из файла)
			{
				f.seekp((f.tellp() - static_cast<streampos>(1))); // Ставим курсор на позицию, где пробел static_cast dinamic_cast рассказать
				f.put('!'); // Вставляем символ на место курсора
				f.seekp(f.tellp());
			}
		}

		cout << "Все пробелы в файле успешно заменены на восклицательные знаки!" << endl;
		f.close();
	}
	else
	{
		cout << "Не удалось открыть файл" << '\n';
	}
}