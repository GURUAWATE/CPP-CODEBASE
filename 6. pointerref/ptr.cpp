#include <iostream>

using namespace std;

struct Person{
	
	string name;
	int age;
	char sex;	
};

void show(Person* temp){
	
	cout << "\nName: " << temp->name;
	cout << "\nAge: " << temp->age;
	cout << "\nSex: " << temp->sex;
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
	
	Person* p = new Person;
	
	cout << "\nAssign Values To P (Via Pointers): \n";
	assign(p);
	
	cout << "\nValues of P: \n";
	show(p);
	
	cout << "\nDemo of References T&\n";
	
	string myname = "Guru";
	cout << "\nOriginal String: " << myname << endl;
	
	string& mynewname = myname;
	cout << "\nReference String&: " << mynewname << endl;
	
	mynewname = "GuruRaj";
	cout << "\nMade Changes To Reference String& as GuruRaj\n\nAnd Changes Occuured To Original String: " << myname << endl;
	
	
	delete p;
	
	return 0;
}