//Nic Tauroa CS105 Assignemnt 2 - Section 1 Question 2

#include <vector>
#include <string>

class Cost{
    private:
    int dollar;
    int cents;
    static int count;

    public:
    Cost(int newDollar, int newCents);
    int readCost(char opt);
    void showCost();
    int showCount();
    std::string computeTotalCost(std::vector<Cost> tcost);
};