#include<iostream>
using namespace std;

class Student {
    private: 
        string name;
        int grade;
    public:
        void setDetails(){
            cout<<"Enter name: ";
            getline(cin, name);
            cout<<"Enter grade: ";
            cin>>grade;
            cin.ignore();

        }

        void display(){
            cout<<name<<"\t\t"<<grade<<'\n';
        }
};

int main() {
    int totalStudents; 
    cout<<"\nEnter total number of students: ";
    cin>>totalStudents;
    cin.ignore();
    Student students[totalStudents];

    for(int i = 0; i < totalStudents; i++){
        students[i].setDetails();
    }
    
    cout<<"NAME"<<"\t\t"<<"GRADE\n";

    for(int i = 0; i < totalStudents; i++){
        students[i].display();
    }
       
    return 0;
}