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

// exercise a
//Lab exercise 1 description:

//Write a function that perform +, -, *, /, and % operation. 

//the function takes two numbers which are passed to the functions.
//Within the functions, it will collect an operation symbol +, -, *, /, and % and valid the cin flag.
//If the flag fails or an incorrect symbol was entered, the program should ask for another symbol.
//If the flag passes, then perform the operation and return the result.

int compute (int num1, int num2){
    char symbol;
    bool isnotvalid = false;
    int result;
    do{
        cout<<" Enter a symbol (+, -, *, /, or  %): ";
        cin>>symbol;
        isnotvalid = cin.fail() || (symbol != '+' && symbol != '-' && symbol != '*' && symbol != '/' && symbol != '%');
        cin.clear();
        cin.ignore(10000, '\n');
    } while (isnotvalid);

    switch(symbol){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        case '%':
            result = num1 % num2;
            break;
    }
    return result;
}