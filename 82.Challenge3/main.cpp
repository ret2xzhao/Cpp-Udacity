#include <iostream>
#include "Factorial.h"
#include "Factorial.cpp"

int main(){
  // feel free to change this test case!
  int value = Factorial(6);
  std::cout << "6! should equal 720. Your Factorial method returned:" 
            << std::endl;
  std::cout << value << std::endl;
}