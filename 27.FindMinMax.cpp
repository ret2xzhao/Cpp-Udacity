/*Find the min and max and average of 15 numbers that a user will input.
**The numbers range from 0 to 100. 
**We will do it now for practice and again later when we learn arrays and 
**functions. So you do not have to keep all fifteen numbers stored in memory.
**HINT: you will need to use scanf for input text.
*/

// 14 23 88 97 60 54 33 26 100 97 55 63 89 78 69

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int max = 0;
    int min = 100;
    int sum = 0;
    int num;

    for(int i=0; i<15; i++){
        scanf("%d",&num);
        if(num >= max){
            max = num;
        }
        if(num <= min){
            min = num;
        }
        sum = sum + num;
    }
    cout<<"The min number of 15 numbers is "<<min<<"\n";
    cout<<"The max number of 15 numbers is "<<max<<"\n";
    cout<<"The average number of 15 numbers is "<<sum/15<<"\n";
    return 0;
}