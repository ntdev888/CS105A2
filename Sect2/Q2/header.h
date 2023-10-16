//Nic Tauroa CS105 Assignment 2 - Section 2 Task 2

#include <iostream>
#include <string>


//Parent VideoGame Class
class VideoGame{
    std::string title;
    float price;

    public:
    VideoGame(std::string newTitle, float newPrice);
    virtual void display();
    void setTitle(std::string newTitle);
    void setPrice(float newPrice);
    std::string showTitle();
    float showPrice();
};

//Derived ComputerGame class
class ComputerGame : public VideoGame{
    //Unique Variable to ComputerGames
    std::string operatingSystem;

    public:
    ComputerGame(std::string pcTitle, float pcPrice, std::string pcOs);
    void display(); 
};

//Derived ConsoleGame Class
class ConsoleGame : public VideoGame{
    //Unique Variable to ConsoleGames
    std::string console;

    public:
    ConsoleGame(std::string consTitle, float consPrice, std::string consType);
    void display();
};
