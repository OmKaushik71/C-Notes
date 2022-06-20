#include<iostream>
#include<conio.h>
using namespace std;

int b = 10; // This is a global variable. Defined outside the scope of main

int main(){
    
    int a=1 ,b = 2; // These are local variables. Their scope is within the main function.

    cout<<a<<"\n"<<b<<endl; // This will print the local variable b instead of global variable b.
     
    // The compiler will first check  if b is present within the main function and will use the global variable b if local b is not present.
    
    cout<<"The global b is "<<::b;

    // here scope resolution operator "::" is used to access the global variable b.
    return 0;
}