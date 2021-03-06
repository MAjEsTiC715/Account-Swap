// DOCUMENTATION
// Create a new console project C++ program that uses more than one function.
// Create two functions, one normal transaction, one hacked transaction.
// Print the original funds and balance for both accounts.
// Pass funds in a normal transaction using integers parameters.
// Print the funds and balance showing this normal transaction should change nothing.
// Now pass the account balance by reference to the hacked transaction.
// In the hacked transaction swap the bank balances.
// Print out the new balances.
// Add any more functions that you may need.
// Your main function should control all the other functions.

// AccountSwap.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void hackerSwap(int x, int y);
void agentSwap(int& x, int& y);


int main()
{
	int terroristAccount = 100000000;
	int localAccount = 200;
	cout << "Original values\n";
	cout << "terrorist Account: " << terroristAccount << "\n";
	cout << "local Account: " << localAccount << "\n\n";

	cout << "Calling hackerSwap()\n";
	// Specifically, x is assigned 100000000 and y is 200. 
	// As a result, nothing I do with x and y in the function 
	// hackerSwap() will have any effect on terroristAccount and localAccount
	hackerSwap(terroristAccount, localAccount);
	cout << "Terrorist Account: " << terroristAccount << "\n";
	cout << "Local Account: " << localAccount << "\n\n";

	cout << "Calling agentSwap()\n";
	// This means that x is just another name for terroristAccount,
	// And y is just another name for localAccount. When agentSwap()
	// Executes and x and y exchange values, what really happens
	// is that terroristAccount and localAccount exvhange values
	agentSwap(terroristAccount, localAccount);
	cout << "Terroist Account: " << terroristAccount << "\n";
	cout << "Local Account: " << localAccount << "\n";
    return 0;
}

// This means that when I call hackerSwap() with the following line, copies of
// terroristAccount and localAccount are sent to the parameters, x and y
void hackerSwap(int x, int y)
{
	int temp = x;
		x = y;
		y = temp;
}

// This means that when I call agentSwap() with the follwing line, the parameter
// x will refer to terroristAccount, and the parameter y will refer to localAccount
void agentSwap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

