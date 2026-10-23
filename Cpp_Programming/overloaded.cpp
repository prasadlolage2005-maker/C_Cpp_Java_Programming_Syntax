#include<iostream>
using namespace std;

class base
{
    public:
        void fun()
        {
            cout<<"Inside Base fun\n";
        }
        void fun(int i)
        {
            cout<<"inside overlaoded fun\n";
        }
};

int main()
{

    base bobj;
    bobj.fun();
    bobj.fun(11);

    return 0;
}