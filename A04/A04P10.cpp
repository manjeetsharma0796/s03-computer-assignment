#include<iostream>
using namespace std;

class Point {
    public:
        int x, y;
        Point(int x1, int y1) {
            x = x1;
            y = y1;
        }

        void display() {
            cout<<"\nX cordinate: "<<x<<"\nY cordinate: "<<y;
        }
};

int main() {
    int x1, y1;
    cout<<"Enter x cordinate: ";
    cin>>x1;
    
    cout<<"Enter y cordinate: ";
    cin>>y1;

    Point p(x1, y1);
    p.display();

    return 0;
}