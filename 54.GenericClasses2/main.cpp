/*Goal: create a generic class.
**Create a class called Multiplier. 
**It multiplies two numbers - integers
**or floats. */

#include "main.hpp"

int main(){
    Multiplier<int> multi1;
    Multiplier<float> multi2;
    
    int input1,input2;
    cin>>input1;
    cin>>input2;
    
    multi1.setM1(input1);
    multi1.setM2(input2);
    multi1.setProduct();
    multi1.printEquation();
    
    cout<<"\n";
    float input3, input4;
    cin.ignore();
    cin>>input3;
    cin>>input4;    
    multi2.setM1(input3);
    multi2.setM2(input4);
    multi2.setProduct();
    multi2.printEquation();
    return 0;
}