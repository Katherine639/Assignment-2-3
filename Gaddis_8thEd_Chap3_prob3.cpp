/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 6th, 2016, 9:03 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip> 
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float test1;
    float test2;
    float test3;
    float test4;
    float test5;
    float testAvg;
    //Input Data
    cout << "Input test scores." <<endl;
    cin >> test1 >> test2 >> test3 >> test4 >> test5;
    //Process the Data
     testAvg = (test1+test2+test3+test4+test5)/5;
    //Output the processed Data 
cout << "Average of test is " <<setprecision(1) << testAvg;
    //Exit Stage Right!
    return 0;
}