#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

class xyz
{
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    friend void sum(xyz); // this will allow the function (declared outside of its scope) to access data members of this class.
};

// this function below needs to access data members and functions from a non-parent class.

void sum(xyz o)
{
    cout << o.a + o.b << endl; // the function cannot directly call data members, it can do so via a object of the class.
}

int main()
{
    xyz o1;
    o1.setdata(1, 2);
    sum(o1); // this function is not a part of the class so it will be called without an object.
    return 0;
}

// in the above example a function named 'sum' was given access using friend function even without declaring it first.
// The same cannot be done with a class.