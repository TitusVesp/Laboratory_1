// Laboratory_1.cpp : Рябов Кирило 
//

#include <iostream>
#include "Lab1.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "ukr");

	int key = 0;

	int* pkey = &key;

	int* ppkey = pkey;

	*ppkey = 6;

	cout << key;
/*
	while (1)
	{
		system("CLS");

		cout << "Перша задача: 1;\nДруга задача: 2;\nВийти: 9" << endl;

		cin >> key;

		switch (key)
		{
		case 1:

			break;
		case 2:

			break;
		default:
			cout << "Введене некоректне значення!" << endl;
			break;
		}
		system("pause");
	}*/
}

