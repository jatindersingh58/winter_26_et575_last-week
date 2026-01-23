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

// seed random number generator to use current time and different seed
srand(time(0));

// declare the array
const int ARRAY_SIZE = 5;
int array[ARRAY_SIZE];

// call function to populate the array
winningdigits(array, ARRAY_SIZE);

// print winning digits for testing print_testing(array, ARRAY_SIZE);

// new array for user ticket
int user_array[ARRAY_SIZE];

// call function user ticket to collect number from user
userticket(user_array, ARRAY_SIZE);

// print user ticket print_testing(user_array, ARRAY_SIZE);

//  int for count of winning numbers
int check_winner_count = checkWinner(array, user_array, ARRAY_SIZE);

// print testing info cout<<"You have "<<check_winner_count<<" winning numbers!"<<endl;

// call func to print results
printResult(array, user_array, check_winner_count, ARRAY_SIZE);









return 0;
}