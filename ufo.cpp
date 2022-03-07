#include <iostream>
#include "ufo_functions.hpp"

using namespace std;

int main() {
  string codeword = "codeacademy";
  string answer = "__________";
  vector<char> incorrect;
  int misses = 0;
  bool guess = false;
  char letter;

  greet();

  while(answer != codeword && misses < 7){
    
    display_status(incorrect,answer);
    
    cout << "Please enter your guess: ";
    cin >> letter;

    for (int i = 0; i < codeword.length(); i++){
      if(codeword[i] == letter){
        	answer[i] = letter;
          guess = true;
      }
    }

    if(guess){
      cout << "Correct!";
    } 
    else {
      cout << "Incorrect! The tractor beam pulls the person in further. \n";
      incorrect.push_back(letter);
      misses++;
    }
    display_misses(misses);
    guess = false;
   
  }

  end_game(answer,codeword);


}
