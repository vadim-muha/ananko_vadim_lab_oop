// header.h
#define HEADER_H
#include <iostream>

using namespace std;

class Complex 
{
private:
    double real;
    double imag;

public:
    Complex(double re = 0, double im = 0) : real(re), imag(im) {}

    Complex operator-=(const Complex& other) const 
    {
        return Complex(real - other.real, imag - other.imag);
    }

    bool operator>(const Complex& other) const 
    {
        return (real * real + imag * imag) > (other.real * other.real + other.imag * other.imag);
    }

    Complex& operator--() 
    {
        --real;
        --imag;
        return *this;
    }

    Complex& operator=(const Complex& other) 
    {
        real = other.real;
        imag = other.imag;
        return *this;
    }

    void display() const 
    {
        cout << real << " + " << imag << "i";
    }

    // drojnia function
    friend Complex operator-(const Complex& c1, const Complex& c2);
    friend bool isGreater(const Complex& c1, const Complex& c2);
};

Complex operator-(const Complex& c1, const Complex& c2) 
{
    return Complex(c1.real - c2.real, c1.imag - c2.imag);
}

bool isGreater(const Complex& c1, const Complex& c2) 
{
    return (c1.real * c1.real + c1.imag * c1.imag) > (c2.real * c2.real + c2.imag * c2.imag);
}
