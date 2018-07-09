#include<time.h>
#include<stdio.h>
#include<string>
#include<iostream>

const std::string ShowCurrentDateTime(){
  time_t now = time(0);
  struct tm struct;
  char buf[80];
  
  strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &struct);
  
  return buf;
}

int main() {
  std::cout<<"ShowCurrentDateTime()="<<ShowCurrentDateTime()<<std::endl;
  getchar();
}
