#include "PrintString.h"
#include <iostream>
#include <string>
using std::cout;
using std::endl;

void PrintString(std::string str, int n){
  // your code goes here! print str n times. Follow each str with a newline,
  // eg. std::cout << str << std::endl;
  for(int i=0; i<n; i++){
      cout<<str<<endl;
  }
}