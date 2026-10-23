#include<iostream>
using namespace std;

class BaseA
{
    public:
        int i,j;

        BaseA()
        {
            cout<<"Inside BaseA Constructor\n";
        }

        
        ~BaseA()
        {
            cout<<"Inside BaseA denstructor\n";
        }

        void fun()
        {
            cout<<"Inside fun BaseA\n";
        }
};

class BaseB 
{
    public:
        int x,y;

        BaseB()
        {
            cout<<"Inside BaseB Constructor\n";
        }

       ~ BaseB()
        {
            cout<<"Inside BaseB destructor\n";
        }
        void gun()
        {
            cout<<"Inside gun BaseB\n";
        }
};

class Derived:public BaseA,BaseB
{
    public:
        int a;

        Derived()
        {
            cout<<"Inside Derived Constrcutor\n";
        }

       ~ Derived()
        {
            cout<<"Inside Derived destrcutor\n";
        }

        void sun()
            {
                cout<<"Inside Derived Sun\n";
            }
        
};
int main()
{

  
    Derived dobj;



  


}