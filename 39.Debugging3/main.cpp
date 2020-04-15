/*Debug the program so that it executes correctly.
**This program calculates floor or wall surface areas
**For the purpose of remodeling estimates. 
**It asks a user to enter their name, phone, address
**Then enter the room they wish to remodel
**The user is asked to select a task
**then a material. 
**The program will generate an estimate of 
**the cost of the project. 
**
**The user inputs are in the input.txt file.*/

#include "main.hpp"

int main(){
    //user information
    string userName = " ";
    string phoneNumber = " ";
    string userAddress = " ";
    string remodelRoom = " ";
    int task = 0;
    float roomWidth = 0;
    float roomDepth = 0;
    float roomHeight = 0;
    float wallSurfaceArea = 0;
    float floorArea = 0;
    
    //estimate variables
    float paintCost = 0.0;
    float wallpaperCost = 0.0;
    float carpetCost = 0.0;
    float tileCost = 0.0;
    float woodFloorCost = 0.0;

    //the possible task list
    enum task{paint, wallpaper, carpet, tile, woodFloor};
    
    getUserInformation(userName, userAddress, phoneNumber);
    remodelRoom = getRoomChoice();
    task = getTaskAssignment();
    
    getRoomInformation(task, roomWidth, roomDepth, roomHeight);
    
    //print the information of the user and room
    printJobInformation(userName, phoneNumber, userAddress, remodelRoom, task);
    
    //If a wall treatment is to be done, get the wall surface area
    //assume all four walls of the room are to be redone
    if(task == 0 || task == 1){
        //calculate and print the estimates
        wallSurfaceArea = calcWallSurfaceArea(roomWidth, roomDepth, roomHeight);
        paintCost = calcPaintCost(wallSurfaceArea);
        wallpaperCost = calcWallPaperCost(wallSurfaceArea);
        printWallCostComparisons(paintCost, wallpaperCost);
    }
    
    //if a floor is to be done, get the square footage of the room
    if(task == 2 || task == 3 || task == 4){
        //calculate and print the estimates
        floorArea = calcFloorArea(roomWidth, roomDepth);
        carpetCost = calcCarpetCost(floorArea);
        tileCost = calcTileCost(floorArea);
        woodFloorCost = calcWoodFloor(floorArea);
        printFloorCostComparisons(carpetCost, tileCost, woodFloorCost);
    }
    return 0;
}