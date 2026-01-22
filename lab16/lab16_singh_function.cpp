/*
Jatinder Singh
January 20 2026
Lab 16, arrys, pointer and reference
*/

#include<iostream>
#include<cmath>
#include<cstdlib>
#include<time.h>


using namespace std;

// example 1: 1D array
void array1(){
    int grades[3]; // declare array grades of size 3
    // cout<< " array print = "<<grades; // testing  . prompt the memory location of array1
   
   // initialize the array's value ... manually
   grades[0] = 95; // first value in array grade
   grades[1] = 62; // second value in array grade
   grades[2] = 80; // third value in array grade
   cout<< " 3rd grade = " <<grades[2]; // access the first grade, which has index 0
}

//example 2: declare and initialize an array
void char_array(){
    char symbols[5] = {'%', '#', '!', 'p', '8' };
    cout<< "The fourth symbol is " <<symbols[3]<<endl;
}

// example 3: 
float avg_age(){
    int ages[]= {23, 34, 28};
    return (ages[0]+ ages[1]+ ages[2])/3.0;
}

// example 4: find the size of an array
int size_array(){
    int numbers[] = {2, 5, -3, 0, 1};
    int s = sizeof(numbers)/sizeof(numbers[0]);
    return s;
}


// exercise a
void exercise_a(){
    int* ptr; 
    // we pick an integer type of pointer (ptr) 
    // ptr holds a value of what it is pointing to
    // 0x0 shows it is a hexadecimal number (value that got placed inside when the pointer was created)
    // tell us the value inside of the thing that the pointer is pointing to
    // value is whatever number is stored in address 0
    // holds memory address

    int var = 7; 
    // integer variable with an address of hexadecimal number 0xA
    // give int var a value of 7
    // after the variable gets created, a value of 7 gets placed inside of it
    // if we were to print var, we would get 7

    int foo = 21;
    // foo got placed at address 0xB when the program ran
    // we give int foo a value of 21
    // Foo has a value of 21 and lives at address B
    // if we were to print foo, we would get 21

    ptr = &var;
    // ptr is equal to the address of var
    // the address of var is hexadecimal number A
    // the value stored inside the pointer becomes the address it is pointing to
    // referenced value of the pointer is 7

    ptr = &foo;

    // ptr is equal to the address of foo
    // the address of var is hexadecimal number B
    // the value stored inside the pointer becomes the address it is pointing to
    // referenced value of the pointer is 21

    int& ref = var;
    // a reference is like giving foo or var a different name
    // gives a new way to call that location in memory
    // ref is the same thing as var in this situation
    // if we print ref and var, we will see the value of 7
    // both var and ref are same way to reference the same variable
    // ref cannot be moved .. gets assigned one time and becomes reference to that location in memory
}


// example 5 : pointer and refernce
void pointer_ref(){
    int n = 12;
    char sym = '%';
    string username = "Peterpan123";

    // null pointer, meaning that the pointer does not hold any value yet
    int* pointerint;
    char* pointerchar;
    string* pointerstring = &username;

    // testing: check the pointer
    cout<<pointerstring; // prompt the memory address of the pointer

    // pointer initializes with the memory address of a variable
    pointerint = &n;
    pointerchar = &sym;

    // testing: check the memory of a variable
    cout<< " memory of n = "<<pointerint<<endl;
    cout<< " memory of username = "<<pointerstring<<endl;

    // dereference shows the value of the pointed variable
    cout<< " value of location pointerchar = " <<*pointerchar<<endl;
    
    // pointer allows user to save variable in space without having to 
}

// example 6: loop in an array
void loop_array(){
    const int ages_size = 5;
    int ages[5] = {30, 23, 19, 21, 32};
    for (int i = 0; i< ages_size; i++){
        cout<<ages[i]<<"\t";
    }
    cout<<endl;
}

// example 7 : passing an array into a function
// define a function to print all values in an array
void print_array(int arr [], int sizearray){
    for(int i = 0; i<sizearray; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

// function to find and return the size of an array
void found_size(int arr[]){
   
}

// example 8 : populate an array
void populatearray(int * arr, int arraysize){
    cout<< " Enter "<<arraysize<< " values: ";
    for(int i = 0; i<arraysize; i++){
        cin>>arr[i];
        }
}

// example 9 : application in an array
// function to return the maximum number in an array
int max_number( int* arr, int arraysize){
    int max = arr[0]; // initialize the search for the maximum number pretending that the first number in the array is the maximum number
    for(int i = 0; i<arraysize; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

//function to print result
void print_max(int greatest){
    cout<< " The maximum number is "<<greatest<<endl;   
}





// exercise b

// fill an array size with randomn integeers b/t 1 and 9 inclusive
void fill_array(int *arr, int ARRAY_SIZE){
    for(int i = 0; i<ARRAY_SIZE; i++){
        arr[i] = (rand()%9+1); 
     }
}

// count even numbers
int even_num(int *arr, int ARRAY_SIZE){
    int even_count = 0;
    for(int i = 0; i<ARRAY_SIZE; i++){
        if (arr[i] %2 ==0){
            even_count++;
        }
    }
    return even_count;
}
void print_even_count(int even_count){
    cout<< " The count of even numbers is "<<even_count<<endl;   
}