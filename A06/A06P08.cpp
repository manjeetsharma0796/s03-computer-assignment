#include<iostream>
using namespace std;

class Person {
    protected:
        string name;

};

class Employee : public Person {
    protected:
        string employeeID;

    public:
        void set() {
            cout<<"Enter name: ";
            cin.ignore();
            getline(cin, name);
            
            cout<<"Enter EmployeeID: ";
            cin.ignore();
            getline(cin, employeeID);
        }

        void display() {
            cout<<"\nName: "<<name;
            cout<<"\nEmployeeID: "<<employeeID;
        }
};

int main() {
    Employee e;
    e.set();
    e.display();
    return 0;
}