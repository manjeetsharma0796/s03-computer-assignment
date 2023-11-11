#include<iostream>
using namespace std;

class Person {
    public:
        string name;
        int age;
    Person(string n, int a) {
        name = n;
        age = a;
    };

    void display() {
        cout<<"\nNAME: "<<name<<"\nAGE: "<<age;
    }
};

int main () {
    string name;
    int age;
    cout<<"Enter name: ";
    getline(cin, name);
    cout<<"Enter age: ";
    cin>>age;

    Person p(name, age);
    p.display();

    return 0;
}