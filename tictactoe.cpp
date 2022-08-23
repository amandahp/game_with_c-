#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstdlib>


using namespace std;

void clearScreen(){
  system("clear");
}

string returnRandomWord(){
  string words[3] = {"Apple", "Pineapple", "Orange"};

  int randomIndex = rand() % 3;

  return words[randomIndex];

}

string returnWordWithMask(string word, int lenthWord) {
  int count = 0;
  string wordWithMask; 

  while(count < lenthWord ){
    wordWithMask += " _ ";
    count++;
  }

  return wordWithMask;
}

void playAlone(){

  string word = returnRandomWord();

  int lenthWord = word.size();

  string wordWithMask = returnWordWithMask(word, lenthWord);


  cout << "The secret word is: " << word << " Size word: " << lenthWord;
  cout << " Mask" << wordWithMask;

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
          playAlone();
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

  srand( (unsigned)time(NULL));
  initialMenu();
  return 0;
}

