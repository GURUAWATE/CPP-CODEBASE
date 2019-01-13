#include <iostream>

using namespace std;

int main(){
	
	string s = "Guru";

	cout << "\n\nString: " << s;
	
	char c = s[3];
	cout << "\n\n4th Character In " << s << " Is: " << c;
	
	s += "Raj";
	cout << "\n\nAppended String With \"Raj\" Now, String: " << s;
	
	cout << "\n\nLength Of String: " << s << " Is: " << s.size();
	
	string s1 = s + " Awate";
	cout << "\n\nNew String S1 Is Concatenation Of Previous String With \" Awate\" Now, String: " << s1 << endl;
	
	cout << "\n\nThere are more operations on STL string,We will see them later!!\n\n";
	return 0;
}