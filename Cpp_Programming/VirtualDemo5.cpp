#include<iostream>
using namespace std;

#pragma pack(1)
class Base
{
    public:
        int i,j;

        void fun()
         { cout<<"Base fun\n"; }

        void gun()
         { cout<<"Base gun\n"; }

        virtual void sun()
         { cout<<"Base sun\n"; }

        virtual void run()
         { cout<<"Base run\n"; }
       
};    // 16 bytes due to pointer

#pragma pack(1)
class Derived:public Base
{
    public:
        int x;
           void fun()
         { cout<<"Derived fun\n"; }

           void sun()     //by default virtual
         { cout<<"Derived sun\n"; }

             void mun()
         { cout<<"Derived mun\n"; }

             void bun()
         { cout<<"Derived bun\n"; }

};  // 20 bytes due to pointer

int main()
{
    Base *bp = new Derived();

    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derived)<<"\n";

    bp->fun();  //base fun
    bp->gun();  //base gun
    bp->sun();  
    bp->run();
    //bp->mun();  //Error
   // bp->bun();  //error

    return 0;
}