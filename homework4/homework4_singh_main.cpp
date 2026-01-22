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

int main(){

// declare the array
const int ARRAY_SIZE = 5;
int array[ARRAY_SIZE];

// seed random number generator to use current time and different seed
srand(time(0));

// call function to populate the array
winningdigits(array, ARRAY_SIZE);




print_testing(array, ARRAY_SIZE);

// new array for user ticket

int user_array[ARRAY_SIZE];

// call function user ticket to collect number from user

userticket(user_array, ARRAY_SIZE);

// print user ticket

print_testing(user_array, ARRAY_SIZE);
return 0;
}