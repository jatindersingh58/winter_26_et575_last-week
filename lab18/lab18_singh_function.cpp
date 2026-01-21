/*
Jatinder Singh
January 21 2026
Lab 18 console faliure, IO files
*/

#include<iostream>
#include<cmath>
#include<cstdlib>
#include<time.h>


using namespace std;


// example 1: console failure flags
// function to check if an input, cin, is the proper data type
void checknumber(){
    int num;
    cout<<"Enter a number ";
    cin>>num;
    if (cin.fail()) 
        cout<< "Error! input dismatched data type! "<<endl;
    else
        cout<<" Entered number is: "<<num<<endl;


        cin.clear();
        cin.ignore(1000, '\n');
        cout<<" END OF FUNCTION"<<endl;
            
}


// example 2: cosole faliure to validate a data type
float validatenumber(){
    float n;
    bool isnotvalid = false;
    do{
        cout<<"Enter a number: ";
        cin>>n;
        isnotvalid = cin.fail();
        cin.clear();
        cin.ignore(10000, '\n');
    } while (isnotvalid);
  
    return n;
}