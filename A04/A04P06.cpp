#include<iostream>
using namespace std;

class BankAccount {
    public:
        string accountNumber;
        double balance;

        BankAccount(string a, double b){
            accountNumber = a;
            balance = b;
        };

        void display() {
            cout<<"\nAccount Number: "<<accountNumber<<"\nBalance: "<<balance;
        }
};

int main() {
    string a;
    double b;

    cout<<"Enter Account Number: ";
    getline(cin, a);
    cout<<"Enter Balance: ";
    cin>>b;

    BankAccount b1(a,b);
    b1.display();

    return 0;
}