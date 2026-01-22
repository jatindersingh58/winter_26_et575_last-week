/*
Jatinder Singh
January 20 2026
Lab 16, arrys, pointer and reference
*/

#include<iostream>
#include<cmath>
#include<cstdlib>
#include<time.h>

#include "lab16_singh_function.cpp"

using namespace std;



int main()
{
    cout<<"\n ------Example 1 : 1D array ------"<<endl;
    array1();


cout<<"\n ------Example 2: array with an initial value ------"<<endl;
char_array();

cout<<"\n ------Example 3 : array with initial value ------"<<endl;
cout<< "average age " <<avg_age()<<endl;


cout<<"\n ------Example 4 : finding the size of an array ------"<<endl;
cout<<" Size of Array "<<size_array()<<endl;


cout<<"\n ------Example A ------"<<endl;

exercise_a();

cout<<"\n ------Example 5 : pointer and reference ------"<<endl;
pointer_ref();

cout<<"\n ------Example 6 : loop in an array ------"<<endl;
loop_array();

cout<<"\n ------Example 7 : passing an array into a function------"<<endl;
int scores [] = {90, 34, 65};
int sizescores = (sizeof(scores)/sizeof(scores[0]));
// call function
print_array(scores, sizescores);


cout<<"\n ------Example 8: passing an array into a function------"<<endl;

// declare the array

int numbers_size = 4;
int numbers[numbers_size];

// call function to populate the array
populatearray(numbers, numbers_size);

// call function to print values in an array
print_array(numbers, numbers_size);

cout<<"\n ------Example 9 : application in an array------"<<endl;

int greatest_num = max_number(numbers, numbers_size);

// testing : cout<<greatest_num<<endl;

print_max(greatest_num);



cout<<"\n ------exercise b ------"<<endl;

// declare array
const int ARRAY_SIZE = 10;
int even_numbers[ARRAY_SIZE];


// seed random number generator to use current time and different seed
srand(time(0));


// call functions
fill_array(even_numbers, ARRAY_SIZE);
int count = even_num(even_numbers, ARRAY_SIZE);
print_even_count(count);



return 0;
}