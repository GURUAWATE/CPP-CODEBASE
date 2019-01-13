#include <iostream>

using namespace std;

class tonyStark{
	
	string model;
	int net;
	double money;
	
	public:
			tonyStark();
			friend class warMachine;
			void showWhatIGot();
};

tonyStark :: tonyStark(){
	
	model = "Mark 2";
	net = 6;
	money = 500;
}

void tonyStark :: showWhatIGot(){
	
	cout << "\n\nHey,This is Tony!, This is what I own: \n";
	cout << "\nMachine Model: " << model;
	cout << "\nMachines At Combat Ready Mode: " << net;
	cout << "\nMoney Balance (In Billion $): " << money;
}

class warMachine{
	
	string model ;
	int net;
	double money;
	
	public:
			warMachine();
			void getStuffFromTony(tonyStark& wallet);
			void showWhatIGot();
};

warMachine :: warMachine(){
	
	model = "NOTHING";
	net = 0;
	money = 0;
}

void warMachine :: showWhatIGot(){
	
	cout << "\n\nHey,This is War Machine!, This is what I took from Tony: \n";
	cout << "\nMachine Model: " << model;
	cout << "\nMachines At Combat Ready Mode: " << net;
	cout << "\nMoney Balance (In Billion $): " << money;
}

void warMachine :: getStuffFromTony(tonyStark& wallet){
	
	cout << "\n\nTony! I am Taking some of your stuff!!\n";
	
	model = wallet.model;
	
	net = 2;
	wallet.net -= 2;
	
	money = 2.5;
	wallet.money -= 2.5;
	
	showWhatIGot();
}

int main(){
	
	tonyStark t;
	warMachine w;
	
	t.showWhatIGot();
	w.showWhatIGot();
	
	w.getStuffFromTony(t);
	t.showWhatIGot();

	cout << "\n\nFRIENDSHIP IS NOT TRANSITIVE;\n\nIf 'B' IS FRIEND OF 'A', 'C' IS FRIEND OF 'B',\n";
	cout << "This does not mean 'C' is Friend of 'A', unless 'A' explicitly specifies so..\n\n";
	
	return 0;	
}