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
    int winning_numbers, winning_index = 0;
    do{ 
        cout<< "Winning digits: "<<endl;
        for (int index = 0; index<= ARRAY_SIZE; index ++){
        winning_numbers = (rand()%19 +1);
        winning_array[index] = winning_numbers;
        }

    }while(winning_array[winning_index] == winning_numbers && winning_index < ARRAY_SIZE);
 
}

// populate array with user ticket numbers
void userticket(int *user_array, int ARRAY_SIZE){
   int usernumber, userindex;
   for (int i = 0; i< ARRAY_SIZE; i ++){
         cout<<"Enter your 5 ticket numbers between 1 and 19: "<<endl;
         cin>>usernumber;
         user_array[i] = usernumber;
    }

}
// testing
void print_testing(int *winning_array, int ARRAY_SIZE){
    for(int i = 0; i<ARRAY_SIZE; i++){
        cout<<winning_array[i]<<"\t";
    }
    cout<<endl;
}

