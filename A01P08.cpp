#include<iostream>
using namespace std;

float calculateArea(float length, float breadth){
    return length * breadth;
}

float calculatePerimeter(float length, float breadth) {
    return 2 * (length + breadth);
}

int main() {
    float length, breadth;

    cout<<"\nEnter Length of Rectangle: ";
    cin>>length;
    cout<<"\nEnter Breadth of Rectangle: ";
    cin>>breadth;

    cout<<"\nAREA: "<<calculateArea(length, breadth);
    cout<<"\nPERIMETER: "<<calculatePerimeter(length, breadth); 
}