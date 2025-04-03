#pragma once

#ifndef IMAGE_HANDLING_H
#define IMAGE_HANDLING_H

#include "../build/_deps/stb-src/stb_image.h"
#include "../build/_deps/stb-src/stb_image_write.h"

#include <iostream>

// Variables
extern const char* image_path; 
extern unsigned char* target;
extern int target_width, target_height, target_channels;  

extern const int IMAGE_WIDTH = 256;
extern const int IMAGE_HEIGHT = 256;
extern const int NUM_CHANNELS = 3;

//Functions
void load_image(const char* image_path, int& width, int& height, int& channels, unsigned char*& image_data);
void save_image(const char* filename, unsigned char* image, int width, int height);

#endif 
