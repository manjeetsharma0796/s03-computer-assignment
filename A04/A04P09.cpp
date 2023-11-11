#include<iostream>
using namespace std;

class Vehicle{
    public: 
        string make;
        string model;
    
        Vehicle(string m1, string m2) {
            make = m1;
            model = m2;
        };
    
        void display() {
            cout<<"\nMake: "<<make<<"\nModel: "<<model;
        }
};

int main() {
    string m1, m2;
    
    cout<<"Enter make of vehicle: ";
    getline(cin, m1);
    cout<<"Enter model of vehicle: ";
    getline(cin, m2);

    Vehicle v(m1, m2);
    v.display();

    return 0;
}