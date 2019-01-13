#include <iostream>

using namespace std;

const double PI = 3.14;

double area(const double& radius);
double area(const double& base, const double& height);

int main(){
	
	double radius;
	double base;
	double height;
	
	cout << "\nEnter Following Details To Calculate Area Of A Circle:\nRadius: ";
	cin >> radius;
	cout << "\nEnter Following Details To Calculate Area Of A Triangle:\nBase: ";
	cin >> base;
	cout << "Height: ";
	cin >> height;
	
	cout << "\nArea Of Circle = " << area(radius) << " Square/Units\n";
	cout << "\nArea Of Triangle = " << area(base, height) << " Square/Units\n";
	
	return 0;
}

double area(const double& radius){
	
	return (PI*radius*radius);
}

double area(const double& base, const double& height){
	
	return ((base*height)/2);
}


