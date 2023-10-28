#include<iostream>
using namespace std;

class Rectangle {
    private:
        int length, width;
    public:
        void setDimensions() {
            cout<<"\nEnter length: ";
            cin>>length;
            cout<<"\nEnter width: ";
            cin>>width;
        }

        int calculateArea(){
            return length * width;
        }
};

int main(){
    Rectangle r;
    r.setDimensions();
    cout<<"\nArea: "<<r.calculateArea();

    return 0;
}