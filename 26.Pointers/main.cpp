/*For this program print for each variable
**print the value of the variable, 
**then print the address where it is stored. 
*/
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int givenInt;
    float givenFloat;
    double givenDouble ;
    string givenString;
    char givenChar;
    
    cin >> givenInt;
    cout << "The value of int givenInt is: " << givenInt << '\n';
    cout << "The address of int givenInt is: " << &givenInt << '\n';
    
    cin >> givenFloat;
    cout << "The value of float givenFloat is: " << givenFloat << '\n';
    cout << "The address of float givenFloat is: " << &givenFloat << '\n';
    
    cin >> givenDouble;
    cout << "The value of double givenDouble is: " << givenDouble << '\n';
    cout << "The address of double givenDouble is: " << &givenDouble << '\n';
    
    cin.ignore();
    cin >> givenChar;
    cout << "The value of char givenChar is: " << givenChar << '\n';
    cout << "The address of char givenChar is: " << (void * )&givenChar << '\n';
    
    cin.ignore();
    getline (cin,givenString);
    cout << "The value of string givenString is: " << givenString << '\n';
    cout << "The address of string givenString is: " << &givenString << '\n';
    
    return 0;
}