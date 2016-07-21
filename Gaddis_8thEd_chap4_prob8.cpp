#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
	int Num1, Num2, Input, Sum;
	unsigned seed = time(0);			// Random generator seed.

	// Get a "seed" value and random numbers
	srand(seed);
	Num1 = 10 + rand() % 50;
	Num2 = 10 + rand() % 50;

	// Display two random numbers and ask user to enter the sum. 
	cout << "Enter the sum of the following numbers:\n";
	cout << "  " << Num1 << endl;
	cout << "+ " << Num2 << endl;
	cout << "  __\n  ";
	cin  >> Input;

	// Calulate and display the sun of the two random numbers.
	Sum = Num1 + Num2;
	if (Input == Sum)
		cout << "\nCongratulations! " << Input << " is the correct answer.\n";
	else
	{
		cout << "\nIncorrect answer!\n";
		cout << Num1 << " + " << Num2 << " = " << Sum << endl;
	}

	return 0;
}