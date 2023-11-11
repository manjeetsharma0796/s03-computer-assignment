#include<iostream>
using namespace std;

class Student {
    public:
        string name;
        int rollNumber;

    Student() {
        name = "";
        rollNumber = 0;
    };

    void display() {
        cout<<"\nNAME: "<<name<<"\nROLL NUMBER: "<<rollNumber;
    }
};

int main() {
    Student s;
    s.display();

    return 0;
}