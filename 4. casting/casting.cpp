#include <iostream>

using namespace std;

int main(){

	double d = 6.666666;

	cout << "Double: " << d << endl;
	
	cout << "\nLossy Double to Int Cast: " << static_cast<int>(d) << endl;
	
	return 0;
}
