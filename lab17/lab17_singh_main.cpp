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
    return 0;
}