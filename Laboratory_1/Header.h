#pragma once
#include <iostream>

#include "Lab1.h"
#include "OOP_Menu.h"

using namespace std;

class Init // class for initialization of main menu
{
private:
	Menu menu;
public:
	Init() 
	{
		menu.AddMenuItem("Задача 8(8 Варiант)", Zadacha8_lab1);
		menu.AddMenuItem("Задача 9(8 Варiант)", Zadacha9_lab1);
	}

	void Start()
	{
		menu.ShowMenu();
	}
};