/*
For this programming quiz, I would like you to create a game called TicTacToe.
In this version of the game you will need to:

Create a 4x4 game board
Prompt the first user (the 'x' user) to enter their name
Prompt the second user (the 'o' user) to enter their name
Prompt the 'x' user to select a grid position where they would like to place an 'x'.
Prompt the 'o' user to select a grid position where they would like to place an 'o'.
After each user has a turn, check for any row, column, diagonal that has 4 'x's or 4 'o's.
If 4 'x's are found in the same col, row, diagonal, declare the 'x' user the winner.
If 4 'o's are found in the same col, row, diagonal, declare the 'o' user the winner.
End the game and declare the winner.
If the grid is filled (each player gets 8 turns) and there is not a row, column, diagonal
with 4 of the same symbol, the game is tied. Declare a tie game.
*/

#include "main.hpp"

int main(){
    int row;
    int column;
    char value;
    string player1;
    string player2;
    Gameboard game;
    
    cout<<"Welcome to TicTacToe!\n\n";
    cout<<"The size of the game board is 4X4.\n\n";
    
    // Input players' names:
    cout<<"Please input Player 1's name:\n";
    getline (cin,player1);
    cout<<"Please input Player 2's name:\n";
    cin.ignore();
    getline (cin,player2);
    
    // Numbers validation:
    for(int i=0; i<(ROW * COLUMN); i++){
        cout<<"Round "<<(i+1)<<"\n";
        cout<<"Please place your position:\n";
        do{
            cout<<"Please input the number for row. The valid number is 1 to 4 inclusive.\n";
            cin>>row;
            while(row < 1 || row > 4){
                cout<<"Please input the number for row. The valid number is 1 to 4 inclusive.\n";
                cin>>row;
            }
        
            cout<<"Please input the number for column. The valid number is 1 to 4 inclusive.\n";
            cin>>column;
            while(column < 1 || column > 4){
                cout<<"Please input the number for column. The valid number is 1 to 4 inclusive.\n";
                cin>>column;
            }
        }
        while(game.getGameSpace(row-1 ,column-1) == 'x' || game.getGameSpace(row-1 ,column-1) == 'o');
        
        // Value validation:
        if(i%2 == 0){
            cout<<"Please input the value. The only valid value is 'x'.\n";
            cin>>value;
            while(value != 'x'){
                cout<<"Please input the value. The only valid value is 'x'.\n";
                cin>>value;
            }
        }
        else{
            cout<<"Please input the value. The only valid value is 'o'.\n";
            cin>>value;
            while(value != 'o'){
                cout<<"Please input the value. The only valid value is 'o'.\n";
                cin>>value;
            }
        }
        game.setGameSpace(row-1, column-1, value);
        game.printInfo();
    }
    if(game.fourInRowX() == 1 || game.fourInColumnX() == 1 || game.fourInDiagonalX() == 1){
        cout<<player1<<" Wins!!! \n\n";
    }
    else if(game.fourInRowO() == 1 || game.fourInColumnO() == 1 || game.fourInDiagonalO() == 1){
        cout<<player2<<" Wins!!! \n\n";
    }
    else{
        cout<<"Tie!!!\n\n";
    }
    
    cout<<"x:\n";
    cout<<"Four In Row = "<<game.fourInRowX()<<"\n";
    cout<<"Four In Column = "<<game.fourInColumnX()<<"\n";
    cout<<"Four In Diagonal = "<<game.fourInDiagonalX()<<"\n\n";
    
    cout<<"o:\n";
    cout<<"Four In Row = "<<game.fourInRowO()<<"\n";
    cout<<"Four In Column = "<<game.fourInColumnO()<<"\n";
    cout<<"Four In Diagonal = "<<game.fourInDiagonalO()<<"\n";
    return 0;
}