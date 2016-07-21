#include <iostream>
using namespace std;

int main()
{
	const unsigned int  SEC_IN_DAY = 86400,
						SEC_IN_HR  = 3600,
						SEC_IN_MIN = 60;
	
	unsigned int Days, Hours, Minutes, Seconds;

	// Ask the user to enter a number of seconds.
	cout << "Enter a number of seconds: ";
	cin  >> Seconds;

	// Calculate and display the number of days, hours, minutes and seconds.
	if (Seconds >= SEC_IN_DAY)
	{
		Days = Seconds / SEC_IN_DAY;
		cout << "There is " << Days << " days in " << Seconds << " seconds.\n";
	}
	else if (Seconds >= SEC_IN_HR)
	{
		Hours = Seconds / SEC_IN_HR;
		cout << "There is " << Hours << " hours in " << Seconds << " seconds.\n";
	}
	else if (Seconds >= SEC_IN_MIN)
	{
		Minutes = Seconds / SEC_IN_MIN;
		cout << "There is " << Minutes << " minutes in " << Seconds << " seconds.\n";
	}
	return 0;
	}