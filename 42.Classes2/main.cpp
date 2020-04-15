/*Goal: practice creating and using classes.
**Create a class called Cat.
**Create the following members:
**private members: name, breed, age
**public members: setName, setBreed,setAge
**getName, getBreed, getAge, printInfo*/

#include"main.hpp"

int main(){
    Cat cat1;
    Cat cat2;
    Cat cat3;

    cat1.setName("Wangwang");
    cat1.setBreed("Russian Blue");
    cat1.setAge(1);
    
    cat2.setName("Youki");
    cat2.setBreed("Scottish Fold");
    cat2.setAge(16);
    
    cat3.setName("Mocha");
    cat3.setBreed("British Shorthair");
    cat3.setAge(15);
    
    cat1.printInfo();
    cat2.printInfo();
    cat3.printInfo();
    return 0;
}