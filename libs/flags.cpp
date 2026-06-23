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
 
#include <iostream>
#include <string>
#include <cstring>
#include <ctime>
#include "flags.h"

Args parse_args(int argc, char* argv[]){
  Args result;
  std::srand(std::time(0));
  for (int i = 1; i < argc; ++i){
    std::string arg = argv[i];

    if (arg == "--help" | arg == "-h"){
      result.show_help = true;
      return result;
    }
    else if (arg == "-ls" | arg == "--list-poses"){
      result.list_poses = true;
      return result;
    }
    else if (arg == "-c" | arg == "--color"){
      result.color = argv[++i];
    }
    else if (arg == "-p" | arg == "--pose"){
      result.pose = std::stoi(argv[++i]);
    }
    else if (arg == "-r" | arg == "--random"){
      result.pose = std::rand() % 6;
    }
    else{
      if (!result.message.empty()){
	result.message += " ";
      }
      result.message += arg; 
    }
  }
  return result;
}
