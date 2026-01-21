/*
Jatinder Singh
January 20 2026
Lab 16, arrys, pointer and reference
*/

#include<iostream>
#include<cmath>
#include<cstdlib>
#include<time.h>

#include "homework4_singh_function.cpp"

using namespace std;

int main (){

// declare the array

int array_size = 5;
int array[array_size];

// call function to populate the array
winningdigits (array, array_size);
int winningdigits[array_size];

// call user ticket function to get user values
userticket (array, array_size);
int userticket [array_size];


// call checkWinner for how many numbers match
int matches = checkWinner(winningdigits, userticket, array_size);  // how come we dont put int before matches

// call function to print
printResult(winningdigits, userticket, matches, array_size);





return 0;
}