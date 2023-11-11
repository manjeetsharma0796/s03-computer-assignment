#include<iostream>
using namespace std;

class Time {
    private:
        int hours, minutes;
    public:
        void setTime() {
            cout<<"\nEnter hour: ";
            cin>>hours;
            cout<<"\nEnter minutes: ";
            cin>>minutes;
        }

        void showTime() {
            cout<<"TIME: "<<hours<<" : "<<minutes;
        }
};

int main() {
    Time t1;
    t1.setTime();
    t1.showTime();

    return 0;
}