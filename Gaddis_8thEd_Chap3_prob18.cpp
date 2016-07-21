/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 27, 2016, 9:03 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include<iomanip> //format library
#include<cmath>
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float i, //interest rate %
            pv, //present value in$'s
            n, //number of compounding periods
            fv; //future value in$'s
    char choice;
    //Input Data
    cout <<"Calculate the Future Value by the approximation with the rule of 72" << endl;
    cout <<"Type 1 to input the Present Value in $'s and the Interest Rate in %" << endl;
    cout<< "Type 2 to input the Present Value in $'s and the Number of Years"<<endl;
    cin>>choice;
    
    //Process the Data
    cout <<"Input the Present value";
   if (choice =='1') {
       cout <<" and the Interest Rate in %" << endl;
       cin >> pv,i;
       n=72/i;
       fv=pv*pow((1+i/100),n);
   }
   else {
       cout << " and the Number of Years" <<endl;
       cin >> pv,n;
       i=72/n;
   }
    fv=pv*pow((1+i/100),n);
    //Output the processed Data
    cout << "Compare the rule of 72 to the exact calculation" << endl;
    cout <<" The Present Value = $" <<pv << endl;
    cout << "The Interest Rate = " << i << "%"<<endl;
    cout << "The Number of Years = "<< n<< "(yrs)"<<endl;
    cout <<"$"<< 2*pv << " ~$ " << fv <<endl;
    //Exit Stage Right!
    return 0;
}