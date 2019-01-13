#include <iostream>

using namespace std;

struct Person{
	
	string name;
	int age;
	char sex;	
};

void show(const Person& temp){
	
	cout << "\nName: " << temp.name;
	cout << "\nAge: " << temp.age;
	cout << "\nSex: " << temp.sex;
	cout << endl;
}

void assign(Person* temp){
	
	cout << "\nName: ";
	cin >> temp->name;
	cout << "Age: ";
	cin >> temp->age;
	cout << "Sex: ";
	cin >> temp->sex;
}

int main(){
	
	Person p1 = {"Naruto", 21, 'M'};
	
	Person p2,p3;
	
	cout << "\nDefault Values Assigned To Structure P1: \n";
	show(p1);
	
	cout << "\nCopied Values of P1 To P2: \n";
	
	p2 = p1;	
	show(p2);
	
	/*
		THIS DIRECT ASSIGNING OF USER DEFINED OPERANDS (VIZ. CLASS & STRUCTS),
		
		OBJ1 = OBJ;
		
		IS ONLY ACCEPTABLE WHEN , OBJ TYPE IS NOT CONTAINING ANY POINTER VARIABLES.
		
		IF THEY WERE TO CONTAIN ANY, THEY WOULD POINT TO SAME MEMORY LOCATION AND WOULD CAUSE PROBLEMS;
			IF ONE'S VALUE GETS CHANGED,THEN OTHER'S ASWELL.
		
		THIS MALPRACTICE SHOULD BE AVOIDED,UNLESS YOU OVERLOAD '=' OPERATOR AND WRITE A COPY CONSTRUCTOR.	
		
		THIS WILL BE MORE EXPLAINED IN VECT EXAMPLE AND OPERATOR OVERLOADING.
	*/
	
	cout << "\nAssign New Values To P2 (Via Pointer): \n";
	assign(&p2);
	
	cout << "\nAssign New Values To P3 (Via .(Dot Member Selection)): \n";
	
	cout << "\nName: ";
	cin >> p3.name;
	cout << "Age: ";
	cin >> p3.age;
	cout << "Sex: ";
	cin >> p3.sex;
	
	cout << "\nValues of P1: \n";
	show(p1);
	
	cout << "\nValues of P2: \n";
	show(p2);
	
	cout << "\nValues of P3: \n";
	show(p3);
	
	cout << "\n\nSTRUCTS ARE CAPABLE OF HAVING EVERY FUNCTIONALITY THAT CLASSES HAVE TO OFFER i.e. MEMBER FUNCTIONS, INHERITANCE.... \n\n";
	
	return 0;
}