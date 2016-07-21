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
    string name;
    string age;
    string city;
    string college;
    string profession;
    string animal;
    string pet;
    
    //Input Data
    cin >> name >> age >> city >> college >> profession >> animal >> pet;
    //Process the Data
    
    //Output the processed Data
    cout << "There once was a person named " << name << " who lived in " << city << ". ";
    cout << "At the age of " << age << ", " << name << " went to college at " << college << ". ";
    cout << name << " graduated and went to work as a " << profession << ". ";
    cout << "Then, " << name << " adopted a(n) " << animal << " named " << pet <<". ";
    cout << "They both lived happily ever after!" <<endl;
    //Exit Stage Right!
    return 0;
}