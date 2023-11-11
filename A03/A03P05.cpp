#include<iostream>
using namespace std;

class Book {
	char title[10];
	char author[10];
	
	public:
		void setDetails() {
			cout<<"\nEnter title :";
			cin>> title;
			cout<<"\nEnter author name :";
			cin>> author;
			
			return;
		}
		
		void display() {
			cout<< title<<"\t\t" <<author<<endl;
			
			return;
		}
};

int main() {
	Book b1;
	Book b2;
	
	b1.setDetails();
	b2.setDetails();
	
	cout<< "Title\t\tAuthor\n";
	b1.display();
	b2.display();
	
	return 0;
}
