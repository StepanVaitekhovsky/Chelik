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

#include "functions.h"
#include "poses.h"
#include <string>
#include <iostream>


std::string dist = "";
  
Poses::Poses(int& dist_){
    for (int i = 0; i <= dist_; i++){
      this->dist += " ";
    }
  }

void Poses::list_poses(){
  std::cout << "0 - normal; \n1 - died; \n2 - funny; \n3 - sad; \n4 - suprised; \n5 - suspect. \n";
}
void Poses::normal(){
  Poses::print(" -----");
  Poses::print("/ - - \\");
  Poses::print("\\  -  /");
  Poses::print(" -----");
  Poses::print("  |  ");
  Poses::print(" /|\\");
  Poses::print("/ | \\");
  Poses::print(" / \\ ");
  Poses::print("/   \\"); 
}

void Poses::died(){
  Poses::print(" -----");
  Poses::print("/ X X \\");
  Poses::print("\\  -  /");
  Poses::print(" -----");
  Poses::print("  |  ");
  Poses::print(" /|\\");
  Poses::print("/ | \\");
  Poses::print(" / \\ ");
  Poses::print("/   \\");
}

void Poses::surprised(){
  Poses::print(" -----");
  Poses::print("/ O_O \\");
  Poses::print("\\     /");
  Poses::print(" -----");
  Poses::print("  |  ");
  Poses::print(" /|\\");
  Poses::print("/ | \\");
  Poses::print(" / \\ ");
  Poses::print("/   \\");
}

void Poses::funny(){
  Poses::print(" -----");
  Poses::print("/ ^ ^ \\");
  Poses::print("\\  U  /");
  Poses::print(" -----");
  Poses::print("  |  ");
  Poses::print(" /|\\");
  Poses::print("/ | \\");
  Poses::print(" / \\ ");
  Poses::print("/   \\");
}

void Poses::sad(){
  Poses::print(" -----");
  Poses::print("/ - - \\");
  Poses::print("\\  ~  /");
  Poses::print(" -----");
  Poses::print("  |  ");
  Poses::print(" /|\\");
  Poses::print("/ | \\");
  Poses::print(" / \\ ");
  Poses::print("/   \\");
}

void Poses::suspect(){
  Poses::print(" -----");
  Poses::print("/ _ _ \\");
  Poses::print("\\  -  /");
  Poses::print(" -----");
  Poses::print("  |  ");
  Poses::print(" /|\\");
  Poses::print("/ | \\");
  Poses::print(" / \\ ");
  Poses::print("/   \\");
}

void Poses::print(std::string text){
  std::cout << this->dist << text << std::endl;
}
