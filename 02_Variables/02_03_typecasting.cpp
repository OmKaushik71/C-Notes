#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    float a = 23.32;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a on typecasting is "<<(int)a; // (int)a and int(a) can be interchanged.
    // This type casting will print 'a' in integer format.
    // Typecasting doesn't change the type of a variable permanently, it does only at the instance it is used.
    return 0;
}