#include<iostream>
using namespace std;

class Vehicle {
    protected:
    char make[10];
    char model[10];
};

class Car : public Vehicle {
    protected:
        int year;
};

class SportsCar : public Car {
    protected:
        int topSpeed;

    public:
        void set() {
            cout<<"\nEnter car make: ";
            cin>>make;
            cout<<"\nEnter model: ";
            cin>>model;
            cout<<"\nEnter year: ";
            cin>>year;
            cout<<"\nEnter topSpeed: ";
            cin>>topSpeed;
        }

        void display() {
            cout<<"\nMake: "<<make;
            cout<<"\nModel: "<<model;
            cout<<"\nYear: "<<year;
            cout<<"\nTopspeed: "<<topSpeed;
        }
};

int main() {
    SportsCar s;
    s.set();
    s.display();

    return 0;
}