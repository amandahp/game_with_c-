#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstdlib>


using namespace std;

void clearScreen(){
  system("clear");
}

void initialMenu(){
  int options = 0;

  while (options < 1 || options > 3){
    clearScreen();
    cout << "Welcome to the Game" <<endl;
    cout << "1 - Play" <<endl;
    cout << "2 - About" <<endl;
    cout << "3 - Left" <<endl;
    cout <<"Choice one option and press ENTER: " <<endl;

    cin >> options;

    switch(options){
      case 1:
          cout <<"Game Started" <<endl;
          break;
      case 2:
          cout <<"About the game" <<endl;
          break;
      case 3:
          cout <<"See you!" <<endl;
          break;
    }
  }
}

int main(){
  initialMenu();
  return 0;
}

