#include <iostream>
using namespace std;

bool isPalindrome(int number) {
    int reverse = 0, originalNumber = number;
    
    while (number != 0) {
        int remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number /= 10;
    }
    
    return originalNumber == reverse;
}
int main() {
    int number;
    cout<<"Enter number: ";
    cin>>number;
    if(isPalindrome(number)) {
        cout << "The number is palindrome.";
    }else {
        cout << "The number is not palindrome";
    }

    return 0;
}