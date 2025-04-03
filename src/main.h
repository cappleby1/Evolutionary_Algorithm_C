
#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

// Functions
void menu();

// Variables
extern int POLYGON_COUNT, generations, pop_size;
extern unsigned char* target_image_data;
extern long seed;
extern int MAX = 255 * 200 * 200;
extern string image;
extern string seed_option;

#endif //MAIN_H
