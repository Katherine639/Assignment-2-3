#include <iostream>
using namespace std;

int main()
{
	double Weight, Mass;

	// Ask user to input the mass of an object.
	cout << "Calculate the weight of an object.\n"
		 << "Enter the object's mass: ";
	cin  >> Mass;

	// Calculate mass.
	Weight = Mass * 9.8;

	// Display weight and messages.
	cout << "This object weights " << Weight << " newtons.\n";
	if (Weight > 1000)
		cout << "It is too heavy!\n";
	else if (Weight < 10)
		cout << "It is too light!\n";	
	return 0;
}