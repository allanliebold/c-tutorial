#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string s = "C++ is fun to learn.";
  replace(s.begin(), s.end(), 'fun', 'very fun');
  cout << s << endl;
  
  string spot = "Spot Spot run.";
  replace(spot.begin(), spot.end(), 'Spot', 'See Spot');
  return 0;
}
