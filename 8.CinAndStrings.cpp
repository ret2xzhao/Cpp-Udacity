/*Goal: practice std::cin for strings
**Write a program that prompts two users for their
**name, address, and phone number. 
**Print the information to the console in the following format:
**name
**\/t\/t address
**\/t\/tphone number
**Imogene Penelope Freely
**         2343 South View Road
**         (408)435-3221
**Sandy Beaches
**         1123 Pebble Creek Road
**         (408)546-5432
**
*/

#include<iostream>

using namespace std;

int main(){
    string nameOne, addressOne, phoneNumberOne;
    string nameTwo, addressTwo, phoneNumberTwo;
    
    cout<<"What's your name?\n";
    getline(cin, nameOne);
    cout<<"What's your address?\n";
    getline(cin, addressOne);
    cout<<"What's your phone number?\n";
    getline(cin, phoneNumberOne);
    
    cout<<"\nWhat's your name?\n";
    getline(cin, nameTwo);
    cout<<"What's your address?\n";
    getline(cin, addressTwo);
    cout<<"What's your phone number?\n";
    getline(cin, phoneNumberTwo);
    
    cout<<"\n"<<nameOne<<"\n";
    cout<<"\t\t"<<addressOne<<"\n";
    cout<<"\t\t"<<phoneNumberOne<<"\n";
    cout<<nameTwo<<"\n";
    cout<<"\t\t"<<addressTwo<<"\n";
    cout<<"\t\t"<<phoneNumberTwo<<"\n";
    
    return 0;
}