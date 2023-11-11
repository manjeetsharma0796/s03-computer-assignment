#include<iostream>
using namespace std;

class Rectangle {
    private:
        int length, width;
        friend float calculateArea(Rectangle r);
    public:
        void set() {
            cout<<"Enter length: ";
            cin>>length;
            cout<<"Enter width: ";
            cin>>width;
        }
};
class Circle {
    private:
        int radius;
        friend float calculateArea(Circle c);
    public:
        void set() {
            cout<<"Enter radius: ";
            cin>>radius;
        }
};

float calculateArea(Rectangle r) {
    return r.length * r.width;
}

float calculateArea(Circle c) {
    return 3.14 * c.radius * c.radius;
}

int main() {
    Rectangle rectangle1;
    Circle circle1;

    rectangle1.set();
    circle1.set();

    cout<<"\nArea of Rectangle: "<<calculateArea(rectangle1);
    cout<<"\nArea of Circle: "<<calculateArea(circle1);

    return 0;
}