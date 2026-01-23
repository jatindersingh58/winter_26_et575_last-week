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
// check winning ticket with user ticket to see how many numbers match
int checkWinner(int *winning_array, int *user_array, int ARRAY_SIZE){
   int countmatches = 0;
    for(int i = 0; i<ARRAY_SIZE; i++){
        if ((winning_array[i] == user_array[0]) || (winning_array[i] == user_array[1]) || (winning_array[i] == user_array[2]) || (winning_array[i] == user_array[3]) || (winning_array[i] == user_array[4]) || (user_array[i] == winning_array[0]) || (user_array[i] == winning_array[1]) || (user_array[i] == winning_array[2]) || (user_array[i] == winning_array[3]) || (user_array[i] == winning_array[4])){
            countmatches ++;
        }
    }
    return countmatches;
}

// testing
//void print_testing(int *winning_array, int ARRAY_SIZE){
//    for(int i = 0; i<ARRAY_SIZE; i++){
//        cout<<winning_array[i]<<"\t";
//    }
//    cout<<endl;
//}


// print results
void printResult(int *winning_array, int *user_array, int matches, int ARRAY_SIZE){
    for(int i = 0; i<ARRAY_SIZE; i++){
        cout<<winning_array[i]<<"\t";
        cout<<"The winning ticket numbers are: "<<*winning_array<<endl;
    }
    cout<<endl;
   for(int i = 0; i<ARRAY_SIZE; i++){
      cout<user_array[i]<<"\t";
         cout<<"Your ticket numbers are: "<<*user_array<<endl;
      }
   cout<<endl;

   cout<<"You have "<<matches<<" matching numbers."<<endl;
}


