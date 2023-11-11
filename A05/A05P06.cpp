#include<iostream>
using namespace std;

class Shape {
    protected:
        string shape = "circle";

        void printShape() {
            cout<<"Shape: "<<shape;
        }
};

class Circle : public Shape {
    public:
        void display() {
            printShape();
        }
};

int main() {
    Circle c;
    c.display();

    return 0;
}