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
    string month;
    string month2;
    string month3;
    float rain1;
    float rain2;
    float rain3;
    float avgRain;
    //Input Data
    cout << "Enter month " <<endl;
    cin >> month >> month2 >> month3;
    cout << "Enter average rainfall ";
    cin >> rain1 >>rain2 >>rain3;
    //Process the Data
    avgRain = (rain1+rain2+rain3)/3;
    //Output the processed Data
    cout << "The average rainfall for " << month << ", " << month2 << ", and " << month3;
    cout << " is " << avgRain << endl;
    //Exit Stage Right!
    return 0;
}