#include <iostream>

using namespace std;

class Vect{
	
	private:
			int* data;               // Pointer To Int; Will Also Serve As A Pointer To First Element Of An Array
			int size;
	
	public:
			Vect(const int& given_size);
			Vect(const Vect& temp);
			~Vect();
			
			void getVect();						// Getters & Setters
			void setVect();	
			
			Vect& operator=(const Vect& temp);            // EXPLICIT DECLARATION IS NECESSARY
};

Vect :: Vect(const int& given_size){
	
	size = given_size;
	data = new int[given_size];            // Allocate Memory To The Array From The FreeStore
}

Vect :: Vect(const Vect& temp){                    // Copy Constructor
	
	size = temp.size;
	data = new int[size];
	
	for(int i = 0; i < size; i++)
		data[i] = temp.data[i];
}

Vect :: ~Vect(){
	
	delete[] data;						   // Free Array Memory With '[]', No Need To Loop The Delete Statement 
}

void Vect :: getVect(){
	
	cout << "\nData In Vector:\n";
	
	for(int i = 0; i < size; i++)	
		cout << endl << i << ". " << data[i];
}

void Vect :: setVect(){
	
	cout << "\nEnter " << size << " Elements For The Vector:\n";
	
	for(int i = 0; i < size; i++){
		
		cout << endl << i << ". ";
		cin >> data[i];
	}	
}

Vect& Vect :: operator=(const Vect& temp){
	
	if(this != &temp){               // AVOID SELF ASSIGNMENT
		
		size = temp.size;		
		
		delete[] data;               // DELETE OLD MEMORY & ALLOCATE NEW ONE	
		data = new int[size];
		
		for(int i = 0; i < size; i++)
			data[i] = temp.data[i];
	}
	
	return *this;
}

int main(){
	
	Vect a(5);
	
	cout << "\n\nENTER VECTOR A:\n";
	a.setVect();
	
	cout << "\n\nCONTENTS OF VECTOR A:\n";
	a.getVect();
	
	cout << "\n\nASSIGNING:\n\t  Vect B = A;\n";
	cout << "\nIT IS NOW SAFE TO DO THIS, AS COPY CONSTRUCTOR AND '=' OPERATOR HAVE BEEN HANDLED PROPERLY\n";
	Vect b = a;					 
	
	cout << "\n\nCONTENTS OF VECTOR B:\n";
	b.getVect();
	
	cout << "\n\nENTER NEW VALUES FOR VECTOR B (TO CONFIRM THAT, THEY REFER TO DIFFERENT MEMORY LOCATIONS):\n";
	b.setVect();
	
	cout << "\n\nCONTENTS OF VECTOR A:\n";
	a.getVect();
	
	cout << "\n\nCONTENTS OF VECTOR B:\n";
	b.getVect();
	
	cout << "\n\n---: REMEMBER :---\n\n";
	cout << "\nEVERY CLASS THAT ALLOCATES IT'S OWN OBJECTS USING 'new', SHOULD DO FOLLOWING THINGS:\n\n";
	cout << "\n\n\t• DEFINE A '~Destructor()' TO FREE ANY ALLOCATED OBJECTS";
	cout << "\n\n\t• DEFINE A 'Copy Constructor()'";
	cout << "\n\n\t• DEFINE AN 'Overloaded '=' (Assignment) Operator' :";
	cout << "\n\n\t\tWHICH DEALLOCATES OLD STORAGE,\n\t\tALLOCATES NEW STORAGE,\n\t\t& COPIES ALL MEMBER VARIABLES.\n\n";
	
	cout << "\n\nThere are also 'STL vectors', We will see 'STL vectors' & their 'Operations' later!!\n\n";
	
	return 0;
}