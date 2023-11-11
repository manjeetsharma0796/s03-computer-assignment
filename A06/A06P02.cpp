#include<iostream>
using namespace std;

class Shape {
    protected:
    char shapeName[10];
};

class Color {
    protected:
    char colorName[10];
};

class ColoredShape : public Shape, Color {
    public:
    void set() {
        cout<<"\nEnter color name :";
        cin>>colorName;

        cout<<"\nEnter shape name: ";
        cin>>shapeName;
    }

    void display() {
        cout << "\nColor is " << colorName << "\nShape is "<<shapeName;
    }
};

int main() {
    ColoredShape cs;
    cs.set();
    cs.display();

    return 0;
}