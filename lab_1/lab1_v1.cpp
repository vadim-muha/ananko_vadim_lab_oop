#include <iostream>
#include <string>

using namespace std;

class Vector 
{
private:
    double x;
    double y;
    double z;
    string creator;
    string color;

public:
    Vector(double x_val, double y_val, double z_val, const string& creator_name, const string& color_vector) : x(x_val), y(y_val), z(z_val), creator(creator_name), color(color_vector) {}

    double getX() const
    {
        return x;
    }

    double getY() const 
    {
        return y;
    }

    double getZ() const 
    {
        return z;
    }

    string getCreator() const 
    {
        return creator;
    }

    string getColor() const 
    {
        return color;
    }

    void setX(double x_val) 
    {
        x = x_val;
    }

    void setY(double y_val) 
    {
        y = y_val;
    }

    void setZ(double z_val) 
    {
        z = z_val;
    }
};

int main() 
{
    Vector vec1(1.0, 2.0, 3.0, "Vasya", "Green");
    Vector vec2(4.0, 5.0, 6.0, "Peter", "Red"); 

    cout << "Vector 1 coordinates (" << vec1.getX() << ", " << vec1.getY() << ", " << vec1.getZ() << ")" << endl;
    cout << "Vector 2 coordinates (" << vec2.getX() << ", " << vec2.getY() << ", " << vec2.getZ() << ")" << endl;

    cout << "Vector 1 created by" << " ' "<< vec1.getCreator() << " ', " << "Vector 2 created by" << " ' " << vec2.getCreator() << " ' " << endl;

    cout << "Vector 1 color" << " ' " << vec1.getColor() << " ', " << "Vector 2 color" << " ' " << vec2.getColor() << " ' " << endl;

    return 0;
}
