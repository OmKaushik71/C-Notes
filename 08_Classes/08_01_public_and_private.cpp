#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
class employee
{

private: // these members cannot be accessed outside of the class
    int a, b;
// be default the members of a class are private
public: // these members can be accessed outside of the class using objects.
    int c, d;
    void getData(int, int); // the function is only declared here.
    void display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
    }
};
/* to define the function declared in any class :
function_type class_name :: function_name(arguements){
    code
}
*/
void employee ::getData(int x, int y)
{
    a = x; // a and b are the private members of the employee class
    b = y;
}
// this function can still access private members even after being defined outside of class because it was declared as a member of class.
int main()
{
    employee o;
    o.getData(1, 2); // private members can be accessed only by the function of that class.
    o.c = 3;         // public members can directly be used using the object of that class.
    o.d = 4;
    o.display();
    return 0;
}
// data members cannot be initialised to some values in a class , they can only be declared.
// public functions can be used to initialise the data members to some value.