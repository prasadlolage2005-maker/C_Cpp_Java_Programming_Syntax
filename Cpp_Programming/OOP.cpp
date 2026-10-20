#include<iostream>
using namespace std;

class Arithmetic
{
    public:
        int No1;
        int No2;   
        
        Arithmetic()
        {
            No1=0;
            No2=0;
        }

        Arithmetic(int i,int j)
        {
            No1=i;
            No2=j;
        }
};
int main()
{

    Arithmetic aboj1;
    Arithmetic aboj2(10,11);

    cout<<aboj1.No1<<"\n";
    cout<<aboj1.No2<<"\n";

    cout<<aboj2.No1<<"\n";
    cout<<aboj2.No2<<"\n";
    
    return 0;
}