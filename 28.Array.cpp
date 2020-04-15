/*Goal: Practice array manipulation in C++. 
**The user will input 40 integers. 
**Put them into an array. Then print the array in the order the numbers were
**entered. Then print in reverse order. Then sort the array in ascending order 
**and print it. 
**The each print of the array should separate the numbers in the array by
**one space. 
**For example: the array were [3,4,55] the printout would be 3 4 55
*/

// 43 32 21 23 43 98 90 65 53 42 69 79 82 7 1 63 64 90 87 96 4 55 3 7 2 1 67 89 543 567 985 34 975 890 4567 23 33 9 56 345 9865

#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main(){
    int num;
    int userInput[40];
    
    for(int i=0; i<40; i++){
        scanf("%d",&num);
        userInput[i] = num;
    }
    
    cout<<"The array is:\n";
    for(int i=0; i<40; i++){
        cout<<userInput[i]<<" ";
    }
    cout<<"\n\n";
    
    cout<<"The array in reverse order is:\n";
    for(int i=39; i>=0; i--){
        cout<<userInput[i]<<" ";
    }
    cout<<"\n\n";
    
    sort(userInput,userInput+40);
    cout<<"The array in sorted order is:\n";
    for(int i=0; i<40; i++){
        cout<<userInput[i]<<" ";
    }
    
    return 0;
}