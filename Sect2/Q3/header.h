//Nic Tauroa CS105 - Section 2 Question 3 - Operator Overload

#include <iostream>

class Complex{
    int realNo;
    int imaginaryNo;

    public:
    Complex( int newRealNo, int newImaginaryNo);
    Complex operator+(const Complex &equComplex) const;
    Complex operator-(const Complex &equComplex) const;
    Complex operator*(const Complex &equComplex) const;
    void output() const;
    int getReal() const;
    int getImaginary() const;
};