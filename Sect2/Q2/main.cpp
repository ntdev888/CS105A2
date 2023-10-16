//Nic Tauroa CS105 Assignment 2 - Section 2 Task 2

#include <iostream>
#include "header.h"

//Main program function declarations (I like to keep main functions and Class functions seperated)
void enterGame(VideoGame* inVideoGamesArray[], int& followGameCount);
void displayGames(VideoGame* inVideoGamesArray[], int followGameCount);
void displayQtyGames(int followGameCount);
 

 //Main
 int main() {

    //Establishing Class array and variables
    const int maxGames = 10;
    VideoGame* videoGamesArray[maxGames] = {};
    //menu variables for functionality
    bool menu = true;
    int choice;
    char optionDevice;
    //Game count for Array tracking
    int gameCount = 0;

    //While Loop for regenerating the Video Game selection menu
    while(menu){
        std::cout << "     VIDEO GAMES DATA ENTRY\n";
        std::cout << "********************************\n";
        std::cout << "Please enter what you would like to do\n";
        std::cout << "1. Enter a Video Game into system\n";
        std::cout << "2. Display all stored Vide Games\n";
        std::cout << "3. Display Qty of Vide Games stored\n";
        std::cout << "4. Exit App\n\n :";
        std::cin >> choice;

        //Switch Case for menu options
        switch(choice){
            //Creater a Game
            case 1:
            enterGame(videoGamesArray, gameCount);
            break;
            //Display all the games stored
            case 2:
            displayGames(videoGamesArray, gameCount);
            break;
            //Display how many games created
            case 3:
            displayQtyGames(gameCount);
            break;
            //Exit Application
            case 4:
            return 0;
            //Prompt user they fed an incorrect input into the menu
            default:
            std::cout << "Please select from the menu\n";
            break;
        }

    }
 };


//Function to enter a videogame into the array
 void enterGame(VideoGame* inVideoGamesArray[], int& followGameCount){
    //temp variable storage
    char tempConsolePC;
    std::string tempTitle;
    float tempPrice;
    std::string tempDevice;
    bool enterGameMenu = true;
    char yesNo;

    //Menu Loop
    while(enterGameMenu){
    std::cout << "Do you want to enter PC or Console game (o / c)? :";
    std::cin >> tempConsolePC;
    std::cout << "Please enter the title to your game :";
    std::cin >> tempTitle;
    std::cout << "Please enter the price :";
    std::cin >> tempPrice;
    
    //Check if user selected PC or Console game then create the class
    if(tempConsolePC == 'o' || tempConsolePC == 'O'){
        std::cout << "Please enter the Operating system of the Computer :";
        std::cin >> tempDevice;
        inVideoGamesArray[followGameCount] = new ComputerGame(tempTitle, tempPrice, tempDevice);
        followGameCount++;
    } else if(tempConsolePC == 'c' || tempConsolePC == 'C'){
        std::cout << "Please enter the name of the Console system :";
        std::cin >> tempDevice;
        inVideoGamesArray[followGameCount] = new ConsoleGame(tempTitle, tempPrice, tempDevice);
        followGameCount++;
    } else {
        std::cout << "You did not enter a PC or Console game";
    };

    //Prompt if user wants to repeat enterying games
    std::cout << "Would you like to enter another game? (y/n):";
    std::cin >> yesNo;

    (yesNo == 'n') ? enterGameMenu = false : enterGameMenu = true;

    }
 };


//Hand the array to the function and iterate through it to display each game stored
 void displayGames(VideoGame* inVideoGamesArray[], int followGameCount){
    if(followGameCount == 0){
        return;
    }
    
    //Use the derived objects method to display to console what is stored
    for(int i = 0; i < followGameCount; i++){
        inVideoGamesArray[i]->display();
    }

    return;
 };

//Show the quantity of games created
 void displayQtyGames(int followGameCount){
    std::cout << "Total Games stored: " << followGameCount << "\n";
 };