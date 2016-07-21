/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 6th, 2016, 9:03 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float numGal;
    float numMilesF;
    float numMilesG;
    //Input Data
    cout << "Enter the number of gallons of gas the car can hold? " << endl;
    cin >> numGal;
    cout << "Enter the number of miles it can be driven on a full tank? "<< endl;
    cin >> numMilesF;
    
    //Process the Data
    numMilesG = numMilesF/numGal;
    //Output the processed Data
    cout << "Disply the numer of miles that may be driven per gallon of gas."<< endl;
    cout << numMilesG;
    //Exit Stage Right!
    return 0;
}