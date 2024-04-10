#include <iostream>

using namespace std;

class Trapezoid 
{
private:
    double base1;
    double base2;
    double height;

public:
    
    Trapezoid() 
    {
        cout << "Default constructor called" << endl; // visivaem po umol4aniu
        base1 = 0.0;
        base2 = 0.0;
        height = 0.0;
    }

    Trapezoid(double b1, double b2, double h) 
    {
        cout << "Parameterized constructor called" << endl;
        base1 = b1;
        base2 = b2;
        height = h;
    }

    Trapezoid(const Trapezoid& other) // copiruet 
    {
        cout << "Copy constructor called" << endl;
        base1 = other.base1;
        base2 = other.base2;
        height = other.height;
    }

    ~Trapezoid() //destructor class 
    {
        cout << "Destructor called" << endl;
    }

    
    double calculateArea() 
    {
        return 0.5 * (base1 + base2) * height;
    }

    double getBase1() const { return base1; }
    double getBase2() const { return base2; }
    double getHeight() const { return height; }

    void setBase1(double b1) { base1 = b1; }
    void setBase2(double b2) { base2 = b2; }
    void setHeight(double h) { height = h; }
};

int main() 
{
    Trapezoid trapezoid1; 
    Trapezoid trapezoid2(5.0, 7.0, 4.0);
    Trapezoid trapezoid3 = trapezoid2;

    cout << "Area of trapezoid 3: " << trapezoid3.calculateArea() << endl;
    return 0;
}
