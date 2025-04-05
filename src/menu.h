#pragma once

#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <string>

using namespace std;

namespace Menu {
	// Functions
	void menu();
	// Variables
	int POLYGON_COUNT, generations, pop_size;
	long seed;
	string image;
	string seed_option;
};

#endif 
