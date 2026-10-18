#include<iostream>
using namespace std;

class PPA
{
    public:
        int no1;
        int no2;


        //Default Constructor
        
        PPA()
        {
            cout<<"inside default constructor\n";
        }

        //Parametrised constructor

         PPA(int a,int b)
        {
            cout<<"inside parametrised constructor\n";
        }

        ~PPA()
        {
            cout<<"Inside destructor\n";
        }
     
};
int main()
{
    PPA pobj1;
    PPA pobj2(11,21);

    return 0;
}