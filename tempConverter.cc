#include <iostream>
#include <conio.h>

using namespace.std; 

int main()
{
  float c, f;
  
  cout<<"Enter the degrees in Celsius: "<<endl;
  
  cin>>c;
  f=c*1.8+32;
  
  cout<<"The temperature in Fahrenheit is "<<f;
  getch();
  
  return 0;
}
