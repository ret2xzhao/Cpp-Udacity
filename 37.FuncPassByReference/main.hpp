/*The header file for main.cpp*/

#include<iostream>

using namespace std;

void calculate(float input1, float input2, char operation, float &result);
void printEquation(float input1, float input2, char operation, float result);

void calculate(float input1, float input2, char operation, float &result){
    if(operation == '+'){
        result = input1 + input2;
    }
    else if(operation == '-'){
        result = input1 - input2;
    }
    else if(operation == '*'){
        result = input1 * input2;
    }
    else if(operation == '/'){
        result = input1 / input2;
    }
    else{
        cout<<"Invalid character.";
    }
}

void printEquation(float input1, float input2, char operation, float result){
    cout<<input1<<operation<<input2<<" = "<<result;
}