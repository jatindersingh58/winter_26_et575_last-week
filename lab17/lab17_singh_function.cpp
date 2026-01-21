/*
Jatinder Singh
January 21 2026
Lab 17 array applications
*/

#include<iostream>
#include<cmath>
#include<cstdlib>
#include<time.h>


using namespace std;


// example 1 : search program
// function to collect up to 10 numbers
// the collection will stop if a negative number or zero is entered

void fillarray (int*arr, int &numberuserindex, int arraysize){
    // declare variables
    int number, index = 0;
    do{
        cout<<"Enter a positive number: ";
        cin>>number;
        if(number > 0 ){
    arr[index] = number;
    index ++;
   }
    }while(number>0 && index < arraysize);

     // update the value of the variable numberuserindex
    numberuserindex = index;
}

//function to prompt the values in an array
void printnumber(int *arr, int listsize){
    for(int i = 0; i < listsize; i++){
        cout<<arr[i]<<"\t ";

    }
    cout<<endl;

}

// function to search for a number in an array
int search(const int*arr, int listsize, int target){
    int index = 0;
    bool found = false;

    while ((!found) && (index<listsize)){
        if(target == arr[index]) 
            found = true;
        else
            index++;
    }
    if(found)
        return index;
    else
        return -1;
}

// example 2 2D array
// function to print all elements in a 2D array
void print2D(int a [][5], int rowsize){
    for(int row = 0; row<rowsize; row++){
        for(int col = 0; col< 5; col++){
            cout<<a[row][col]<<"\t";
               }
               cout<<endl;
    }
}


// function to find and return the number of all positive even numbers
int even2D( int a[][5], int rowsize){
    int sumeven = 0;
    for(int row = 0; row<rowsize; row++){
        for(int col = 0; col<5; col++){
            if(a[row][col]>0 && a[row][col]%2==0)
            sumeven++;
        }
    }
    return sumeven;
}

// function to print results
void printresults(int count){
    cout<<" The number of positive even numbers in the 2D array is: "<<count<<endl;
}