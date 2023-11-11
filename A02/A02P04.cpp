#include<iostream>
using namespace std;

void calculator() {
    int num1, num2;
    int option;

    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;

    cout<<"Choose Operation: ";
    cout<<"\n1: ADD";
    cout<<"\n2: SUBTRACT";
    cout<<"\n3: MULTIPLY";
    cout<<"\n4: DIVIDE";
    cout<<"\n5: MOD\n";

    cin>>option;

    switch(option) {
        case 1:
            cout << "Result = " << (num1 + num2);
            break;
        case 2:
            cout << "Result = " << (num1 - num2);
            break;
        case 3:
            cout << "Result = " << (num1 * num2);
            break;
        case 4:
            cout << "Result = " << (num1 / num2);
            break;
        case 5:
            cout << "Result = " << (num1 % num2);
            break;
        default:
            cout<<"Wrong option entered";
    }
}

int main() {
    calculator();

    return 0;
}