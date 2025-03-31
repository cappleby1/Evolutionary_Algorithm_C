#define STB_IMAGE_IMPLEMENTATION

#include "stb_image.h"
#include "main.h"

// Create main menu
void menu(){

  cout<<"Set generation amount: "<<endl;
  cin >> generations;

  cout<<"Set population size: "<<endl;
  cin >> pop_size;

  cout<<"Do you want to use a random seed? (yes/no) "<<endl;
  cin >> seed_option;

  if (seed_option=="yes")
  {
    seed = time(0);
  }
  else
  {
    seed = 35;
  }


  cout << "Enter image name: "<<endl;
  cin >> image;

 // Set target image
  if (image == "8a.png")
  {
    image_path = "8a.png";
  }
  else if (image == "8b.png")
  {
    image_path = "8b.png";
  }
  else if (image == "8c.png")
  {
    image_path = "8c.png";
  }
  else
  {
    cout << "Invalid image! Please try again!" << endl;
    menu();
  }
  target = stbi_load(image_path, &width, &height, &channels, 0);

}



int main()
{
  menu();
}