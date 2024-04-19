// lab4.cpp
#include <iostream>
#include "header.h"
using namespace std;

int main() 
{
    Complex a(5, 3), b(2, 7);
    Complex c = a - b;
    cout << "a - b = ";
    c.display();
    cout << endl;

    if (a > b) cout << "a bilshe za b" << endl;
    
    --a;
    cout << "a pisla dekrementa: ";
    a.display();
    cout << endl;

    Complex d;
    d = a;
    cout << "d pisla prisvoivania: ";
    d.display();
    cout << endl;

    Complex e = operator-(a, b);
    cout << "vidnimania a - b za dopomogoi drojnio function: ";
    e.display();
    cout << endl;

    if (isGreater(a, b)) cout << "a bolshe za b za dopomogoi prostoi fanction" << endl;
    
    return 0;
}
