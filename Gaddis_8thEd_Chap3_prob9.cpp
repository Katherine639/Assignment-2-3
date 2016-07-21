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
    float loan;
    float insur;
    float gas;
    float oil;
    float tires;
    float maint;
    float totalYear;
    //Input Data
    cout << "What are the monthly costs of loans payment, insurance, gas, oil, tires, maint";
    cout << endl;
    cin >> loan >> insur >> gas >> oil >> tires >> maint;
    //Process the Data
    totalYear = (loan+insur+gas+oil+tires+maint)*12;
    //Output the processed Data
    cout << "What is the total annual cost of these expenses?" << endl;
    cout << totalYear;
    //Exit Stage Right!
    return 0;
}