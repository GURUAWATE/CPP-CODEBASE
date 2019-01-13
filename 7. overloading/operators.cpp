#include <iostream>

using namespace std;

struct Person{
	
	string name;
	int age;
	char sex;	
	
	//NOW WE WILL DEFINE A CONSTRUCTOR IN STRUCT, AWESOME!!
	
	Person();                   	// MUST HAVE THIS,
	Person(const Person& temp); 	// IN ORDER TO HAVE THIS.       (ALL OR NONE!!)
	
	Person& operator=(const Person& temp);            // EXPLICIT DECLARATION IS NECESSARY
	
	// STRUCTS ARE SIMILAR TO CLASSES EXCEPT FOR DEFAULT PUBLIC VISIBILITY. (YOU CAN ALSO ADD PRIVATE: IN STRUCTS)
	// STRUCTS ALSO SUPPORT INHERITANCE IN C++
};

Person :: Person(){         // DEFAULT
	
	name = "NONAME";
	age = 0;
	sex = '-';
}

Person :: Person(const Person& temp){     // COPY
	
	name = temp.name;
	age = temp.age;
	sex = temp.sex;
}

bool operator==(const Person& p1, const Person& p2){
	
	return (
			p1.name == p2.name &&
			p1.age == p2.age &&
			p1.sex == p2.sex
	);
}

/* 
	The Use Of Operator Overloading Should Be Restricted To Assignment, Output & Comparison Only;
	And Should Not Be Abused.
*/

ostream& operator<<(ostream& out, const Person& temp) {                 // OSTREAM KEEPS CHANGING, DON'T MAKE IT CONSTANT
	
	out << "\nName: " << temp.name;
	out << "\nAge: " << temp.age;
	out << "\nSex: " << temp.sex << endl;
	
	return out;
}

Person& Person :: operator=(const Person& temp){    // THIS OVERLOADING NEEDS COPY CONSTRUCTOR TO FUNCTION
	
	if(this != &temp){  // AVOID SELF ASSIGNMENT
		
		name = temp.name;
		age = temp.age;
		sex = temp.sex;
	}
	
	return *this;
}

void getPerson(Person& temp){    
	
	//Reference Will Assign Values To Original Object.
	
	cout << "\nName: ";
	cin >> temp.name;
	cout << "\nAge: ";
	cin >> temp.age;
	cout << "\nSex: ";
	cin >> temp.sex;
}

void checkEquality(const Person& p1, const Person& p2, const Person& p3){
	
	// Check Every Permutation Of Pairs For Equality.
	
	if(p1 == p2) cout << "\n\nPerson 1 & Person 2 Have Same Data!";
			     else if(p1 == p3) cout << "\n\nPerson 1 & Person 3 Have Same Data!";
								   else cout << "\n\nPerson 1 Has Distinct Data From Every Other Person!";
	
	if(p2 == p3) cout << "\n\nPerson 2 & Person 3 Have Same Data!\n\n";
				 else cout << "\n\nPerson 2 Has Distinct Data From Every Other Person!\n\n";	
}

int main(){
	
	Person p1,p2,p3;
	
	cout << "\nEnter Values For Person 1: \n";
	getPerson(p1);
	
	cout << "\nEnter Values For Person 2: \n";
	getPerson(p2);
	
	cout << "\nAssigning Data Of 'Person 2' To 'Person 3'(For Comparison):\n";
	p3 = p2; // USES OVERLOADED '='
	
	/*
		DO NOT USE '=' DIRECTLY,IF USER DEFINED DATA TYPE CONTAINS POINTERS,
			 
			YOU MUST SPECIFY A 'COPY CONSTRUCTOR' AND AN OVERLOADED '=' OPERATOR. 
			
			BOTH ARE REQUIRED TO DO THE JOB.
			
			IN C++ , '=' OPERATOR MAKES USE OF 'COPY CONSTRUCTOR' AND IS FULLY DEPENDENT ON IT'S FUNCTIONALITY.
	*/
	
	cout << "\nData Of Each Person:\n";
	
	cout << "\n\nPerson 1:" << p1 << "\n\nPerson 2:" << p2 << "\n\nPerson 3:" << p3 << endl;
	
	checkEquality(p1, p2, p3);
	
	return 0;
}