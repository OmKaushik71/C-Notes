#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
inline int increment(int a){
    a++;
    a*2;
    return a;
}
// this inline keyword will convert the function calling into the code written inside it.
// it works for small functions where code is of few lines.
// otherwise the size of the program will increase.
int main(){
    int a =3;
    cout<<increment(a)<<endl;
    return 0;
}
// the above code will work as 
/*
int main(){
    int a = 3;
    cout<<(a++)*2<<endl;
}
*/
// inline function will make the code behave as if instead of function being called the actual code was written at the place of calling.
