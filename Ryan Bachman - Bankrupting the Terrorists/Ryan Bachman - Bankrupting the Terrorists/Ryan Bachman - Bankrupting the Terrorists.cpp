// Ryan Bachman - Bankrupting the Terrorists.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Ryan Bachman
// CSC215 C/C++ Programming
// University of Advancing Technology
// Using references to hack and bankrupting the terrorists.
// November 04, 2018

// Preprocessor directives
#include "pch.h"
#include <iostream>

// Global declarations
using namespace std;

// Function prototypes
// Normal transaction uses non-reference parameters.
void normalTransaction(int x, int y);
// Hacked transaction uses reference parameters.
void hackedTransaction(int& x, int& y);

// Main function
int main()
{
    int terroristFunds = 50000000;
	int coffeeShopFunds = 3;

	// This welcomes the user to the bank and outputs the starting amount each business has in it's account.
	cout << "Welcome to International Bank of Definitely Not Terrorists.\n";
	cout << "Hello Joe's Coffee Shop. You currently have : $" << coffeeShopFunds << "\n";
	cout << "Hello super shady organization. You currently have : $" << terroristFunds << "\n\n";

	// Calls the normalTransaction function and displays amount each business has in it's account afterwards.
	cout << "Fulfilling your normal transaction. Please wait...\n";
	normalTransaction(coffeeShopFunds, terroristFunds);
	cout << "Transaction completed Joe's Coffee Shop. You now have : $" << coffeeShopFunds << "\n";
	cout << "Transaction completed shady individual. You now have : $" << terroristFunds << "\n\n";

	// Calls the hackedTransaction function and displays amount each business has in it's account afterwards.
	cout << "Fulfilling your hacked transaction. Please wait...\n";
	hackedTransaction(coffeeShopFunds, terroristFunds);
	cout << "Transaction completed Joe's Coffee Shop. You now have : $" << coffeeShopFunds << "\n";
	cout << "Transaction completed shady individual. You now have : $" << terroristFunds << "\n";

	// Returns 0 to end the program.
	return 0;
}

// This function uses non-referenced parameters. That being said, X and Y go out of scope
// -- when the function ends and nothing will happen to the accounts.
// X is coffeeShopFunds.
// Y is terroristFunds.
void normalTransaction(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

// This function uses referenced parameters. That being said, the argument variable can be
// -- changed from within the function because it uses references.
// X is coffeeShopFunds.
// Y is terroristFunds.
void hackedTransaction(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}