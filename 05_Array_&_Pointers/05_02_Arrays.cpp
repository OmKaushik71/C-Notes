#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    // There are two ways to declare arrays
    int arr1[] = {1,2,3,4,5};
    int arr2[5];
    arr2[0] = 1;
    arr2[1] = 2;
    arr2[2] = 3;
    arr2[3] = 4;
    arr2[4] = 5;
    // most common way to print and scan array
    for (int i = 0; i < 5; i++)
    {
        cout<<arr2[i]<<endl;
    }
    
    return 0;
}