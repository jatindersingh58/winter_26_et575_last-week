/*
Jatinder Singh
January 21 2026
homework 4
*/


#include<iostream>
#include<cmath>
#include<cstdlib>
#include<time.h>

#include "homework4_singh_function.cpp"

using namespace std;

int main (){

// declare the array
const int ARRAY_SIZE = 5;
int array[ARRAY_SIZE];

// call function to populate the array
winningdigits (array, ARRAY_SIZE);
int winningdigits[ARRAY_SIZE];
// call user ticket function to get user values
userticket (array, ARRAY_SIZE);
int userticket [ARRAY_SIZE];
// call checkWinner for how many numbers match
int matches = checkWinner(winningdigits, userticket, ARRAY_SIZE);  // how come we dont put int before matches

// call function to print
printResult(winningdigits, userticket, matches, ARRAY_SIZE);





return 0;
}