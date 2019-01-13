#include <iostream>

using namespace std;

class Vect{
	
	private:
			int* data;               // Pointer To Int; Will Also Serve As A Pointer To First Element Of An Array
			int size;
	
	public:
			Vect(const int& given_size);
			~Vect();
			
			void getVect();						// Getters & Setters
			void setVect();	
};

Vect :: Vect(const int& given_size){
	
	size = given_size;
	data = new int[given_size];            // Allocate Memory To The Array From The FreeStore
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

int main(){
	
	Vect a(5);
	cout << "\n\nENTER VECTOR A:\n";
	a.setVect();
	cout << "\n\nOUPUT VECTOR A:\n";
	a.getVect();
	
	cout << "\n\nASSIGN Vect B = A;\n";
	Vect b = a;					 
	
	cout << "\n\nOUPUT VECTOR B:\n";
	b.getVect();
	
	cout << "\n\nYOU ARE NOT CREATING COPY, INSTEAD 'B' IS POINTING TO 'data' OF 'A'( SHALLOW COPY )\n";
	cout << "\n\nNow, Let's Change Data For 'B' And Output Both 'A' & 'B'\n";
	
	cout << "\n\nENTER VECTOR B:\n";
	b.setVect();
	
	cout << "\n\nOUPUT VECTOR A:\n";
	a.getVect();
	
	cout << "\n\nOUPUT VECTOR B:\n";
	b.getVect();
	
	cout << "\n\nTO USE '=' ACCURATELY & WITHOUT MEMORY LEAKS, TAKE THE HELP OF 'OVERLOADING' WITH 'COPY CONSTRUCTOR' (BOTH ARE REQUIRED!!)\n";
	cout << "\nTHE PROGRAM HAS LOST POINTERS AND HENCE, DESTRUCTOR IS CONFUSED..\n\nAND SEE FOR YOURSELF,THE MEMORY DUMP STATEMENT DOWN BELOW:\n\n";
	
	return 0;
}
