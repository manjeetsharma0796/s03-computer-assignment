#include<iostream>
using namespace std;

class Animal {
    protected:
    char name[8];
    int age;
};

class Dog : public Animal {
    private:
        char breed[20];
        
    public:
        void set() {
            cout<<"\nEnter name: ";
            cin>>name;

            cout<<"\nEnter age: ";
            cin>>age;

            cout<<"\nEnter breed: ";
            cin>>breed;
        }

        void display() {
            cout<<"\nName: "<<name<<"\nAge: "<<age<<"\nBreed: "<<breed;
        }

};

int main() {
    Dog d;
    d.set();
    d.display();

    return 0;
}