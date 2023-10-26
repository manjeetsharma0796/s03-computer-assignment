#include<iostream>
using namespace std;

class Person{
    public:
        char name[20];
        int age;
        char address[40];

        void setDetails(){
            cout<<"\nEnter Name: ";
            cin>>name;
            cout<<"\nEnter Age: ";
            cin>>age;
            cout<<"\nEnter Address: ";
            cin>>address;

            return;
        }

        void display(){
            cout<<"\nName: "<<name;
            cout<<"\nAge: "<<age;
            cout<<"\nAddress: "<<address;

            return;
        }
};

int main() {
    Person human;
    human.setDetails();
    human.display();

    return 0;
}