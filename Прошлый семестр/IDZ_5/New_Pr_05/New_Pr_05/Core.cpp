#include <iostream>
#include <cmath>
using namespace std;

string h_stNedv;
string h_timeKred;
string h_sum1vzn;
string Name;

int const l_mass = 100;
char mass_StNedv[l_mass];

void f_2()
{
	cout << "Введите Стоимость Недвижимости (в тыс. руб.): " << endl;
	gets_s(mass_StNedv);
}

void outText()
{
	cout << "Введите имя: ";
	cin >> Name;

	cout << "Введите Срок кредитования (в мес.): " << endl;
	cin >> h_timeKred;
	cout << endl;

	cout << "Введите Сумму первоначального взноса (в тыс. руб.): (если число не целое, то используйте точку (не запятую), в качестве разделителя)" << endl;
	cin >> h_sum1vzn;
	cout << endl;
}

void main()
{
	setlocale(LC_ALL, "Russian");

	float stNedv;
	float timeKred;
	float sum1vzn;

	for (int i = 0; i < l_mass; i++)
	{
		mass_StNedv[i] = 0;
	}
	cout << mass_StNedv << endl;

	bool isAllNumberCorrect = false;

	while (isAllNumberCorrect == false)
	{
		f_2();
		outText();

		isAllNumberCorrect = true;
		for (int i = 0; i < 100; i++)
		{
			
			
			if ((mass_StNedv[i] < 48) or (mass_StNedv[i] > 57))
			{
				if (mass_StNedv[i] == '\0')
				{
					break;
				}
				isAllNumberCorrect = false;
				//cout << mass_StNedv[i] << " ";
				break;
			}
			
		}

		for (int i = 0; i < h_timeKred.length(); i++)
		{
			if ((h_timeKred[i] < 48) or (h_timeKred[i] > 57))
			{
				isAllNumberCorrect = false;
				break;
			}
		}

		for (int i = 0; i < h_sum1vzn.length(); i++)
		{
			if (((h_sum1vzn[i] < 48) or (h_sum1vzn[i] > 57)) and (h_sum1vzn[i] != 46)) // Записываем только через точку 
			{
				isAllNumberCorrect = false;
				break;
			}
		}

		if (isAllNumberCorrect == false)
		{
			cout << "Вы ввели некорректные данные. Пожалуйста, введите их заново, но не ошибайтесь)" << endl;
		}
	}

	//cout << isAllNumberCorrect << endl;

	stNedv = atoi(mass_StNedv);
	timeKred = atoi(h_timeKred.c_str());
	sum1vzn = atoi(h_sum1vzn.c_str());
	
	float pr_zn = ((stNedv - sum1vzn) / stNedv);
	float Procent_Prv_Vzn = (1 - pr_zn); // Не в процентах, а в % / 100

	//cout << (1 - pr_zn) * 100 << "%" << endl;

	if (stNedv > 0)
	{
		float Procentnaya_stavka = 0; // Не в процентах

		if (Procent_Prv_Vzn >= 0.3)
		{
			Procentnaya_stavka = 0.074;
		}
		else if (Procent_Prv_Vzn >= 0.2)
		{
			Procentnaya_stavka = 0.082;
		}
		else if (Procent_Prv_Vzn >= 0.14) // 14 потому что я округляю проценты. Тут всё правильно.
		{
			Procentnaya_stavka = 0.094;
		}
		else //if (Procent_Prv_Vzn < 0.15)
		{
			Procentnaya_stavka = 0;
			//cout << "отказ" << endl;
		}

		//cout << "Procentnaya_stavka = " << Procentnaya_stavka << endl;

		if (Procentnaya_stavka == 0)
		{
			cout << "Вам отказано в ипотеке. Идите работайте дальше)" << endl;
		}
		else
		{

			float SummKredita = stNedv - sum1vzn; // Если > 0
			if (SummKredita > 0)
			{
				if (timeKred > 0)
				{
					float Mounts_Pay;
					float pr_zn_2 = (SummKredita * Procentnaya_stavka); // / 100;
					Mounts_Pay = (SummKredita / timeKred) + (pr_zn_2 / timeKred);
					cout << "Ваш ежемесячный платёж составит " << Mounts_Pay << " тыс. руб." << endl;
				}
				else
				{
					cout << "Вы не сможете расплатиться с кредитом за такой маленький срок. Перезапустите программу." << endl;
				}
			}
			else
			{
				cout << "Вам не нужна ипотека, вы уже полностью выплатили всю сумму кредита" << endl;
			}
		}
	}
	else
	{
		cout << "Вы не сможете приобрести недвижимость, с минусовой стоимостью. Мы не будем вам доплачивать)" << endl;
	}
}

	