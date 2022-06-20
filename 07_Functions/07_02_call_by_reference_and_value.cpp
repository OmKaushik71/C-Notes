#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
// this function will not change the data of the original variables passed to it.
void swap(int a, int b){// call by value
    int temp = a;
    a = b;
    b = temp;
    
}
// this function will change the data of the actual variables passed to it.
void swapPointer(int *a, int *b){// call by reference
    int temp = *a;
    *a = *b;
    *b = temp;
}
// call by reference by C++ reference variable
void swapReference(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a = 2, b =3;
    swap(a,b);
    cout<<a<<b<<endl;
    swapPointer(&a,&b);// here argument is of type address in case of pointers
    cout<<a<<b<<endl;
    swapReference(a,b);// here we can directly pass our variables in case of reference variables
    cout<<a<<b<<endl;

    return 0;
}
// if you need to change the actual variables, pass their address to the function.