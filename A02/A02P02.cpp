#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        return true;
    } else {
        return false;
    }
}
int main() {
    int year;
    cout<<"Enter potential leap year: ";
    cin>>year;

    if(isLeapYear(year)){
        cout<<"It's a leap year";
    }else {
        cout<<"It's not a leap year";
    }

    return 0;
}