//Nic Tauroa CS105 - Section 2 Question 3 - Operator Overload

#include <iostream>
#include <string>

//Class declaration
class Complex{
    //private attributes
    int realNo;
    int imaginaryNo;

    //public methods
    public:
    Complex( int newRealNo = 1, int newImaginaryNo = 1);
    Complex operator+(const Complex &equComplex) const;
    Complex operator-(const Complex &equComplex) const;
    Complex operator*(const Complex &equComplex) const;
    std::string output() const;
    int getReal() const;
    int getImaginary() const;
};