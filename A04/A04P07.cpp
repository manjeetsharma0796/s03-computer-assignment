#include<iostream>
using namespace std;

class Circle {
    public:
        int radius;

        Circle(int r) {
            radius = r;
        };

        void display() {
            cout<<"Radius: "<<radius;
        }
};

int main () {
    int radius;
    
    cout<<"Enter radius: ";
    cin>>radius;

    Circle c(radius);
    c.display();

    return 0;
}
