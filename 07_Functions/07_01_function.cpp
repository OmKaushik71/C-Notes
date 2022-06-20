#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
// function prototype
int sum(int, int);
// or int sum(int a, int b);
// function
void g(void);// when a function is not parameterised, void is written to specify that.
int main(){
    int a,b;
cin>>a>>b;
cout<<sum(a,b);
g();
    return 0;
}
void g(){
    cout<<endl<<"Hello world";
}
int sum(int a, int b){
    int c = a+b;
    
    return c;
}