#include <iostream>

using namespace std;

inline int min(int x,int y){return ((x < y) ? x : y);}

inline int max(int x,int y){return ((x > y) ? x : y);}

int main(){
	
	int a,b,c,d;
	
	cout << "\n\nEnter 2 Numbers For Finding Minimum:\n";
	cin >> a >> b;
	
	cout << "\n\nEnter 2 Numbers For Finding Maximum:\n";
	cin >> c >> d;
	
	cout << "\n\nMinimum of " << a << " & " << b << " Is: " << min(a,b);
	cout << "\n\nMaximum of " << c << " & " << d << " Is: " << max(c,d) << endl;
	
	return 0;
}
