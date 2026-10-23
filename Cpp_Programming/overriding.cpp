#include<iostream>
using namespace std;

class Base
{
    public:
        virtual void fun()
    {
        cout<<"Inside fun\n";
    }

    void gun()
    {
        cout<<"Inside gun\n";
    }
};

int main()
{

    Base bobj;
    bobj.fun();
    bobj.gun();

    return 0;

}