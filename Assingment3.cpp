//  Programming Lab: Chapter 3
//
//  This program asks for a principal, annual interest rate, number of times the interest rate is componuded 
//  and calculates the new balance.
// 
//  Author: Madeline Weber 
#include <iostream>
#include <cmath>  // Needed for the pow function
#include <iomanip> // Header file needed to use setprecision
using namespace std;

int main()
{
	double finalBalance, interestRate, principalNumber, x, interestNumber, initialRate;  
	int timesCompounded; // Declare variables
	
	// Ask for user input for principalNumber, interestRate, and timesCompounded
	cout << "Please enter the starting balance in the account: \n";
	cin >> principalNumber; 
	cout << "Please enter the annual interest rate: \n";
	cin >> initialRate;
	cout << "Please enter the number of times the interest is compounded: \n";
	cin >> timesCompounded;
	
	interestRate = initialRate * .01;
	x = 1 + interestRate/timesCompounded;
	x = pow( x, timesCompounded );
	finalBalance = principalNumber * x;
	interestNumber = finalBalance - principalNumber;
	
	cout << fixed << showpoint << setprecision(2);
	cout << "Interest Rate:      " << initialRate << "%" << endl;
	cout << "Times Compounded:   " << timesCompounded << endl;
	cout << "Principal:         $" << principalNumber << endl;
	cout << "Interest:          $" << interestNumber << endl;
	cout << "Final balance:     $" << finalBalance << endl;
	
	return 0;
}
