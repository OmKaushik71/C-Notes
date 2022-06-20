#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
// FOrward declaration; so  that the compiler knows that class data is present.
class data;

class calculate
{
public:
    void sum(data, data); // we can only declare that it will take input as obj. of 'data' but cannot define because we haven't declared what data members the class 'data' contains.
};

class data
{
    int a, b;

public:
    friend class calculate; // now the entire 'calculate' class is friend and so is every function inside it.
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << a << endl
             << b << endl;
    }
};
// and finally 'sum' is defined after it is declared as friend function.
void calculate::sum(data o1, data o2)
{
    cout << o1.a + o2.a << endl
         << o1.b + o2.b << endl;
}

int main()
{
    data o1, o2;
    o1.setdata(1, 2);
    o2.setdata(2, 1);
    calculate c1;
    c1.sum(o1, o2);
    return 0;
}


// In the above example, we declared the entire class as friend to avoid doing the same to every function present inside it individually.