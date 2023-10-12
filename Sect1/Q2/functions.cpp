//Nic Tauroa CS105 Assignemnt 2 - Section 1 Question 2

#include "header.h"
#include <string>
#include <iostream>

int Cost::count = 0;

Cost::Cost(int newDollar, int newCents){
    dollar = newDollar;
    cents = newCents;
    count++;
};

int Cost::readCost(char opt){
    if(opt == 'D'){
        return dollar;
    }else if(opt == 'C'){
        return cents;
    } else {
        return 0;
    }
};

void Cost::showCost(){
    std::cout << "$" << this->dollar << "." << this->cents << "\n";
};

int Cost::showCount(){
    return count;
};

std::string Cost::computeTotalCost(std::vector<Cost> tcost){
    int totalDollars = 0;
    int totalCents = 0;
    
    for(int i = 0; i < tcost.size(); i++){
        totalDollars += tcost[i].readCost('D');
        totalCents += tcost[i].readCost('C');
    }

    return (std::to_string(totalDollars) + "." + std::to_string(totalCents));
}
