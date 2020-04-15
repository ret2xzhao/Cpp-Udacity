//Write a C++ function to swap two integers without
//using a temp variable.

//Hint: think about pointers

#include<iostream>
using namespace std;

void swap(int *xp, int *yp){
     if(xp == yp)
         return;
     *xp = *xp + *yp;
     cout<<"\n1. During swap x = "<<*xp<<" y = "<<*yp;
     *yp = *xp - *yp;
     cout<<"\n2. During swap x = "<<*xp<<" y = "<<*yp;
     *xp = *xp - *yp;
     cout<<"\n3. During swap x = "<<*xp<<" y = "<<*yp;
}

int main(){
     int x = 10;
     int y = 33;
     cout<<"\nBefore swap x = "<<x<<" y = "<<y;
     swap(&x,&y);
     cout<<"\nAfter swap x = "<<x<<" y = "<<y;
     cout<<"\n";

     return 0;
}