#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
// here the second arguement is initialised, when only one arguement is passed to this function it will take b as 2 by default.
void mulitply(int a , int b = 2){// hence it is of default arguement type
    cout<<a*b<<endl;
}

int main(){
    int a = 4;
mulitply(a);
mulitply(a,3);// but if value of b is passed at the time of calling the previous value will be overwritten.
    return 0;
}