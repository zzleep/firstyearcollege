#include <iostream>

using namespace std;

int main(){
	
	// Starter menu
	
	cout<< "Welcome!"<< endl;
	double Bal;
	cout<< "\nEnter your balance:"<< endl;
	cin>> Bal;
	int Opt;
	cout<<"\n----------------------------------------" << endl;
	cout<< "\nSelect an option: " << endl;
	cout<< "\n1. Withraw Amount" << endl;
	cout<< "\n2. Deposit Amount" << endl;
	cout<< "\n3. Exit" << endl;
	cout<<"\n----------------------------------------" << endl;
	cin>> Opt;
	

	//For the menu
	switch(Opt){
		// Withrawal
		case 1:
			if (Opt==1){
			cout<< "\nHow much amount you want to withdraw from your account?"<< endl; 
			double Amount; 
			cout<< "\nAmount:" << endl;
			cin>> Amount;
			double NewBal = Bal - Amount;
			
			//check if the balance goes below zero
			if (NewBal < 0){
			cout<< "\nYour balance cannot be lower than 0.";
			return 0;
			}
			
			// print out the new balance
			cout<< "\nYour new balance is: " << NewBal << endl;
			cout<< "\nThank you for using the system!";
			break;
			}
			
		// Deposit
		case 2:
			if (Opt==2){
			cout<< "\nHow much amount you want to deposit in your account?"<< endl;
			double Amount2;
			cout<< "\nAmount: "<< endl;
			cin>> Amount2;
			double NewBal2 = Amount2 + Bal;
			cout<< "\nYour new balance is: " << NewBal2 << endl;
			cout<< "\nThank you for using the system!";
			break;
			}
			
		// Exit program
		case 3:
			return 0;
			
			cout<< "\nThank you for using the system!";
		
		// Instructs program to close if none of the options are choses properly
		default: 
			cout << "\nPlease enter a valid option: ";
			break;
	}	

return 0;
}
