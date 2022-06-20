#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;
class binary{
    string s;
    public:
    void read(void);// arguement is of void type
    void check(); // this also means arguement is of void type
    void ones();
    void display();
};
void binary:: read(){
    cout<<"Enter binary number"<<endl;
    cin >> s;
}
void binary:: check(){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')//since we are using a string data type the '' is used 
        {
            cout<<"The binary no. entered is not valid"<<endl;
            exit(0);
        }
        
    }
    
}
void binary::ones(){
    check(); // the check function is nested in this function and is not needed to be called seperately
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if(s.at(i)=='1'){
            s.at(i) = '0';
        }
        
    }
    
}
void binary:: display(){
    cout<<"The binary no. is"<<endl;
    cout<<s<<endl;
}
int main(){
    binary b;
    b.read();
    // b.check();
    b.display();
    b.ones();
    b.display();
    return 0;
}