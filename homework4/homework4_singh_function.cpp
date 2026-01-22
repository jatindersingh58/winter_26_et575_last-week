/*
Jatinder Singh
January 21 2026
homework 4
*/

#include<iostream>
#include<cmath>
#include<cstdlib>
#include<time.h>

using namespace std;

// declare constant for array size


void winningdigits(int winning_array[], int ARRAY_SIZE){
   for (int i = 0; i<= ARRAY_SIZE; i ++){
   int num;
   bool duplicate;
   do{
   duplicate = false;
   // generate random number between 1 and 19
   srand(time(0));
   num = (rand()%19 +1);
   // Check for duplicates among numbers already placed in the array
            for (int j = 0; j < i; ++j) {
                if (winning_array[j] == num) {
                    duplicate = true;
                    break; // Found a duplicate, need a new number
                }
            }
        } while (duplicate); // Repeat if a duplicate was found
        winning_array[i] = num;
    }
}


// populate array with user ticket numbers
void userticket(int user_array[], int ARRAY_SIZE){
   cout<<"Enter your 5 ticket numbers between 1 and 19: "<<endl;
   for (int i = 0; i<= ARRAY_SIZE; i ++){
   int num;
   bool valid;
   do{
    valid = true;
    cout<< " Number " << (i + 1) << ": ";
    cin>> num;
    if (num < 1 || num > 19){
        cout<<"Invalid entry, please enter a number between 1 and 19: "<<endl;
        valid = false;
    }
    else{
        for (int j = 0; j < i; j++){
            if (user_array[j] == num){
                cout<<"Duplicate number, please enter a different number: "<<endl;
                valid = false;
                break;
            }
        }
    }
 }while (!valid);
 user_array[i] = num;

}



/// check winning ticket with user ticket to see how many numbers match
int checkWinner( int winning_array[], int user_array[], int ARRAY_SIZE){
   int countmatches = 0;
    for(int i = 0; i<ARRAY_SIZE; i++){
        if (winning_array[i] == user_array[i]){
            countmatches ++;
        }
    }
    return countmatches;


// print results
void printResult(int winning_array[], int user_array[], int matches, int ARRAY_SIZE){
    for(int i = 0; i<ARRAY_SIZE; i++){
        cout<<winning_array[i]<<"\t";
        cout<<"The winning ticket numbers are: "<<winning_array[]<<endl;
    }
    cout<<endl;

   for(int i = 0; i<ARRAY_SIZE; i++){
         cout<<user_array[i]<<"\t";
         cout<<"Your ticket numbers are: "<<user_array[]<<endl;
      }
   cout<<endl;

   cout<<"You have "<<matches<<" matching numbers."<<endl;
}


