/*Goal: In the programming quiz, use a while loop to prompt
**the user to guess a target number. 
**Tell the user if the guess is too high or too low. 
**The user enters -1  or guesses the target number to end 
**the program.
*/

#include <iostream>
#include<sstream>

using namespace std;

int main()
{
    //use 55 as the number to be guessed
    int target = 55;
    int guess = -1;
    cout<<"Guess a number between 0 and 100: \n";
    while(guess != target){
        cin>>guess;
        cout<<guess<<"\n";
        if(guess > target){
            cout<<"Your guess is too high.\n";
        }
        else if(guess < target){
            cout<<"Your guess is too low.\n";
        }
        else{
            cout<<"You are right!\n";
        }
        if(guess == -1){
            cout<<"End\n";
            break;
        }
    }
            
    return 0;
}
