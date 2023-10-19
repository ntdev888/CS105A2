//Nic Tauroa CS105 - Section 2 Question 3 - Operator Overload
#include "header.h"
#include <iostream>

//Main function declaration
void operationMenu(Complex _userComplex, Complex _progComplex);

//Main program
int main(){
    //Variable intialisation
    int userRealNo;
    int userImgNo;
    int menuOpt = 0;
    Complex userComplex;
    Complex progComplex = Complex(3, 2);

    //Initial menu
    std::cout << "1st Complex number: ";
    std::cout << progComplex.output() << "\n";
    std::cout << "\nEnter 2nd Complex number values: \n";
    std::cout << "Enter Real number: ";
    std::cin >> userRealNo;
    std::cout << "Enter Imaginary number: ";
    std:: cin >> userImgNo;
    userComplex = Complex(userRealNo, userImgNo);

    //Operations menu
    operationMenu(userComplex, progComplex);

    //Program exit
    return 0;
}


//Operation menu
void operationMenu(Complex _userComplex, Complex _progComplex){
    //Temp variables
    int menuOpt = 0;
    Complex tempComp;

    //Menu Loop
    while(menuOpt != 4){
        std::cout << "Please Choose from the operation menu: \n";
        std::cout << "1. Addition\n";
        std::cout << "2. Subtraction\n";
        std::cout << "3. Multiplication\n";
        std::cout << "4. Exit\n";
        std::cin >> menuOpt;

        switch(menuOpt){
            //Complex Addition
            case 1:
            tempComp = _userComplex + _progComplex;
            std::cout << "(" << _progComplex.output() << ") + (" << _userComplex.output() << ") = " << tempComp.output() << "\n\n";
            break;
            //Complex Subtraction
            case 2:
            tempComp = _progComplex - _userComplex;
            std::cout << "(" << _progComplex.output() << ") - (" << _userComplex.output() << ") = " << tempComp.output() << "\n\n";
            break;
            //Complex Multiplication
            case 3:
            tempComp = _userComplex * _progComplex;
            std::cout << "(" << _progComplex.output() << ") x (" << _userComplex.output() << ") = " << tempComp.output() << "\n\n";
            break;
            //Exit Program
            case 4:
            menuOpt = 4;
            break;
            //Incorrect input from user
            default:
            std::cout << "Please enter a valid option\n\n";
        }
    }

}