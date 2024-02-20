#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int choice ;
	double radius, length, width, area;
	
	const double PI = 3.142 ;
	
	cout<< "Choose a shape to calculate its area : " << endl ;
	cout<< "1. Circle" << endl;
	cout<< "2. Rectangle" << endl;
	cout<< "Enter your choice (1 or 2) :" ;
	cin>> choice;
	
	if(choice ==1)
	{
		cout<< "Enter the radius of the Circle: ";
		cin>> radius;
		
		area = PI * pow(radius, 2);
		cout<< "Area of the circle is : " << area;
		
		
	}
	else if (choice ==2)
	{
		cout<< "Enter the length and width of the Rectangle: ";
		cout<< "Enter the length of the Rectangle: ";
		cin>> length;
		cout<< "Enter the width of the Rectangle: ";
		cin>> width ;
		
	    if (length <= 0 || width <= 0)
		cout<< "Invalid input, length, width cannot be negative and also zero. " <<endl;
	}
	else
	{
		area = length * width;
	    cout<< "Area of the Rectangle is: " << area <<endl;
    }
		cout << "Invalid choice, Please enter 1 or 2. "<< endl;
	
	 return 0;
}
