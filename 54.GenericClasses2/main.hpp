/*header file*/
#include<iostream>

using namespace std;

template <class T>
class Multiplier{
    private:
        T number1;
        T number2;
        T product;
    public:
        void setM1(T input);
        void setM2(T input);
        void setProduct();
        void printEquation();
};

template<class T>
void Multiplier<T>::setM1(T input){
    number1 = input;
}

template<class T>
void Multiplier<T>::setM2(T input){
    number2 = input;
}

template<class T>
void Multiplier<T>::setProduct(){
    product = number1 * number2;
}

template<class T>
void Multiplier<T>::printEquation(){
    cout<<number1<<" * "<<number2<<" = "<<product<<"\n"; 
}