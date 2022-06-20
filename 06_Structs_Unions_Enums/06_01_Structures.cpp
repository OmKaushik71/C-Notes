#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
// structure is used to store data of different types under a single name
typedef struct employee
{
    int emp_id;
    char intial;
    float salary;
} ep;

int main(){
ep Rahul; // this will be declared as struct employee Rahul , if typedef is not used.
Rahul.emp_id = 1;
Rahul.intial = 'R';
Rahul.salary = 1000;  
// 9 bytes of memory has been utilised by this object 'Rahul'  
cout<<Rahul.emp_id<<endl<<Rahul.intial<<endl<<Rahul.salary<<endl;
    return 0;
}