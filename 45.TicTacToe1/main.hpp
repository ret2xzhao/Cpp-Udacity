/*header file for main.cpp*/
#include <iostream>
#include <iomanip> 
using namespace std;

const int ROW = 4;
const int COLUMN = 4;
const int COUNT = 4;

class Gameboard{
    char gameSpace[ROW][COLUMN];

public:
    Gameboard(); //initialize the board with '-' in all 16 spaces
    void setGameSpace(int row, int column, char value); //'x','o',or '-' in each game square
    char getGameSpace(int row, int column);
    int fourInRowX(); //four 'x's in any row 'wins'
    int fourInColumnX(); //four 'x's in any column 'wins'
    int fourInDiagonalX(); //four 'x's in any diagonal 'wins'
    int fourInRowO(); //four 'o's in any row 'wins'
    int fourInColumnO(); //four 'o's in any column 'wins'
    int fourInDiagonalO(); //four 'o's in any diagonal 'wins'
    void printInfo(); //print the game board in a 4x4 matrix
};

//TODO: complete the class definition
    Gameboard::Gameboard(){
        for(int i=0; i<ROW; i++){
            for(int j=0; j<COLUMN; j++){
                gameSpace[i][j] = '-';
            }
        }
    }

    void Gameboard::setGameSpace(int row, int column, char value){
        gameSpace[row][column] = value;
    }
    
    char Gameboard::getGameSpace(int row, int column){
        return gameSpace[row][column];
    }
    
    int Gameboard::fourInRowX(){
        int count = 0;
        for(int i=0; i<ROW; i++){
            count = 0;
            for(int j=0; j<COLUMN; j++){
                if(gameSpace[i][j] == 'x'){
                    count = count + 1;
                }
            }
            if(count == COUNT){
                return 1;
            }
        }
        return 0;
    }
    
    int Gameboard::fourInColumnX(){
        int count = 0;
        for(int i=0; i<ROW; i++){
            count = 0;
            for(int j=0; j<COLUMN; j++){
                if(gameSpace[j][i] == 'x'){
                    count = count + 1;
                }
            }
            if(count == COUNT){
                return 1;
            }
        }
        return 0;
    }
    
    int Gameboard::fourInDiagonalX(){
        if(gameSpace[0][0] == 'x' && gameSpace[1][1] == 'x' && gameSpace[2][2] == 'x' && gameSpace[3][3] == 'x'){
            return 1;
        }
        else if(gameSpace[0][3] == 'x' && gameSpace[1][2] == 'x' && gameSpace[2][1] == 'x' && gameSpace[3][0] == 'x'){
            return 1;
        }
        else{
            return 0;
        }
    }
    
    int Gameboard::fourInRowO(){
        int count = 0;
        for(int i=0; i<ROW; i++){
            count = 0;
            for(int j=0; j<COLUMN; j++){
                if(gameSpace[i][j] == 'o'){
                    count = count + 1;
                }
            }
            if(count == COUNT){
                return 1;
            }
        }
        return 0;
    }
    
    int Gameboard::fourInColumnO(){
        int count = 0;
        for(int i=0; i<ROW; i++){
            count = 0;
            for(int j=0; j<COLUMN; j++){
                if(gameSpace[j][i] == 'o'){
                    count = count + 1;
                }
            }
            if(count == COUNT){
                return 1;
            }
        }
        return 0;
    }

    int Gameboard::fourInDiagonalO(){
        if(gameSpace[0][0] == 'o' && gameSpace[1][1] == 'o' && gameSpace[2][2] == 'o' && gameSpace[3][3] == 'o'){
            return 1;
        }
        else if(gameSpace[0][3] == 'o' && gameSpace[1][2] == 'o' && gameSpace[2][1] == 'o' && gameSpace[3][0] == 'o'){
            return 1;
        }
        else{
            return 0;
        }
    }

    void Gameboard::printInfo(){
        for(int i=0; i<ROW; i++){
            cout<<"\n";
            for(int j=0; j<COLUMN; j++){
                cout<<gameSpace[i][j]<<" ";
            }
        }
        cout<<"\n";
    }