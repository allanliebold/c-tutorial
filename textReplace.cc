#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string s = "C++ is fun to learn.";
  replace(s.begin(), s.end(), 'fun', 'very fun');
  cout << s << endl; // prints "C++ is very fun to learn."
  
  string spot = "Spot Spot Run.";
  replace(spot.begin(), spot.end(), 'Spot', 'See Spot');
  cout << spot << endl; // prints "See Spot See Spot Run."
  return 0;
}
