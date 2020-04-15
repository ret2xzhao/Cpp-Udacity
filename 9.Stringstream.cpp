/*Goal: practice using stringstream
/*Goal: practice getting string inputs and 
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room. 
 **Then prompt for the width of the room.
 **Print out the area of the room. 
 */

#include<iostream>
#include<sstream>

using namespace std;

string value;
float length;
float width;

int main(){
    cout << "Enter the length of a room: ";
    getline (cin, value);
    stringstream(value) >> length;
    cout << "You entered " << length <<"\n";
    cout << "Enter the width of a room: ";
    getline (cin, value);
    stringstream(value) >> width;
    cout << "You entered " << width <<"\n";
    cout << "The area of the room is: " << length * width <<"\n";
    return 0;
}