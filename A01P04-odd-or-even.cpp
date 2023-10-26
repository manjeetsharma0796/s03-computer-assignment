// Odd or even determine

#include<iostream>
using namespace std;

int main() {
	int num;
	bool isEven;
	
	cout<<"Enter number: ";
	cin>>num;
	
	isEven = num % 2 == 0;
	
	if(isEven) {
		cout<<"\nThe number is even";
	}else {
		cout<<"\nThe number is odd";
	}
	
	return 0;
	
}
