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
    
  }
}
