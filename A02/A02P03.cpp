#include<iostream>
using namespace std;

bool isPrime(int number) {
    if (number <= 1) return false; 
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) return false; 
    }
    return true;
}

void displayPrimeInterval(int lower, int upper) {
    for(int i = lower; i <= upper; i++) {
        if(isPrime(i) == 1) {
            cout<<i<<" ";
        }
    }
}

int main() {
    int lowerLimit, upperLimit;
    cout<<"Enter lower limit: ";
    cin>>lowerLimit;
    cout<<"Enter upper limit: ";
    cin>>upperLimit;
    displayPrimeInterval(lowerLimit, upperLimit);

    return 0;
}