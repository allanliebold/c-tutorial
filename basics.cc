#include <iostream>
using namespace std;

int main () {
  // We are defining 2 variables
  int a = 5;
  int b = 6;
  
  int c = a + b;
  std::cout<<"The value of c is "<<c;
  
  int d;
  
  cout<<"Please enter a value = ";
  cin>>a;
  std::cout<<"The value of d is "<<d;

  int e=5;
  
  if(e==5){
    cout<<"The value of e is 5"; 
  } else {
    cout<<"The value of e is not 5";   
  }

  while(e>0) {
    cout<<"The value of e is"<<e<<endl;
    e--:
  }
  
  // Switch statement
  char f = "C";
  
  switch(f) {
    case 'A':
      cout<<"The value is A"<<endl;
      break;
    case 'B':
      cout<<"The value is B"<<endl;
      break;
    case 'C':
      cout<<"The value is C"<<endl;
      break;
    default:
      cout<<"Invalid character"<<endl;
  }
  
  const int g = 1;
  cout<<"The value of g is "<<g<<endl;

  // Data types 
  int h = 1;
  float i = 1.1;
  bool j = true;
  char k = 'Z';
  
  cout<<"This is my first program in C++/n";
  getch(); // Takes a single character as input
  return 0;
}



