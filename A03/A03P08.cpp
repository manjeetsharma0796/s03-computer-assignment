#include<iostream>
using namespace std;

class TemperatureConverter{
    private: 
        float C;
    public:
        void setTemp() {
            cout<<"Enter temperature in C: ";
            cin>>C;
        }

        void convert() {
            float fahrenheit = (C * 1.8) + 32;
            cout<<"Converted Temperature: "<<fahrenheit <<"F";
        }
};

int main() {
    TemperatureConverter t1;
    t1.setTemp();
    t1.convert();

    return 0;
}