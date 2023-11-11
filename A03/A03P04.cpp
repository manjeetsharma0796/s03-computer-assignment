#include<iostream>
using namespace std;

class Circle {
	private:
		int radius;
	public:
		void getRadius() {
			cout<<"Enter radius :";
			cin>> radius;
			
			return;
		}
		
		float calculateCircumference() {
			return 2 * 3.14 * radius;
		}
};

int main(){
	Circle c1;
	
	c1.getRadius();
	cout<< "The circumference of circle is: " << c1.calculateCircumference();
	
	return 0;
}
