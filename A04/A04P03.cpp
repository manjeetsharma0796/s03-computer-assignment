#include<iostream>
using namespace std;

class Book {
    public:
        string title, author;

        Book(string t, string a){
            title = t;
            author = a;
        };

        void display() {
            cout<<"\nTitle: "<<title<<"\nAuthor: "<<author;
        }
};

int main() {
    string t, a;

    cout<<"Enter title: ";
    getline(cin, t);
    cout<<"Enter author: ";
    getline(cin, a);
    
    Book b1(t, a);
    b1.display();

    return 0;
}