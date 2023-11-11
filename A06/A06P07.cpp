#include<iostream>
using namespace std;

class Shape {
    protected:
        virtual float area() = 0;
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
    Shape *s;
    Circle c;
    Rectangle r;

    s = &c;
    cout<<"\nArea of Circle: "<<s->area();
    s = &r;
    // cout<<"\nArea of Rectangle: "<<s.area();
    return 0;
}