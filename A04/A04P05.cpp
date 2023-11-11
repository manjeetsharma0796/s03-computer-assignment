#include <iostream>
using namespace std;

class Time {
    public:
        int hour, minute;

        Time(int h, int m) {
            hour = h;
            minute = m;
        };

        void display() {
            cout<<hour<<" : "<<minute;
        }
};

int main() {
    int h, m;
    
    cout<<"Enter hour: ";
    cin>>h;
    cout<<"Enter minutes: ";
    cin>>m;

    Time t(h, m);
    t.display();

    return 0;
}