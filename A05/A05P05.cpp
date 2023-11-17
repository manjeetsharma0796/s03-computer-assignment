#include<iostream>
using namespace std;

class Student {
    private: 
        string name, id;
        void showDetails() {
            cout<<"\nName: "<<name<<"\nID: "<<id;
        }

    public:
        void setDetails() {
            cout<<"Enter name: ";
            getline(cin, name);

            cout<<"Enter ID: ";
            getline(cin,id);
            showDetails();
        }

        
};

int main() {
    Student s1;
    s1.setDetails();

    return 0;   
}