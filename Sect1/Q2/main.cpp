//Nic Tauroa CS105 Assignemnt 2 - Section 1 Question 2

#include <iostream>
#include "header.h"
#include <vector>

void createCost(std::vector<Cost>& _cost);
void showPrice(std::vector<Cost>& ccost);

int main(){
    std::vector<Cost> cost;
    int option;
    bool menu = true;

    while(menu){
    std::cout << "ITEM COST CALCULATOR\n";
    std::cout << "********************\n";
    std::cout << "Please select from the below options:\n";
    std::cout << "1. Create an item\n";
    std::cout << "2. Show price for item\n";
    std::cout << "3. Show how many items you have created\n";
    std::cout << "4. Calculate Total Cost\n";
    std::cout << "5. Exit app\n\n :";
    std::cin >> option;

    switch(option){
        case 1:
        createCost(cost);
        break;

        case 2:
        showPrice(cost);
        break;

        case 3:
        std::cout << "You have " << (cost[0].showCount()) << " items\n\n";
        break;

        case 4:
        std::cout << "$" << cost[0].computeTotalCost(cost) << "\n";
        break;

        case 5:
        menu = false;
        return 0;

        case 6:
        for(int i = 0; i < cost.size(); i++){
            cost[i].showCost();
        };
        break;
        
        default:
        std::cout << "Invalid option, please select from one available\n";
        break;

    }
    }
    
}

void createCost(std::vector<Cost>& _cost){
    int tempDollar;
    int tempCents;

    std::cout << "Please input Dollar amount:";
    std::cin >> tempDollar;
    std::cout << "Please input Cent amount:";
    std::cin >> tempCents;

    _cost.push_back(Cost(tempDollar,tempCents));
    std::cout << "\n\n";
};

void showPrice(std::vector<Cost>& ccost){
    int tempOption;

    std::cout << "You have created " << ccost.size() << " items\n";
    std::cout << "which item would you like to display? :";
    std::cin >> tempOption;

    if(tempOption < 0 || tempOption > ccost.size()){
        return;
    } else {
        ccost[tempOption - 1].showCost();
    }
};

