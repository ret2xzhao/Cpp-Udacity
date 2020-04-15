#include<iostream>
using namespace std;

//C++ allows us to 'overload' the same function name as long as
//the variable types in the function inputs are different.

class Compare{
public:
    int findSmaller(int input1, int input2);
    float findSmaller(float input1, float input2);
    char findSmaller(char input1, char input2);
    int findSmaller(int input1, int input2, int input3);
    float findSmaller(float input1, float input2, float input3);
    char findSmaller(char input1, char input2, char input3);
    int findSmaller(int array[], int length);
    float findSmaller(float array[], int length);
    char findSmaller(char array[], int length);
};

int Compare::findSmaller(int input1, int input2){
    if(input1<input2)
        return input1;
    return input2;
}

float Compare::findSmaller(float input1, float input2){
    if(input1<input2)
        return input1;
    return input2;
}

char Compare::findSmaller(char input1, char input2){
    if(input1<input2)
        return input1;
    return input2;
}

int Compare::findSmaller(int input1, int input2, int input3){
    if((input1<input2)&&(input1<input3)){
        return input1;
    }
    else if((input2<input1)&&(input2<input3)){
        return input2;
    }
    else{
        return input3;
    }
}

float Compare::findSmaller(float input1, float input2, float input3){
    if((input1<input2)&&(input1<input3)){
        return input1;
    }
    else if((input2<input1)&&(input2<input3)){
        return input2;
    }
    else{
        return input3;
    }
}

char Compare::findSmaller(char input1, char input2, char input3){
    if((input1<input2)&&(input1<input3)){
        return input1;
    }
    else if((input2<input1)&&(input2<input3)){
        return input2;
    }
    else{
        return input3;
    }
}

int Compare::findSmaller(int array[], int length){
    int small = array[0];
    for(int i=0; i<length; i++){
        if(small >= array[i]){
            small = array[i];
        }
    }
    return small;
}

float Compare::findSmaller(float array[], int length){
    float small = array[0];
    for(int i=0; i<length; i++){
        if(small >= array[i]){
            small = array[i];
        }
    }
    return small;
}

char Compare::findSmaller(char array[], int length){
    char small = array[0];
    for(int i=0; i<length; i++){
        if(small >= array[i]){
            small = array[i];
        }
    }
    return small;
}