#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main(){
    enum meal{breakfast , lunch , dinner};
    // this will make breakfast as 0 , lunch as 1 and dinner as 2 and so on.
    int a = breakfast;// this will give a value of 0;
    // note that breakfast , lunch and dinner are not variables or const, they are representing 0 , 1 ,2 ....
    meal m1 = lunch;
    cout<<m1<<endl;
 // m1 is an enum object which store 1/lunch;   
    return 0;
}