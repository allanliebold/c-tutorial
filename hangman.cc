#include<iostream>
#include<conio.h>
#include<cstring>

using namespace std;

int main() {
  int lives=0;
  char letter;
  int none;
  char wordToGuess[50]={0};
  char guessedWord[50]={0};
  
  cout<<"Type out a word to play Hangman: "<<endl;
  cin>>wordToGuess;
  
  while (lives <=5 && strcmp(guessedWord, wordToGuess) != 0) {
    none=0;
    cout<<endl<<"Please guess a letter: ";
    cin>>letter;
    
    for(int n=0; n<50; n++) {
      if(wordToGuess[n] == letter) {
        guessedWord[n] = wordToGuess[n];
        none=1;
      }
      if(none<1) {
        lives = lives + 1;
        cout<<"Try again!"<<endl;
      }
      
      if(lives > 5) {
        cout<<endl"You lose!";
      } else {
        cout<<endl<<"You win!";
      }
      
      getch();
      
      return 0;
      
    }
  }
}
