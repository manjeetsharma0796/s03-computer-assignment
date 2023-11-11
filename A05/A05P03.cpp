#include<iostream>
using namespace std;

class Employee {
    protected:
        double salary;
};

class Manager : protected Employee {
    public:
        void setSalary() {
            cout<<"\nEnter salary: ";
            cin>>salary;
        }

        void display() {
            cout<<"\nSALARY: "<<salary;
        }
};

int main() {
    Manager m1;

    m1.setSalary();
    m1.display();

    return 0;
}