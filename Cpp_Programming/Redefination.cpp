#include<iostream>
using namespace std;

class Base
{
     public:
        void fun()
        {
            cout<<"Inside base fun\n";
        }
};

class Derived :public Base
{
    public:
        void fun()    //Redefination
        {
            cout<<"Inside Derived Fun\n";
        }
};

int main()
{

    Derived dobj;
    Base bobj;

    bobj.fun();
    dobj.fun();
    return 0;

}