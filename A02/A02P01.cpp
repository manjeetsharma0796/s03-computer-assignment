#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char a;

    cout << "Enter character: ";
    cin >> a;

    int asciiValue = tolower(a);

    if (asciiValue > 47 && asciiValue < 58)
    {
        cout << "It's a number";
    }

    if (asciiValue == 97 ||
        asciiValue == 101 ||
        asciiValue == 105 ||
        asciiValue == 111 ||
        asciiValue == 117)
    {
        cout << "It's a vowel";
    }
    else if (asciiValue > 96 && asciiValue < 123)
    {
        cout << "It's a consonant";
    }
    else
    {
        cout << "It's a special character";
    }
    return 0;
}