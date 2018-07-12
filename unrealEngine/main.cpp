@include <iostream>

using namespace std;

int main()
{
  constexpr int WORD_LENGTH = 5;
  cout << "Welcome" << endl;
  cout << "Can you guess the " << WORD_LENGTH;
  cout << " letter isogram?\n";
  return 0;
}
