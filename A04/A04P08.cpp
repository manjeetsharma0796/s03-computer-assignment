#include<iostream>
using namespace std;

class Employee {
    public:
        string name;
        double salary;

        Employee(string n, double s) {
            name = n;
            salary = s;
        }

        void display() {
            cout<<"\nName: "<<name<<"\nSalary: "<<salary;
        }
};

int main() {
    string n;
    double s;

    cout<<"Enter name: ";
    getline(cin, n);

    cout<<"Enter salary: ";
    cin>>s;

    Employee e(n, s);

    e.display();

    return 0;
}