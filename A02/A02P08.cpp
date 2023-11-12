#include<iostream>
using namespace std;

int factorial(int num) {
    if(num == 0) {
        return 1;
    }

    return num * factorial(num - 1);
}

int main() {
    int num;
    cout<<"Enter number for factorial: ";
    cin>>num;

    cout<<factorial(num);

    return 0;
}