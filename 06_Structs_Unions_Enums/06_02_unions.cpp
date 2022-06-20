#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
// union offers a better memory management as compared to structures
typedef union employee{
int e_id;// 4 bytes
char intial;// 1 byte
float salary;// 4 bytes
}ep ;
// we can use only one out of three data types declared above.
// compiler will allot 4 bytes for any of its object and then will share this 4 bytes among all three one at a time.
int main(){
    ep rahul;
    rahul.e_id = 1;
    rahul.intial = 'R';
    rahul.salary = 1000;
    cout<<rahul.e_id<<endl<<rahul.intial<<endl<<rahul.salary<<endl;
    // this will print the salary which was declared lastest and a garbage value for the rest.
    return 0;
}