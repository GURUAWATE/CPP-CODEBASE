#include <iostream>

using namespace std;

class Person{
	
	private:
	
			unsigned int age;                
			string name;
			char sex;
	
	public:
			void getPerson();
			bool isOldEnoughToDrive() const;    // This Function Won't Change Any Data (ONLY ACCESSOR)
			
			Person();
			Person(const Person& temp);         
			
			// No 'new' Hence, No ~Destructor(), C++ Will Do It For Us! 
			
			Person& operator=(const Person& temp);
			
			/*  
			    Friends Can Access Private Members,Operator '<<' Must Be A Friend To Do So.
				& The Definition of The Friend; 
				If Written Outside The Class,It Should Be Written As A 'Free' Function.
			*/	
			 
			friend ostream& operator<<(ostream& out, const Person& temp);
};

Person :: Person(){
	
	age = 0;
	name = "NONAME";
	sex = '-';
}

Person :: Person(const Person& temp){
	
	age = temp.age;
	name = temp.name;
	sex = temp.sex;
}

bool Person :: isOldEnoughToDrive() const {
	
	return (age >= 16); 		
}

void Person :: getPerson(){
	
	cout << "\nEnter Person Details:\n\nName: ";
	cin >> name;
	cout << "\nAge: ";
	cin >> age;
	cout << "\nGender: ";
	cin >> sex;
}

Person& Person :: operator=(const Person& temp){
	
	if(this != &temp){
		
		name = temp.name;
		age = temp.age;
		sex = temp.sex;
	}
	
	return *this;
}

/*
	This Friend Function Is Not A Member Of The Class,
	Thus Doing, 'Person ::' Would Be Incorrect.
	
	Hence, Just Declare This Fuction As Friend In The Class &
	Write It's Definition Outside The Class Without Scope '::' Operators.
	
	This Is Called The Free Function,Which Does Not Belong To Any Class.
*/

ostream& operator<<(ostream& out, const Person& temp){
	
	out << "\n\nInfo:\n\nName: " << temp.name;
	out << "\nAge: " << temp.age;
	out << "\nGender: " << temp.sex;
	
	if(temp.isOldEnoughToDrive())		
		out << "\n\nThis Person Is Eligible To Drive.\n\n";
	else					
		out << "\n\nThis Person Is Still " << 16-(temp.age) << " Year(s) Younger To Drive.\n\n";
	
	return out;
}


int main(){
	
	Person p1,p2,p3;
	
	p1.getPerson();
	p2.getPerson();
	p3.getPerson();
	
	cout << "\n\nP4 Has A Copy P1's Data.\n";
	Person p4 = p1;
	
	cout << "\nP1:\n" << p1 << "\nP2:\n" << p2 << "\nP3:\n" << p3 << "\nP4:\n" << p4;
	
	return 0;
}