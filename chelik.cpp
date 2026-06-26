/*
 * Chelik - аналог cowsay для русскоязычных хакеров.
 * Copyright (C) 2026  Stepan Vaitekhovsky
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include <stdexcept>
#include <iostream>
#include <string>
#include "utf8.h"
#include "libs/poses.h"
#include "libs/functions.h"
#include "libs/flags.h"
#include "libs/colors.h"

int main(int argc, char* argv[]){
  std::string text;
  Args args = parse_args(argc, argv);
  if (args.show_help){
    show_help();
    return 0;
  }
  
  int dist = utf8::distance(args.message.begin(), args.message.end());
  Poses poses(dist);
  
  if (args.list_poses){
    poses.list_poses();
    return 0;
  }
  if(!(Colors::is_valid_color(args.color))){
    std::cerr << "Error: invalid color" << std::endl;
    return 0;
  }

  if(args.pose > 5){
    std::cerr << "Error: invalid pose" << std::endl;
    return 0;
  }
  
  Colors::color_parser(args.color);
  std::cout << " ";
  some_print(0, dist, "-");
  std::cout << std::endl;
  std::cout << "/";
  some_print(0, dist, " ");
  std::cout << "\\" << std::endl;
  std::cout << "|" << args.message << "|" << std::endl;
  std::cout << "\\";
  some_print(0, dist, " ");  
  std::cout << "/" << std::endl << " ";
  some_print(0, dist, "-");
  std::cout << std::endl;
  some_print(1, dist, " ");
  std::cout << "\\/" << std::endl;
  switch (args.pose){
  case 0:
    poses.normal();
    break;
  case 1:
    poses.died();
    break;
  case 2:
    poses.funny();
    break;
  case 3:
    poses.sad();
    break;
  case 4:
    poses.surprised();
    break;
  case 5:
    poses.suspect();
    break;
  }
  Colors::resume_color();
  return 0;
}

