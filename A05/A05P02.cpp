#include<iostream>
using namespace std;

class BankAccount {
    private:
        double balance;
};

int main() {
    BankAccount b1;
    cout<<"Enter balance: ";
    cin>>b1.balance;            //Intentionally error

    return 0;
}