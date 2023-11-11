#include<iostream>
using namespace std;

class Shape {
    public:
        virtual float area() {};
};

class Circle : public Shape {
    private:
        int radius;
    public:
        float area() {
            cout<<"\nEnter radius: ";
            cin>>radius;

            return 3.14*radius*radius;
        }
};

class Rectangle : public Shape {
    private:
        int length, width;
    public:

        float area() {
            cout<<"\nEnter length: ";
            cin>>length;
            cout<<"\nEnter width: ";
            cin>>width;

            return length*width;
        }
};

int main() {
    Circle c;
    Rectangle r;

    cout<<"\nArea of Circle: "<<c.area();
    cout<<"\nArea of Rectangle: "<<r.area();
    return 0;
}