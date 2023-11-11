#include<iostream>
using namespace std;

class BankAccount{
    private:
        string accountNumber;
        double balance;

    public:
        void setDetails() {
            cout<<"Enter account number: ";
            getline(cin, accountNumber);

            cout<<"\nEnter balance: ";
            cin>>balance;
        }

        void display() {
            cout<<"\nACCOUNT NUMBER: "<<accountNumber;
            cout<<"\nBALANCE: "<<balance;
        }
};

int main() {
    BankAccount b1;

    b1.setDetails();
    b1.display();

    return 0;
}