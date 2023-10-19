//Nic Tauroa CS105 Assignemnt 2 - Section 1 Question 2

#include "header.h"
#include <string>
#include <iostream>

//Global variable for count for incrementing
int Cost::count = 0;

//Cost Class initialisation
Cost::Cost(int newDollar, int newCents){
    dollar = newDollar;
    cents = newCents;
    count++;
};

//multi functional readCost method
int Cost::readCost(char opt){
    if(opt == 'D'){
        return dollar;
    }else if(opt == 'C'){
        return cents;
    } else {
        return 0;
    }
};

//showcost method
void Cost::showCost(){
    std::cout << "$" << this->dollar << "." << this->cents << "\n";
};

//showcount method
int Cost::showCount(){
    return count;
};

//Calculate the total cost of all objects created
std::string Cost::computeTotalCost(std::vector<Cost> tcost){
    int totalDollars = 0;
    int totalCents = 0;
    
    for(int i = 0; i < tcost.size(); i++){
        totalDollars += tcost[i].readCost('D');
        totalCents += tcost[i].readCost('C');
    }

    return (std::to_string(totalDollars) + "." + std::to_string(totalCents));
}
