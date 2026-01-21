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


// example 3: working with a 2D and 1D array
// create a function that calculates and returns the sum of all numbers in each row in 2D array (2 by 5)
// the sum will be saved in a new 1D array

void calculatetables(int t[][5], int arraysum[]){
    for( int row = 0; row<2; row++){
        int sumrow = 0;
        for (int col = 0; col<5; col++){
            sumrow+= t[row][col];
        }
        arraysum[row] = sumrow;
        }
}


// function to print result: the sum of all numbers in each row
void printtable(int t[]){
    for(int row = 0; row<2; row++){
        cout<<"row"<<row+1<< " = "<<t[row]<<endl;
    }
    cout<<endl;

}

// Exercise A
//Write a function that finds and returns the minimum value in a one-dimensional array a.

// function to return the minimum number in a 1D array
int min_number( int arr[], int arraysize){
    int min = arr[0]; // initialize the search for the minimum number pretending that the first number in the array is the minimum number
    for(int i = 0; i<arraysize; i++){
        if (arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

//function to print result
void print_min(int smallest){
    cout<< " The minimum number is "<<smallest<<endl;   
}



// Exercise B


void populate_Array2D(int k[][5]{
    for(int row = 0; row<5; row++){
        for (int col = 0; col<5; col++){
            srand(time(0));
            k [row][col] = rand()%255 +1;
        }
    }
}

int range2D(int arr[][5], int min, int max){
    int count =0;
     for(int row = 0; row<5; row++){
        for (int col = 0; col<5; col++){
            if (array[row][col] >= min && arr[row][col] <= max){
                count++;
            }
        }
    }
    return count;
}



