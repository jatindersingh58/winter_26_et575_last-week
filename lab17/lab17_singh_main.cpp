/*
Jatinder Singh
January 21 2026
Lab 17 array applications
*/

#include<iostream>
#include<cmath>
#include<cstdlib>
#include<time.h>

#include "lab17_singh_function.cpp"

using namespace std;



int main()
{

    
    cout<<"\n ------Example 1 : search program ------"<<endl;
   // declare the array
   const int ARRAYSIZE = 10;
   int a [ARRAYSIZE];
   // declare a variable to save the array size
   int listsize;

   //declare a variable to save the target number
   int searchnumber = 10;

   // call function fillarray
   fillarray(a, listsize, ARRAYSIZE);

   // call printnnumber

   printnumber(a, listsize);

    // call the search function
    cout<< " what is the index of "<<searchnumber<< " in the array ? "<<search(a, listsize, searchnumber); 


    cout<<"\n ------Example 2 : 2D array------"<<endl;

    // declare a 2d array
    const int rowsize = 3;
    const int colsize = 5;
    int numbers[rowsize][colsize] = {
        {9, 5, -3, 0, 8}, 
        {-1, 6, 2, },
        {-5, 4, 7, -9}
    };

// call the print2d function
print2D(numbers, rowsize);


// call function even 2d
int counteven = even2D(numbers, rowsize);
cout<<counteven;// testing

printresults(counteven);



cout<<"\n ------Example 3 : working with a 2D and 1D array------"<<endl;

// declare 1 D array
int sumallrows[2] = {0};
// declare 2D array
int arrnumber[][5] = {
    {1, 2, 3, 4, 5},
    {6, 7, 8, 9, 10}
};

// call func
calculatetables(arrnumber, sumallrows);
printtable(sumallrows);




cout<<"\n ------exercise a------"<<endl;

int numbers_size = 5;
int numbers_one[numbers_size];// inititalize values

int smallest_num = min_number(numbers_one, numbers_size);

// testing : cout<<smallest_num<<endl;

print_min(smallest_num);



cout<<"\n ------exercise b ------"<<endl;


// declare array
const int ARRAY_SIZE = 5;
int arrayNumber2D[ARRAY_SIZE][ARRAY_SIZE];
int min = 200;
int max = 150;


// call to fill array with randomn numbers
populate_Array2D(arrayNumber2D, ARRAY_SIZE, ARRAY_SIZE);


// Call function to count the numbers in the array that are between min and max
int totalNumber = range2D(arrayNumber2D, min, max);

// print_result
cout << "\nArray has " << totalNumber << " number(s) between " << min << " and " << max << endl;



    return 0;
}
