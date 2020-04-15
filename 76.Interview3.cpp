#include<iostream>

using namespace std;

class A{
     public: 
           //TODO: run the code with and without
           //the keyword 'virtual'
           void virtual getMe();
           A();
};

void A::getMe(){
    cout<<"A!";
}

A::A(){
    cout<<" A constructor";
}

class B: public A{
    public:
           void getMe();
           B();
};

B::B(){
    cout<<" B constructor";
}

void B::getMe(){
    cout<<"B!";
}

int main(){
    cout<<"\nCreating instances:";
    A *instanceB;
    A *instanceA;
    cout<<"\nCreating 'new' instances:";
    cout<<"\n\tinstanceB: ";
    instanceB = new B();
    cout<<"\n\tinstanceA: ";
    instanceA = new A();
    
    cout<<"\ninstanceB->getMe() produces: ";
    instanceB->getMe();
    cout<<"\ninstanceA->getMe() produces: ";
    instanceA->getMe();
    cout<<"\n";

    return 0;
}