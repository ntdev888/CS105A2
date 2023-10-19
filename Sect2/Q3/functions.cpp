//Nic Tauroa CS105 - Section 2 Question 3 - Operator Overload

#include "header.h"
#include <iostream>
#include <string>

//Class constructor for Complex number
Complex::Complex( int newRealNo, int newImaginaryNo){
    realNo = newRealNo;
    imaginaryNo = newImaginaryNo;

};

//Class Real Number retrieval
int Complex::getReal() const{
    return realNo;
}

//Class Imaginary number retrieval
int Complex::getImaginary() const{
    return imaginaryNo;
}

//Equation output for Complex number
std::string Complex::output() const{
    return (std::to_string(this->getReal()) + " + " + std::to_string(this->getImaginary()) + "i");
};

//Complex Class operator overload
//addition
Complex Complex::operator+(const Complex &equComplex) const{
    int tempImaginaryNo;
    int tempRealNo;

    tempRealNo = realNo + equComplex.getReal();
    tempImaginaryNo = imaginaryNo + equComplex.getImaginary();

    return Complex(tempRealNo, tempImaginaryNo);
};

//subtraction
Complex Complex::operator-(const Complex &equComplex) const{
    int tempRealNo;
    int tempImaginaryNo;


    tempRealNo = realNo - equComplex.getReal();
    tempImaginaryNo = imaginaryNo - equComplex.getImaginary();
    

    return Complex(tempRealNo, tempImaginaryNo);
};

//Multiplication
Complex Complex::operator*(const Complex &equComplex) const{
    int tempRealNo;
    int tempImaginaryNo;

    tempRealNo = (realNo * equComplex.getReal()) - (imaginaryNo * equComplex.getImaginary());
    tempImaginaryNo = (realNo * equComplex.getImaginary()) + (imaginaryNo * equComplex.getReal());

    return Complex(tempRealNo, tempImaginaryNo);
};




