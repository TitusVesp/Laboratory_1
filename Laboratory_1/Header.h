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
		menu.AddMenuItem("������ 8(8 ���i���)", Zadacha8_lab1);
		menu.AddMenuItem("������ 9(8 ���i���)", Zadacha9_lab1);
	}

	void Start()
	{
		menu.ShowMenu();
	}
};