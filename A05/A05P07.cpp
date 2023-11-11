#include<iostream>
using namespace std;

class MyClass {
    private:
        int value = 60;

        friend void display(MyClass m);
};

void display(MyClass m) {
    cout<<"Value: "<<m.value;
}

int main() {
    MyClass m1;
    display(m1);

    return 0;
}