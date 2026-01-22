/*
Jatinder Singh
January 21 2026
Lab 18 console faliure, IO files
*/

#include<iostream>
#include<cmath>
#include<cstdlib>
#include<time.h>

#include "lab18_singh_function.cpp"

using namespace std;



int main()
{

 cout<<"\n ------Example 1 : console faliure flags ------"<<endl;

 // call function
    checknumber();


cout<<"\n ------Example 2 : console failiure to validate a data type------"<<endl;
   float n = validatenumber();
   cout<<" The valid number entered is: "<<n<<endl;  

cout<<"\n ------exercise 1------"<<endl;

int n1 = 20;
int n2 = 30;
int outcome = compute (n1,n2);
cout<<" The result of the computation is: "<<outcome<<endl;
















return 0;
}
