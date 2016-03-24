#include <iostream>
using namespace std;

int main () {
	int total, n;
	
	int decision;

	cout << "Welcome to NIM. Pick a starting total greater than 9: ";
	cin >> total;

	while(total < 10){
		cout << "This is not a number greater than 9. Enter again: ";
		cin >> total;
	}
	while (true) {
		if ((total % 3) == 2) {
			total = total - 2;	
			cout << "I am subtracting by 2." << endl;
		}
		else{
			total--;
			cout << "I am subtracting by 1." << endl;
		}
		cout << "New total is: " << total << endl;
		if (total == 0){
			cout << "I win!" << endl;
			cout << "Would you like to play again? Type 2 and press ENTER: ";
			cin >> decision;
				if(decision == 2){
				cout << "Let's go again! Pick a new starting total: ";
				cin >> total;
				}
				else{
				cout << "Good game! See you again!";
				return 0;
			}

	    }	
		   
		cout << "Enter num to subtract (1 or 2): ";
		cin >> n;
	
		while(n < 1 || n > 2){
		   cout << "Input must be 1 or 2." << endl;
	   	   cout << "Re-enter: ";
		   cin >> n;
		}	
	 total = total - n;
 	 cout << "New total is " << total << endl;
	 if (total == 0) {
		cout << "You win!" << endl;
   		cout << "Would you like to play again? Type 2 to continue and press ENTER: ";
		cin >> decision;
		if(decision == 2){
			cout << "Let's go again! Pick a new starting total: ";
			cin >> total;
		}
		else{
			cout << "Good game! See you again!";
			return 0;
		}
	 }
	}

}	
