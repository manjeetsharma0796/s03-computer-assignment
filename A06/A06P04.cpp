#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;
};

class Student : public Person
{
public:
    void set()
    {
        cout << "\nEnter student name: ";
        cin.ignore();
        getline(cin, name);
        cout << "\nEnter student age: ";
        cin >> age;
    }

    void display()
    {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
    }
};

class Teacher : public Person
{
public:
    void set()
    {
        cout << "\nEnter teacher name: ";
        cin.ignore();
        getline(cin, name);
        cout << "\nEnter teacher age: ";
        cin >> age;
    }

    void display()
    {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
    }
};

int main()
{
    Student s;
    Teacher t;
    s.set();
    t.set();

    s.display();
    t.display();

    return 0;
}