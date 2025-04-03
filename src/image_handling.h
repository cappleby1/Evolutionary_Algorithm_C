#pragma once

#ifndef IMAGE_HANDLING_H
#define IMAGE_HANDLING_H


#include "stb_image.h"
#include "stb_image_write.h"


#include <iostream>

//Functions
void load_image(const char* image_path, int& width, int& height, int& channels, unsigned char*& image_data);
void save_image(const char* filename, unsigned char* image, int width, int height);

// Variables
const char* image_path; 
unsigned char* target;


const int IMAGE_WIDTH = 256;
const int IMAGE_HEIGHT = 256;
const int NUM_CHANNELS = 3;

#endif