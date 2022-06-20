#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

float volume(int r, int h){
return(3.14*r*r*h);
}
// both the functions have same name but have different arguement inputs.
int volume(int a){
    return a*a*a;
}
// the complier will decide which function to call based upon the inputs given at the time of calling.
// hence the function 'volume' is overloaded.
int main(){
    cout<<"The volume of cylinder of radius 2 and height 5 is "<<volume(2,5)<<endl;
    cout<<"The volume of cube of side 2 is "<<volume(2)<<endl;
    return 0;
}