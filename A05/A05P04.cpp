#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length, width;
    
    public:
        void setDimension() {
            cout<<"Enter length: ";
            cin>>length;
            cout<<"\nEnter width: ";
            cin>>width;
        }

        void calculateArea() {
            cout<<"\nAREA: "<< length * width;
        }
};

int main() {
    Rectangle r1;
    r1.setDimension();
    r1.calculateArea();

    return 0;
}