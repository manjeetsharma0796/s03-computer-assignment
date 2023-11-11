#include<iostream>
using namespace std;

class Car {
    public:
        void start() {
            cout<<"\nCar Started";
        }        

        void stop() {
            cout<<"\nCar Stopped";
        }
};

int main() {
    Car bmw;
    bmw.start();
    bmw.stop();
    bmw.start();

    return 0;
}