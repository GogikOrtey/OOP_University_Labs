///*Некоторый текст хранится в файле text.txt. Подсчитать количество строк и слов в тексте.*/
//#include <iostream>
//#include <fstream>
//#include <stdlib.h>
//#include <iomanip>
//#include <string>
//#include <Windows.h>
//using namespace std;
//int main()
//{
//	SetConsoleCP(1251); 
//	SetConsoleOutputCP(1251);
//	ifstream f;//Поток для чтения.
//	int p, j, i, kol, m, n = 0;
//	string S[10];
//	f.open("text.txt"); //Открываем файл в режиме чтения.
//	if(f) //	{//Если открытие файла прошло корректно, то
//		while (!f.eof()) //Организован цикл, выполнение цикла
//							//прервётся, когда будет достигнут конца файла.
//		{
//			getline(f, S[n]);//Чтение очередного значения из потока f в строку S[n].
//			cout << S[n] << "\n";//вывод строки на консоль
//			n++;//Увеличение количества считанных строк
//		}
//		f.close();//Закрываем поток для чтения.
//		cout << endl;
//		cout << "Количество строк в тексте - " << n << endl;
//		for(kol = 0, i = 0; i < n; i++)
//		{
//			m = S[i].length();
//			S[i] += " ";
//			for(p = 0; p < m; )
//			{
//				j = S[i].find(" ", p);
//				if(j != 0) { kol++; p = j + 1; }
//				else break;
//			}
//		}
//		cout << "Количество слов в тексте - " << kol << endl;
//	}
//	else cout << "Файл не найден" << endl;
//	return 0;
//}