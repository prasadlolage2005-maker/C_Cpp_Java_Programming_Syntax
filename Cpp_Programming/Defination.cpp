#include<iostream>
using namespace std;

class Base
{
    public:
        void fun()
        {
            cout<<"inside base fun\n";  //Defination
        }

        void gun()
        {
            cout<<"Inside Base gun\n";
        }
};

int main()
{
    Base bobj;

    bobj.fun();
    bobj.gun();
    return 0;

    


}