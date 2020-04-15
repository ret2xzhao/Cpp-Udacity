//Static Class Members
#include<iostream>
using namespace std;

class A{
    public:
        static int integer;
        int getInt();
};

int A::integer = 1;

int A::getInt(){
    return integer;
}

int main(){
    A firstInstance;
    A secondInstance;
    
    cout<<"\nfirstInstance = "<<firstInstance.getInt();
    cout<<"\nsecondInstance = "<<secondInstance.getInt();  
    cout<<"\n\nSet secondInstance.integer = 2";
    secondInstance.integer = 2;
    cout<<"\n\nfirstInstance = "<<firstInstance.getInt();
    cout<<"\nsecondInstance = "<<secondInstance.getInt()<<"\n"; 
    
    return 0;
}