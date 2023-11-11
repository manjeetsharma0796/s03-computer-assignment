#include<iostream>
using namespace std;

class Employee{
    private: 
        string name;
        double salary;
    public:
        void setDetails() {
            cout<<"Enter name: ";
            getline(cin, name);
            
            cout<<"\nEnter salary: ";
            cin>>salary;
        }

        void display() {
            cout<<"\nNAME: "<<name;
            cout<<"\nSALARY: "<<salary;

        }
};

int main(){
    Employee e1;
    e1.setDetails();
    e1.display();

    return 0;
}