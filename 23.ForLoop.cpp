/*Write a program that asks a user for five numbers.
**Print out the sum and average of the five numbers.
*/

#include<iostream>

using namespace std;

int main(){
    int number;
    double sum = 0;
    for(int i=0; i<5; i++){
        cin>>number;
        cout<<number<<"\n";
        sum = sum + number;
    }
    cout<<"The sum is: "<<sum<<"\n";
    cout<<"The average is: "<<sum/5<<"\n";
    return 0;
}