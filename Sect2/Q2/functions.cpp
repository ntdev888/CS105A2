//Nic Tauroa CS105 Assignment 2 - Section 2 Task 2

#include "header.h"

//VideoGame Class initialisation
VideoGame::VideoGame(std::string newTitle, float newPrice){
    title = newTitle;
    price = newPrice;
};

//Root VideoGame method for display
void VideoGame::display(){
    std::cout << "*************\n";
    std::cout << "Title: " << this->showTitle() << "\n";
    std::cout << "Price: $" << this->showPrice() << "\n\n";
    std::cout << "*************\n\n";
};

//Update Private Attribute Title
void VideoGame::setTitle(std::string newTitle){
    title = newTitle;
};

//Update Private Attribute Price
void VideoGame::setPrice(float newPrice){
    price = newPrice;
};

//Output Title
std::string VideoGame::showTitle(){
    return title;
};

//Output Price
float VideoGame::showPrice(){
    return price;
}

//Derived class Computer Game initialisation
ComputerGame::ComputerGame(std::string pcTitle, float pcPrice, std::string pcOs): VideoGame(pcTitle, pcPrice){
    operatingSystem = pcOs;
};

//Polymorphed Function for ComputerGame.Display
void ComputerGame::display(){
    std::cout << "*************\n";
    std::cout << "Title: " << this->showTitle() << "\n";
    std::cout << "Price: $" << this->showPrice() << "\n";
    std::cout << "Operating System: " << this->operatingSystem << "\n";
    std::cout << "*************\n\n";    
};

//Derived class Console Game Intitialisation
ConsoleGame::ConsoleGame(std::string consTitle, float consPrice, std::string consType): VideoGame(consTitle, consPrice){
    this->setTitle(consTitle);
    this->setPrice(consPrice);
    console = consType;
};

//Polymorphed Function for ConsoleGame.display
void ConsoleGame::display(){
    std::cout << "*************\n";
    std::cout << "Title: " << this->showTitle() << "\n";
    std::cout << "Price: $" << this->showPrice() << "\n";
    std::cout << "Console: " << this->console << "\n";
    std::cout << "*************\n\n";    
};
