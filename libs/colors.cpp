#include <string>
#include "colors.h"
#include <iostream>

void Colors::color_parser(std::string select){
  std::string dark_red = "\033[31m";
  std::string dark_blue = "\033[34m";
  std::string dark_green = "\033[32m";
  std::string white = "\033[97m";
  std::string yellow = "\033[33m";
  std::string dark_purple = "\033[35m";
  std::string orange = "\033[93m";
  std::string green = "\033[92m";
  std::string red = "\033[91m";
  std::string blue = "\033[94m";
  std::string purple = "\033[95m";
  
  if (select == "red") std::cout << red;
  else if (select == "dark-red") std::cout << dark_red;
  else if (select == "blue") std::cout << blue;
  else if (select == "dark-blue") std::cout << dark_blue;
  else if (select == "green") std::cout << green;
  else if (select == "dark-green") std::cout << dark_green;
  else if (select == "purple") std::cout << purple;
  else if (select == "dark-purple") std::cout << dark_purple;
  else if (select == "white") std::cout << white;
  else if (select == "yellow") std::cout << yellow;
  else if (select == "orange")  std::cout << orange;
  }

void Colors::resume_color(){
  std::cout << "\033[0m";
}

