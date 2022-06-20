#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    
    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;// if this break wasn't written here then all the code below it would have been executed by the compiler when age=18.
    case 22:
    cout<<"You are 22"<<endl;
    break;
    default:
    cout<<"No special case"<<endl;// if there are no matches then a default code is executed.
        break;
    }
    // the basic difference b/w a switch case and loops is that switch case gets activated only for a specific values while a loop runs through entire range given to it, by default.
    return 0;
}