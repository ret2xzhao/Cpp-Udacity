/*Goal: practice using a class. 
**Create an array called roster, populate it 
**with multiple instances of Dog, it has a size of SIZE. 
**Then create a function called 
**printRoster(roster, SIZE) that will print 
**all the information about all the dogs on the roster.
*/

#include "main.hpp"

int main(){
    const int SIZE = 3;
    Dog roster[SIZE];
    //ToDo: assign the dogs to an array called roster
    //Then assign names to the Dog.

    roster[0].setName("Wangwang");
    roster[1].setName("Youki");
    roster[2].setName("Mocha");

    roster[0].setLicenseNumber(123);
    roster[1].setLicenseNumber(456);
    roster[2].setLicenseNumber(789);

    //ToDo: declare and define this function
    //in the header file
    printRoster(roster,SIZE);
    return 0;
}