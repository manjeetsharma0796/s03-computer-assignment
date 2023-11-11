#include<iostream>
using namespace std;

class Student {
	char name[10];
	int grade;
	
	public:
	void enterDetails() {
		cout << "\nEnter name :";
		cin>>name;
		
		cout<< "\nEnter Grade :";
		cin>>grade;	
		return; 
	}
	
	void display() {
		cout<<name <<"\t\t" << grade<<endl;
		
		return;
	}
};

int main() {
	Student arr[3];
	
	for(int i = 0; i < 3; i++) {
		arr[i].enterDetails();
	}
	
	cout<<"Name \t\tGrade\n";
		
	for(int i = 0; i < 3; i++) {
		arr[i].display();
	}
	
	return 0;
};
