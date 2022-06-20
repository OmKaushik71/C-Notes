#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main(){
    int marks[5];
    int *p = marks; // this pointer is assigned the address of marks[0]
    // in the above code write either marks or &marks[0] to assign address

for(int i = 0; i < 5 ; i++){
    cout<<"Enter the value of marks["<<i<<"]"<<endl;
    cin>>marks[i];
}
// *(p++) will make the pointer jump to next element of the array while (*p)++ will increment the value of the element.
for (int i = 0; i < 5; i++)
{
    cout<<*p<<endl;// this will print the value of array element
    p++;// this will assign the pointer to next element of the array.
}

    return 0;
}