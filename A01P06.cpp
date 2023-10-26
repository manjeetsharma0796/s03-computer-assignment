#include<iostream>
using namespace std;

int main() {
    float temp_F, temp_C;

    cout<<"Enter temperature in fahrenheit: ";
    cin>>temp_F;
    temp_C = (temp_F - 32) * 5 / 9;
    cout<<"\nTemperature in Celsius: "<<temp_C;
    
    return 0;
}