#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;
//create class menu
class MenuItem
{
public:
	string title;
	void (*proc)() = 0;

	MenuItem(string aTitle, void (*procLink)()) : title(aTitle), proc(procLink) {}
	MenuItem() { title = ""; }

};

class Menu : public MenuItem
{
private:
	string menuTitle;
	vector<MenuItem> menuItems;

	void GetMenuView();
public:

	// Constructors
	Menu()
	{
		menuTitle = "Main menu";
	}
	Menu(string menuTitle)
	{
		this->menuTitle = menuTitle;
	}

	// Interface method
	void AddMenuItem(string itemTitle, void (*procLink)());
	void ShowMenu();
};

