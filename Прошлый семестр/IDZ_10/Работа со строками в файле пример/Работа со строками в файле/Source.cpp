///*��������� ����� �������� � ����� text.txt. ���������� ���������� ����� � ���� � ������.*/
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
//	ifstream f;//����� ��� ������.
//	int p, j, i, kol, m, n = 0;
//	string S[10];
//	f.open("text.txt"); //��������� ���� � ������ ������.
//	if(f) //	{//���� �������� ����� ������ ���������, ��
//		while (!f.eof()) //����������� ����, ���������� �����
//							//��������, ����� ����� ��������� ����� �����.
//		{
//			getline(f, S[n]);//������ ���������� �������� �� ������ f � ������ S[n].
//			cout << S[n] << "\n";//����� ������ �� �������
//			n++;//���������� ���������� ��������� �����
//		}
//		f.close();//��������� ����� ��� ������.
//		cout << endl;
//		cout << "���������� ����� � ������ - " << n << endl;
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
//		cout << "���������� ���� � ������ - " << kol << endl;
//	}
//	else cout << "���� �� ������" << endl;
//	return 0;
//}