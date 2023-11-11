#include<iostream>
using namespace std;

class Student {
    private: 
        string name;
        int id;
    public:
        void setDetails() {
            cout<<"Enter name: ";
            getline(cin, name);

            cout<<"Enter ID: ";
            cin>>id;
        }

        void display() {
            cout<<"\nName: "<<name<<"\nID: "<<id;
        }
};

int main() {
    Student s1;
    s1.setDetails();
    s1.display();

    return 0;   
}