#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main(){
    int a = 12 , b = 134 , c =1334;
    cout<<setw(4)<<a<<endl;
    cout<<setw(4)<<b<<endl;
    cout<<setw(4)<<c<<endl;

    // setw and endl are manipulators that manipulates the data display.
    // endl adds a new line and setw sets a particular width to the output.
    return 0;
}