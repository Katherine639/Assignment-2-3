#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream Inputfile;
	Inputfile.open("FrzBoil.dat"); 		// Open an input file
	if(!Inputfile)
	{
		cout << "Error opening file.\n";
	}

	int Temp;
	char Freeze, Boil;

	// Ask the user to enter a temperature.
	cout << "\nThis program reads temperatures from file \"FrzBoil.dat\"\n"	   
		 << "and reports which of Ethyl alcohol, Mercury, Oxygen and\n"
		 << "Water will freeze and boil at those temperatures.\n\n";
		
	Inputfile  >> Temp;

    if (Temp <= -362)
		Freeze = 'O';
	else if (Temp < -306)
		Freeze = 'E';
	else if (Temp <= -173)
	{
		Freeze = 'E';
		Boil = 'O';
	}	
	else if (Temp <= -38)
	{
		Freeze = 'M';
		Boil = 'O';
	}	
	else if (Temp <= 32)
	{
		Freeze = 'W';
		Boil = 'O';
	}	
	else if (Temp > 32 && Temp < 172)
		Boil = 'O';	
	else if (Temp >= 676)
		Boil = 'M';
	else if (Temp >= 212)
		Boil = 'W';	
	else if (Temp >= 172)
		Boil = 'E';
	switch(Freeze)
	{
		case 'O' : cout << "Oxygen, ";
		case 'E' : cout << "Ethyl alcohol, ";
		case 'M' : cout << "Mercury and ";    
		case 'W' : cout << "Water will freeze. ";
	}
	switch(Boil)
	{
		
		case 'M' : cout << "Mercury, ";
		case 'W' : cout << "Water, ";
		case 'E' : cout << "Ethyl alcohol and ";
		case 'O' : cout << "Oxygen will boil ";
	}
	cout << "at " << Temp << "(F).\n\n";

	Inputfile  >> Temp;

	if (Temp <= -362)
		Freeze = 'O';
	else if (Temp < -306)
		Freeze = 'E';
	else if (Temp <= -173)
	{
		Freeze = 'E';
		Boil = 'O';
	}	
	else if (Temp <= -38)
	{
		Freeze = 'M';
		Boil = 'O';
	}	
	else if (Temp <= 32)
	{
		Freeze = 'W';
		Boil = 'O';
	}	
	else if (Temp > 32 && Temp < 172)
		Boil = 'O';	
	else if (Temp >= 676)
		Boil = 'M';
	else if (Temp >= 212)
		Boil = 'W';	
	else if (Temp >= 172)
		Boil = 'E';
	switch(Freeze)
	{
		case 'O' : cout << "Oxygen, ";
		case 'E' : cout << "Ethyl alcohol, ";
		case 'M' : cout << "Mercury and ";    
		case 'W' : cout << "Water will freeze. ";
	}
	switch(Boil)
	{
		
		case 'M' : cout << "Mercury, ";
		case 'W' : cout << "Water, ";
		case 'E' : cout << "Ethyl alcohol and ";
		case 'O' : cout << "Oxygen will boil ";
	}
	cout << "at " << Temp << "(F).\n\n";

	Inputfile  >> Temp;

	if (Temp <= -362)
		Freeze = 'O';
	else if (Temp < -306)
		Freeze = 'E';
	else if (Temp <= -173)
	{
		Freeze = 'E';
		Boil = 'O';
	}	
	else if (Temp <= -38)
	{
		Freeze = 'M';
		Boil = 'O';
	}	
	else if (Temp <= 32)
	{
		Freeze = 'W';
		Boil = 'O';
	}	
	else if (Temp > 32 && Temp < 172)
		Boil = 'O';	
	else if (Temp >= 676)
		Boil = 'M';
	else if (Temp >= 212)
		Boil = 'W';	
	else if (Temp >= 172)
		Boil = 'E';
	switch(Freeze)
	{
		case 'O' : cout << "Oxygen, ";
		case 'E' : cout << "Ethyl alcohol, ";
		case 'M' : cout << "Mercury and ";    
		case 'W' : cout << "Water will freeze. ";
	}
	cout << "at " << Temp << "(F).\n\n";

	Inputfile  >> Temp;

	if (Temp <= -362)
		Freeze = 'O';
	else if (Temp < -306)
		Freeze = 'E';
	else if (Temp <= -173)
	{
		Freeze = 'E';
		Boil = 'O';
	}	
	else if (Temp <= -38)
	{
		Freeze = 'M';
		Boil = 'O';
	}	
	else if (Temp <= 32)
	{
		Freeze = 'W';
		Boil = 'O';
	}	
	else if (Temp > 32 && Temp < 172)
		Boil = 'O';	
	else if (Temp >= 676)
		Boil = 'M';
	else if (Temp >= 212)
		Boil = 'W';	
	else if (Temp >= 172)
		Boil = 'E';
	switch(Freeze)
	{
		case 'O' : cout << "Oxygen, ";
		case 'E' : cout << "Ethyl alcohol, ";
		case 'M' : cout << "Mercury and ";    
		case 'W' : cout << "Water will freeze. ";
	}
	switch(Boil)
	{
		
		case 'M' : cout << "Mercury, ";
		case 'W' : cout << "Water, ";
		case 'E' : cout << "Ethyl alcohol and ";
		case 'O' : cout << "Oxygen will boil ";
	}
	cout << "at " << Temp << "(F).\n\n";	

	Inputfile  >> Temp;
	
	if (Temp > 32 && Temp < 172)
		Boil = 'O';	
	else if (Temp >= 676)
		Boil = 'M';
	else if (Temp >= 212)
		Boil = 'W';	
	else if (Temp >= 172)
		Boil = 'E';
	
	switch(Boil)
	{
		
		case 'M' : cout << "Mercury, ";
		case 'W' : cout << "Water, ";
		case 'E' : cout << "Ethyl alcohol and ";
		case 'O' : cout << "Oxygen will boil ";
	}
	cout << "at " << Temp << "(F).\n\n";

    Inputfile  >> Temp;
	
	if (Temp > 32 && Temp < 172)
		Boil = 'O';	
	else if (Temp >= 676)
		Boil = 'M';
	else if (Temp >= 212)
		Boil = 'W';	
	else if (Temp >= 172)
		Boil = 'E';
	
	switch(Boil)
	{
		
		case 'M' : cout << "Mercury, ";
		case 'W' : cout << "Water, ";
		case 'E' : cout << "Ethyl alcohol and ";
		case 'O' : cout << "Oxygen will boil ";
	}
	cout << "at " << Temp << "(F).\n\n";

    Inputfile  >> Temp;
	
	if (Temp <= -362)
		Freeze = 'O';
	else if (Temp < -306)
		Freeze = 'E';
	else if (Temp <= -173)
	{
		Freeze = 'E';
		Boil = 'O';
	}	
	else if (Temp <= -38)
	{
		Freeze = 'M';
		Boil = 'O';
	}	
	else if (Temp <= 32)
	{
		Freeze = 'W';
		Boil = 'O';
	}
	else if (Temp > 32 && Temp < 172)
		Boil = 'O';	
	else if (Temp >= 676)
		Boil = 'M';
	else if (Temp >= 212)
		Boil = 'W';	
	else if (Temp >= 172)
		Boil = 'E';
	switch(Freeze)
	{
		case 'O' : cout << "Oxygen, ";
		case 'E' : cout << "Ethyl alcohol, ";
		case 'M' : cout << "Mercury and ";    
		case 'W' : cout << "Water will freeze. ";
	}
	switch(Boil)
	{
		
		case 'M' : cout << "Mercury, ";
		case 'W' : cout << "Water, ";
		case 'E' : cout << "Ethyl alcohol and ";
		case 'O' : cout << "Oxygen will boil ";
	}
	cout << "at " << Temp << "(F).\n\n";

    Inputfile  >> Temp;
	
	if (Temp > 32 && Temp < 172)
		Boil = 'O';	
	else if (Temp >= 676)
		Boil = 'M';
	else if (Temp >= 212)
		Boil = 'W';	
	else if (Temp >= 172)
		Boil = 'E';
	
	switch(Boil)
	{
		
		case 'M' : cout << "Mercury, ";
		case 'W' : cout << "Water, ";
		case 'E' : cout << "Ethyl alcohol and ";
		case 'O' : cout << "Oxygen will boil ";
	}
	cout << "at " << Temp << "(F).\n\n";

	Inputfile.close();
	cout << "File closed";
	return 0;	
}