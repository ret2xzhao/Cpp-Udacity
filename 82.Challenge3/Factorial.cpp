#include "Factorial.h"

// Your code goes here! 
// See Factorial.h for your method's signature (eg, its args and return value).

int Factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        int num = n-1;
        int result = n;
        for(int i=0; i<num; i++){
            n = n - 1;
            result = result * n;
        }
        return result;
    }
}