/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array 
**and a vector of size 4. 
**Use the dot product to multiply the array by the vector. 
**Print the resulting vector. 
*/

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    //TODO: multiply a 4x4 array with vector of size 4. 
    //Print the resultant product vector
    int array[4][4];
    int vector[4];
    int product[4];
    
    // array[4][4]:
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<"Please input the integer for array["<<i<<"]["<<j<<"]\n";
            scanf("%d",&array[i][j]);
            cout<<"Your input is "<<array[i][j]<<"\n";
        }
    }
    cout<<"\n";
    
    // vector[4]:
    for(int k=0; k<4; k++){
        cout<<"Please input the integer for vector["<<k<<"]\n";
        scanf("%d",&vector[k]);
        cout<<"Your input is "<<vector[k]<<"\n";
    }
    cout<<"\n";
    
    // product[4]:
    int sum = 0;
    for(int l=0; l<4; l++){
        for(int m=0; m<4; m++){
            sum = sum + array[l][m] * vector[m];
        }
        product[l] = sum;
        sum = 0;
        cout<<"product["<<l<<"] is "<<product[l]<<"\n";
    }
    
    return 0;
}