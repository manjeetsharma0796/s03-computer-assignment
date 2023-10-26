#include<iostream>
#include<cmath>
using namespace std;

float calculateCI(float principal, float rate, float time, float frequency) {
    float CI;
    CI = principal * pow(( 1 + (rate / frequency/ 100)), (frequency * time));

    return CI;
}

float calculateSI(float principle, float rate, float time) {
    float SI;
    SI = (principle * rate * time) / 100;

    return SI;     
}

int main() {
    float principle, rate, time, frequency;

    cout<<"\nEnter Principle: ";
    cin>>principle;
    cout<<"\nEnter rate: ";
    cin>>rate;
    cout<<"\nEnter time: ";
    cin>>time;
    cout<<"\nEnter frequency of compound per year: ";
    cin>>frequency;

    cout<<"\nSIMPLE INTEREST: "<<calculateSI(principle, rate, time);
    cout<<"\nCOMPOUND INTEREST: "<<calculateCI(principle, rate, time, frequency);

    return 0;
}