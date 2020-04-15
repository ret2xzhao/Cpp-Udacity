/*Create a class that has four constructors:
* one that accepts no input parameters
* one that accepts name
* one that accepts license number
* one that accepts name and license number
* The default values are:
name = "NA"
license = 0
*/

#include<iostream>
#include<string>
using namespace std;

class Dog{
    private:
        string name;
        int license;
    public:
        Dog();
        Dog(string inputName);
        Dog(int inputLicense);
        Dog(string inputName, int inputLicense);
        string getName();
        int getLicense();
};

Dog::Dog(){
    name = "NA";
    license = 0;
}

Dog::Dog(string inputName){
    name = inputName;
    license = 0;
}

Dog::Dog(int inputLicense){
    name = "NA";
    license = inputLicense;
}

Dog::Dog(string inputName, int inputLicense){
    name = inputName;
    license = inputLicense;
}

string Dog::getName(){
    return name;
}

int Dog::getLicense(){
    return license;
}