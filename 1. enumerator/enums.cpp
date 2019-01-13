#include <iostream>

using namespace std;

enum Days {
	
	MON,
	TUE,
	WED,
	THU,
	FRI,
	SAT,
	SUN
};

int main(){
	
	Days d1,d2,d3,d4,d5,d6,d7;

	d1 = MON;
	cout << "\nMON: " << d1;
	d2 = TUE;
	cout << "\nTUE: " << d2;
	d3 = WED;
	cout << "\nWED: " << d3;
	d4 = THU;
	cout << "\nTHU: " << d4;
	d5 = FRI;
	cout << "\nFRI: " << d5;
	d6 = SAT;
	cout << "\nSAT: " << d6;
	d7 = SUN;
	cout << "\nSUN: " << d7 << endl; 
	
	return 0;
}
