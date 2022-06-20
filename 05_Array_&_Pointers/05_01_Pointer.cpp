#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
    int a = 5;
    int *b = &a;  // b is a pointer.
    int **c = &b; // pointer to pointer
    cout << "Address of a :" << &a << endl;
    cout << "Address of b :" << &b << endl;
    cout << "Address of c :" << &c << endl;
    cout << endl;
    cout << "Value of a :" << a << endl;
    cout << "Value of b :" << b << "(address of a)" << endl;
    cout << "Value of c :" << c << "(address of b)" << endl;
    cout << endl;
    cout << "Now dereferencing first time" << endl;
    cout << "Value of *b :" << setw(10) << *b << "(value of a)" << endl;
    cout << "Value of *c :" << setw(10) << *c << "(value of b)" << endl
         << endl;
    cout << "Dereferencing second time" << endl;
    cout << "Value of **c :" << **c << endl;

    /*
     From the above code we can conclude that,

    a normal variable has 
    1) some value
    2) its own address

    a pointer variable has
    1) value = address of another variable.
    2) its own address
    3) Dereferenced value = value of the variable it is pointing to.

    a pointer to pointer variable has
    1) Value = address of a pointer variable.
    2) its own address
    3) Dereferenced value = address of the variable stored in the pointer it is pointing to.
    4) Double dereferenced value = value of the variable which was pointed by the pointer being pointed by this pointer to pointer variable.
    */
    return 0;
}