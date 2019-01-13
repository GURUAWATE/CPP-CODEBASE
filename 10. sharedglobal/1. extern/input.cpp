#include <iostream>

using namespace std;

extern double PI;   
double area(const double& radius);

/* 
	NEED TO SPECIFY 'extern' FOR GLOBAL VARIABLES DEFINED ELSEWHERE, 
	BUT NOT NECESSARY FOR GLOBAL FUNCTIONS THAT ARE DEFINED ELSEWHERE.
	
	HERE DECLARION SHOULD BE MADE WITH EXACT PROTOTYPE.
*/

int main(){
	
	double radius;
	
	cout << "\n\nEnter radius to calculate area of circle (Using PI = " << PI << ") : ";
	cin >> radius;
	cout << "\n\nArea of circle with radius " << radius << " is: " << area(radius) << " Square/Units.\n\n";
	
	return 0;
}