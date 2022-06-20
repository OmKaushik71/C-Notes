#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    
    int x = 100;
    int & y = x; // here y is a reference variable and will have same value as x.
    cout<<x<<endl<<y<<endl;
    
    x = x +2;
    cout<<y<<endl<<x;

    return 0;
}