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
const int ARRAY_SIZE = 5;

void winningdigits(int winning_array[], int ARRAY_SIZE){			/// ask to explain parameters					   
   for (int i = 0; i<= ARRAY_SIZE; i ++){
   srand(time(0));
   winning_array[i] = (rand()%19 +1);

   
}

}


// populate array with user ticket numbers
void userticket(int user_array[], int ARRAY_SIZE){
   cout<<"Enter your 5 ticket numbers between 1 and 19: "<<endl;
 for (int i = 0; i<= ARRAY_SIZE; i ++){
    cin>>user_array[i];
    if (user_array[i] < 1 || user_array[i] > 19){
        cout<<"Invalid entry, please enter a number between 1 and 19: "<<endl;
        cin>>user_array[i];
    }
 }

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


