#include <iostream>
#include <string>

using namespace std;

class Point 
{
private:
    double x;
    double y;
    double z;
    string creator;
    string color;

public:
    Point(double x_val, double y_val, double z_val, const string& creator_name, const string& color_point) : x(x_val), y(y_val), z(z_val), creator(creator_name), color(color_point) {}

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
    Point point1(1.0, 2.0, 3.0, "Vasya", "Green");
    Point point2(4.0, 5.0, 6.0, "Peter", "Red"); 

    cout << "Point 1 coordinates (" << point1.getX() << ", " << point1.getY() << ", " << point1.getZ() << ")" << endl;
    cout << "Point 2 coordinates (" << point2.getX() << ", " << point2.getY() << ", " << point2.getZ() << ")" << endl;

    cout << "Point 1 created by ' "<< point1.getCreator() << " ', Point 2 created by ' " << point2.getCreator() << " ' " << endl;

    cout << "Point 1 color" << " ' " << point1.getColor() << " ', " << "Point 2 color" << " ' " << point2.getColor() << " ' " << endl;

    return 0;
}