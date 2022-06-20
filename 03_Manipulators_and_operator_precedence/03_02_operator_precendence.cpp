#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int a = 3, b = 4;
    int c = a*5+b-45+98;
    cout<<c;
    // the above will be evaluated as 
    // c = ((((a*5)+b)-45)+98)
    // refer to cppreference.com "operator precendence"
    return 0;
}