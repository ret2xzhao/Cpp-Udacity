/*Goal: practice writing functions with parameters and return values.*/

#include"main.hpp"

int main(){
    
    int result;
    int m1 = 10;
    int m2 = 20;
    result = sum(m1, m2);
    printEquation(m1, m2, result, '+');
    
    return 0;
}