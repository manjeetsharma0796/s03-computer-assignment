#include<iostream>
using namespace std;

class Rectangle {
    public:
        int length, width;

        Rectangle(int l, int w) {
            length = l;
            width = w;
        }

        int calculateArea() {
            return length*width;
        }
};

int main() {
    int l, w;
    cout<<"Enter length: ";
    cin>>l;
    cout<<"Enter width: ";
    cin>>w;

    Rectangle r(l, w);

    cout<<"The required area of rectangle: "<<r.calculateArea();

    return 0;
}