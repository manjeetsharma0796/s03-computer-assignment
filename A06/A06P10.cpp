#include<iostream>
using namespace std;

class Shape {
    private:
        int length, width;
    public:
        void set() {
            cout<<"\nEnter length: ";
            cin>>length;
            cout<<"\nEnter width: ";
            cin>>width;
        }

        friend class AreaCalculate;
};

class AreaCalculate {
    public:
        int calculate(Shape s) {
            return s.length * s.width;
        }
};

int main () {
    Shape r;
    AreaCalculate a;

    r.set();
    cout<<"\nArea: "<<a.calculate(r);

    return 0;
}a
