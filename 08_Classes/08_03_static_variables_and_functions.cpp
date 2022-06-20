#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
class xyz{
    int i;
    static int count; // static data member have same value for all objects.
    public:
    void getdata(){ // this non static function can access both static and non static data members and methods.
        cout<<"Enter the value of i"<<endl;
        cin>>i;
        count++;
    }
    void display(){
        cout<<"The value of i is "<<i<<endl;
        cout<<"The value of count is "<<count<<endl; 
    }
    // static data methods can only access static members or methods.
    static void getCount(){
        cout<<count<<endl;
    }
};
// static data members are declared outside the class as well.
int xyz:: count; // the default value is 0.
int main(){
   class xyz a,b,c;
   a.getdata();
   a.display();

   b.getdata();
   b.display();

   c.getdata();
   c.display();
   // static functions can be called without objects
   xyz::getCount();
   
    return 0;
}