#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int facotrial(int n){
    if (n==1 || n == 0)
    {
        return 1;
    }
    
    return n*facotrial(n-1);
}
int fib(int n){
    if(n==0 || n == 1){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}
int main(){
    cout<<facotrial(4);
    cout<<endl<<fib(4);
    return 0;
}