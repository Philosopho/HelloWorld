#include <iostream>
using namespace std;

int main (){
	//Lapeiretta, Alex
	//CS111 22C Homework 3
	//Part A
	
	int finaln,start;
	
	cout << "Please enter a number greater than 0 and less than 20: ";
	cin >> finaln;

	start = 1;
	while (finaln <= 0 || finaln >= 20){
		cout << "Invalid number. Please enter a number between 0 and 20: ";
		cin >> finaln;
	}
	if(finaln > 0 && finaln < 20){ 
		cout << "Miles\t" << "Kilometers" << endl;
		cout << "\t" << endl;
		while (finaln > 0 && finaln < 20 && start <= finaln){
			cout << start << "\t" << start * 1.609 << endl;
			cout << "\t" << endl;
			start++;
		}
	}
	    
	// Part B
	int digits, digits2;

	cout << "Please enter two positive two-digit integers: ";
	cin >> digits >> digits2;
	
	if (digits >= 10 && digits < 100 && digits2 < 100 && digits2 >= 10){
			if (digits >= digits2){
				cout << "The absolute difference of the numbers " << digits << " and " << digits2 << " is " << digits - digits2 << "." << endl;
			}
			else {
				cout << "The absolute difference of the numbers " << digits << " and " << digits2 << " is " << digits2 - digits << "." << endl;
			}
	}
	while (digits < 10 || digits > 99 || digits2 > 99 || digits2 < 10){
		cout << "Input is illegal. Try again or press 0 to exit: ";
		cin >> digits;
		if (digits == 0){
			cout << "Program terminated. ";
			return 0;
		}
		else		
			cin >> digits2;
		if (digits >= 10 && digits < 100 && digits2 <= 99 && digits2 >= 10){
			if (digits >= digits2){
				cout << "The absolute difference of the numbers " << digits << " and " << digits2 << " is " << digits - digits2 << "." << endl;
			}
			else {
				cout << "The absolute difference of the numbers " << digits << " and " << digits2 << " is " << digits2 - digits << "." << endl;
			}
		}
	}
	//part C
		int height;

	cout << "Enter a positive odd integer between 8 and 20: ";
	cin >> height;

	while (height <= 8 || height >= 20 || height % 2 == 0){
		cout << "Invalid number! Please enter an odd positive number between ";
		cout << "8 and 20: ";
		cin >> height;
	}
	for (int r = 1; r <= height; r++){
		cout << " ";
		for (int c = 1; c <= height; c++){
			if(r == .5 * (height + 1)){
				if (c < (.5 * (height + 1))) cout << "X";
				if (c == (.5 * (height + 1))) cout << "*";
				if (c > (.5 * (height + 1))) cout << "+";
			}
			else{ 
				if (c == (.5 * (height + 1))) cout << "&";
				else if ((r == c) || (c == (height + 1) - r)) cout << "*";
				else cout << " ";
			}
		}
			cout << endl;
	}
		 			
	   return 0;
}

