#include "main.h"
#include "image_handling.h"

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
    image_path = "..\Images\8a.png";
  }
  else if (image == "8b.png")
  {
    image_path = "..\Images\8b.png";
  }
  else if (image == "8c.png")
  {
    image_path = "..\Images\8c.png";
  }
  else
  {
    cout << "Invalid image! Please try again!" << endl;
    main();
  }
  target = load_image(image_path, target_width, target_height, target_channels);

}



int main()
{
  menu();
}