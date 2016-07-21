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
    float numCookies;
    float bagCookies;
    float calories;
    
    float calorieServ;
    float totalCalorie;
    //Input Data
    cout <<  "Input how many cookies are in the bag. " <<endl;
             cin >> bagCookies;
    cout <<"Input the number of cookies eaten. " <<endl;
             cin >> numCookies;
    cout << "Input the number of calories of the bag. " <<endl;
             cin >> calories;
    //Process the Data
    calorieServ = calories/bagCookies;
    totalCalorie = calorieServ*numCookies;
    //Output the processed Data
    cout << "How many calories were consumed? " <<endl;
    cout << totalCalorie;
    //Exit Stage Right!
    return 0;
}