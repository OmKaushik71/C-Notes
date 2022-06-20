#include <iostream>
#include <conio.h>
using namespace std;
 
 void breakFunction(){
     for (int i = 0; i < 5; i++)
     {
         if (i==3)
         {
             break;// this will terminate the loop here and the loop won't run for any further values of i.
         }
         cout<<i<<endl;
         
     }
     
 }

 void continueFunction(){
     for (int i = 0; i < 5; i++)
     {
         if (i==3)
         {
             continue; // this will make the loop jump to the next iteration and the code below it will be skipped.
         }
         cout<<i<<endl;
         
     }
     
 }
int main()
{
  breakFunction();
  continueFunction();
    return 0;
}