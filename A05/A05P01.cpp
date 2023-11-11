#include<iostream>
using namespace std;

class Person {
    public:
        string name;

        void setName() {
            cout<<"Enter name: ";
            getline(cin, name);
        }

        void display() {
            cout<<"\nNAME: "<<name;
        }
};

int main() {
    Person p1;
    p1.setName();
    p1.display();

    return 0;
}