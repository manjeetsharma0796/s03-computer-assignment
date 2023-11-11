#include<iostream>
using namespace std;

class Person {
    public:
        string name;
};

class Employee : private Person {
    public:
        void set() {
            cout<<"Enter name: ";
            getline(cin, name);
        }
};

int main () {
    Employee e;
    e.set();        //This should result in error

    return 0;
}