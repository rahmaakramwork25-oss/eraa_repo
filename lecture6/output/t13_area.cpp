#include <iostream>
using namespace std;

// Abstract Class
class Shape {
public:
    
    virtual void calculateArea() = 0;
    

    virtual ~Shape() {}
};


class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    
    void calculateArea() override {
        double area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    }
};

int main() {
    Shape* shape = new Rectangle(5, 4);
    shape->calculateArea();
    
    delete shape;
    return 0;
}