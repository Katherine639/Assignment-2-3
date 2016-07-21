#include <iostream>
using namespace std;

int main()
{
	unsigned int BooksPurchased;

	// Input the number of books purchased.
	cout << "Please enter the number of books you purchased this\n"
		 << "month, To calculate your monthy awarded points.\n";
	cin  >> BooksPurchased;

	// Display the number of points earned.
	switch (BooksPurchased)
	{
		case 0  : cout << "You have earned 0 points for this month.\n";
					break;
		case 1	: cout << "You have earned 5 points for this month.\n";
					break;
		case 2	: cout << "You have earned 15 points for this month.\n";
					break;
		case 3	: cout << "You have earned 30 points for this month.\n";
					break;
		default : cout << "You have earned 60 points for this month.\n";		
	}
	return 0;
}