#include<iostream>
using namespace std;

int main() {
    int a, b;

    cout<<"Enter value for first: ";
    cin>>a;
    cout<<"Enter value for second: ";
    cin>>b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"The first value is: "<<a;
    cout<<"\nThe second value is: "<<b;

    return 0;
}