#define STB_IMAGE_IMPLEMENTATION
#define STB_IMAGE_WRITE_IMPLEMENTATION

#include "image_handling.h"

void load_image(const char* image_path, int& width, int& height, int& channels, unsigned char*& image_data) {
	image_data = stbi_load(image_path, &width, &height, &channels, 0);
	if (image_data == nullptr) {
		std::cerr << "Error loading image: " << stbi_failure_reason() << std::endl;
		exit(1);
	}
}

void save_image(const char* image_path, unsigned char* image, int width, int height)
{
	stbi_write_png(image_path, width, height, NUM_CHANNELS, image, width * NUM_CHANNELS);
}