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
#include "utf8.h"

using namespace std;

void rast(int rast){
  for (int i = 0; i < rast; i++){
    cout << " ";
  }
}

int main(void){
  string text;
  getline(cin, text);
  cout << text + "\n";
  cout << " ";
  int dist = utf8::distance(text.begin(), text.end());
  for (int i = 0; i < dist; i++){
    cout << "-";
  }
  cout << endl;
  cout << "/";
  for (int i = 0; i < dist; i++){
    cout << " ";
  }
  cout << "\\" << endl;
  cout << "|" << text << "|" << endl;
  cout << "\\";
  for (int i = 0; i < dist; i++){
    cout << " ";
  }
  cout << "/" << endl << " ";
  for (int i = 0; i < dist; i++){
    cout << "-";
  }
  cout << endl;
  for (int i = 1; i < dist; i++){
    cout << " ";
  }
  cout << "\\/" << endl;
  rast(dist);
  cout << " -----" << endl;
  rast(dist);
  cout << "/ - - \\" << endl;
  rast(dist);
  cout << "\\  -  /" << endl;
  rast(dist);
  cout << " -----" << endl;
  rast(dist);
  cout << "  |  " << endl;
  rast(dist);
  cout << " /|\\" << endl;
  rast(dist);
  cout << "/ | \\" << endl;
  rast(dist);
  cout << " / \\" << endl;
  rast(dist);
  cout << "/   \\" << endl; 
}

