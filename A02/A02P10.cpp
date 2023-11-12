#include<iostream>
using namespace std;

class Shape {
    protected:
        string name;
    public:
        Shape(string n){
            name = n;
        }

        virtual float area() {
            return 0.0;
        }

        
};

class Circle : public Shape {
    private:
        int radius;
    public:
        Circle(): Shape("Circle"){
            cout<<"Enter radius: ";
            cin>>radius;
        };

        float area() {
            return 3.14 * radius * radius;
        }

        void display() {
            cout<<"\nName: "<<name;
            cout<<"\nArea: "<<area();
        }
};

class Rectangle : public Shape {
    private:
        int length, breadth;
    public:
        Rectangle():Shape("Rectangle"){
            cout<<"Enter length: ";
            cin>>length;
            cout<<"Enter breadth: ";
            cin>>breadth;
        }

        float area() {
            return length * breadth;
        }

        void display() {
            cout<<"\nName: "<<name;
            cout<<"\nArea: "<<area();
        }
};
int main() {
    Circle c;
    Rectangle r;
    c.display();
    r.display();

    return 0;
}