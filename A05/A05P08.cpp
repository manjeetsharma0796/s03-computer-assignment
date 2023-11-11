#include<iostream>
using namespace std;

class Complex {
    private:
        double real;
        double imaginary;
        friend Complex add(Complex s1, Complex c2);
    public:
        void set(int r, int imag) {
            real = r;
            imaginary = imag;
        }

        void display() {
            cout<<real<<" "<<imaginary<<"i";
        }
};

Complex add(Complex s1, Complex s2) {
    Complex result;
    int real, imaginary;
    real = s1.real + s2.real;
    imaginary = s1.imaginary + s2.imaginary;
    result.set(real, imaginary);

    return result;
}

int main() {
    Complex c1;
    Complex c2;
    Complex result;

    c1.set(1, 2);
    c2.set(2, 2);
    
    result = add(c1, c2);

    result.display();

    return 0;
}