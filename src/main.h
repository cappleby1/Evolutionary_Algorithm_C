
#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

// Functions
void menu();

// Variables
int POLYGON_COUNT, width, height, channels, generations, pop_size;
long seed;
int MAX = 255 * 200 * 200;
string image;
string seed_option;
const char* image_path;
unsigned char* target;

#endif //MAIN_H
