#include<iostream>
using namespace std;

class Matrix {
    private:
        int a, b, c, d;
        friend Matrix multiply(Matrix m1, Matrix m2);
    public:
        void set(int w, int x, int y, int z){
            a = w;
            b = x;
            c = y;
            d = z;
        }

        void set() {
            cout<<"Enter a: ";
            cin>>a;
            cout<<"Enter b: ";
            cin>>b;
            cout<<"Enter c: ";
            cin>>c;
            cout<<"Enter d: ";
            cin>>d;
        }

        void display() {
            cout<<a <<" "<<b <<endl<<c <<" "<<d;
        }
};

Matrix multiply(Matrix m1, Matrix m2) {
    Matrix result;

    int a,b,c,d;
    a = m1.a*m2.a + m1.b * m2.c;
    b = m1.a*m2.b + m1.b * m2.d;
    c = m1.c*m2.a + m1.d * m2.c;
    d = m1.c*m2.b + m1.d * m2.d;
    result.set(a,b,c,d);
    
    return result;  
}

int main () {
    Matrix m;
    Matrix n;
    Matrix result;
    cout<<"Enter values for first 2x2 matrix: \n";
    m.set();
    cout<<"Enter values for second 2x2 matrix: \n";
    n.set();
    result = multiply(m, n);
    result.display();

    return 0;
}