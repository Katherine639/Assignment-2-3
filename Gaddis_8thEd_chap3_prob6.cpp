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
    float widget;
    float pallet;
    float totalWeight;
    float numWidgets;
    //Input Data
    cout << "How much does the pallet weight by itself? " <<endl;
    cin >> pallet;
    cout << "How much does the widget weigh? " <<endl;
    cin >> widget; 
    cout << "How much is the total weight of the pallet? " << endl;
    cin >>totalWeight;
    //Process the Data
    numWidgets = (totalWeight- pallet) / widget;
    //Output the processed Data
    cout << "How many widgets were stacked? " <<endl;
    cout << numWidgets;
    //Exit Stage Right!
    return 0;
}