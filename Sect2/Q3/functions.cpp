//Nic Tauroa CS105 - Section 2 Question 3 - Operator Overload

#include "header.h"
#include <iostream>


Complex::Complex( int newRealNo, int newImaginaryNo){
    realNo = newRealNo;
    imaginaryNo = newImaginaryNo;

};

int Complex::getReal() const{
    return realNo;
}

int Complex::getImaginary() const{
    return imaginaryNo;
}

void Complex::output() const{
    std::cout << this->getReal() << " + " << this->getImaginary() << "i\n";
};


Complex Complex::operator+(const Complex &equComplex) const{
    int tempImaginaryNo;
    int tempRealNo;

    tempRealNo = realNo + equComplex.getReal();
    tempImaginaryNo = imaginaryNo + equComplex.getImaginary();

    return Complex(tempImaginaryNo, tempRealNo);
};

Complex Complex::operator-(const Complex &equComplex) const{
    int tempRealNo;
    int tempImaginaryNo;


    tempRealNo = realNo - equComplex.getReal();
    tempImaginaryNo = imaginaryNo - equComplex.getImaginary();
    

    return Complex(tempImaginaryNo, tempRealNo);
};

Complex Complex::operator*(const Complex &equComplex) const{
    int tempRealNo;
    int tempImaginaryNo;

    tempRealNo = realNo - equComplex.getReal();
    tempImaginaryNo = imaginaryNo - equComplex.getImaginary();


    return Complex(tempImaginaryNo, tempRealNo);
};




