@include <iostream>

using namespace std;

int main()
{
  // Game introduction
  constexpr int WORD_LENGTH = 5;
  cout << "Welcome" << endl;
  cout << "Can you guess the " << WORD_LENGTH;
  cout << " letter isogram?\n";
  
  // Get a guess from the player
  cout << "Enter your guess: ";
  string Guess = "";
  cin >> Guess;
  
  cout << "You guessed: " << Guess << endl;
  return 0;
}
