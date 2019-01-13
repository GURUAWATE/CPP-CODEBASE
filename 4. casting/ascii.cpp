#include <iostream>

using namespace std;

int main(){

	char ch;
	
	//ASCII Characters Start From 33 & Go Upto 126
	
	for(int i = 33; i < 127; i++){

		ch = static_cast<char>(i);
		
		cout << i << " -> " << ch << endl;
	}	
		
	cout << endl;

	return 0;
}