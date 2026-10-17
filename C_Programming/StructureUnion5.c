#include<stdio.h>
#pragma Pack(1)


struct demo
{
    int i;
    float f;
    struct Hello
    {
        int no;
        float marks;

    }hobj;

};


int main()
{
    struct demo dobj;
    

    printf("%d\n",sizeof(dobj));

    dobj.i=11;
    dobj.f=3.14f;
    
    dobj.hobj.no=21;
    dobj.hobj.marks=44.56f;

   // printf("%d\n",dobj.i);


    return 0;
}