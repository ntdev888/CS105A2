//Nic Tauroa CS105 Assignment 2 - Section 2 Task 2

#include "header.h"

VideoGame::VideoGame(std::string newTitle, float newPrice){
    title = newTitle;
    price = newPrice;
};

void VideoGame::display(){
    std::cout << "*************\n";
    std::cout << "Title: " << this->showTitle() << "\n";
    std::cout << "Price: $" << this->showPrice() << "\n\n";
    std::cout << "*************\n\n";
};

void VideoGame::setTitle(std::string newTitle){
    title = newTitle;
};

void VideoGame::setPrice(float newPrice){
    price = newPrice;
};

std::string VideoGame::showTitle(){
    return title;
};

float VideoGame::showPrice(){
    return price;
}

ComputerGame::ComputerGame(std::string pcTitle, float pcPrice, std::string pcOs): VideoGame(pcTitle, pcPrice){
    operatingSystem = pcOs;
};

void ComputerGame::display(){
    std::cout << "*************\n";
    std::cout << "Title: " << this->showTitle() << "\n";
    std::cout << "Price: $" << this->showPrice() << "\n";
    std::cout << "Operating System: " << this->operatingSystem << "\n";
    std::cout << "*************\n\n";    
};

ConsoleGame::ConsoleGame(std::string consTitle, float consPrice, std::string consType): VideoGame(consTitle, consPrice){
    this->setTitle(consTitle);
    this->setPrice(consPrice);
    console = consType;
};

void ConsoleGame::display(){
    std::cout << "*************\n";
    std::cout << "Title: " << this->showTitle() << "\n";
    std::cout << "Price: $" << this->showPrice() << "\n";
    std::cout << "Console: " << this->console << "\n";
    std::cout << "*************\n\n";    
};
