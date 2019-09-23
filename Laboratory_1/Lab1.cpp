#include "Lab1.h"


void Zadacha8_lab1() //Solution of Task 8, Variant 8
{
	cout << "Користувач задає натуральне N. Знайти суму 1/2+1/3+1/5+...+1/p_n , де p_n – n-те просте число,\n\
у виглядi рацiонального дробу." << endl;

	int n = 0, temp = 1, temp2 = 0;
	double res = 0, fib = 2;

	cout << "Ведiть натуральне число N: " << endl;
	cin >> n;

	int nX = n;

	if (n < 2) //check for incorrect value
	{
		cout << "Згiдно умови задачi, ви ввели не коректне значення!" << endl;
		return;
	}

	while (n != 0) //main algorithm of task 8
	{
		temp2 = fib;
		res += 1 /(fib);
		fib += temp;
		temp = temp2;
		n--;
	}

	cout << "Результат операцiї: " << fixed << setprecision(10) << res << endl;
}


void Zadacha9_lab1() //Solution of Task 9, Variant 8
{
	cout << " Дано два натуральних числа a та b. Вивести на екран перiод дробу a/b. " << endl;
	float a = 0, b = 0, temp_res = 0;

	int mb_period = 0, count = 0, temp = 1, real_period = 0;

	cout << "Ведiть натуральне число A: " << endl;
	cin >> a;

	cout << "Ведiть натуральне число B: " << endl;
	cin >> b;

	if (a - (int)a != 0 || b - (int)b != 0)  // check for incorrect value 
	{
		cout << "Некоректне введеня!" << endl;
		return;
	}

    long double res = a / b; 
	res -= (int)res; // transfer from x.xxxx to 0.xxxx

	for (int i = 0; i < 15000; i++) // main algorithm of task 9
	{
		real_period = 0;
		temp_res = res;
		temp = 1;
		count++;
		for (int j = 0; j < count; j++) temp_res *= 10;
		mb_period = (int)temp_res;
		for (int j = 0; j < count; j++) temp *= 10;
		 
		temp_res -= (int)temp_res;
		temp_res *= temp;

		if (i % 7 == 0 && i != 0) //check for limitation of C++ by type double
		{
			count = 0;
			res *= 10;
			res -= (int)res;
			mb_period = 0;
			continue;
		}

		if (mb_period == (int)temp_res) real_period++; //first check of period
		else continue;

		temp_res -= (int)temp_res;
		temp_res *= temp;

		if (mb_period == (int)temp_res) real_period++; //second check for period
		else continue;

		if (real_period == 2) break; // end of algorithm
	}

	cout << "Перiод дробу a/b = " << mb_period << endl;
}

