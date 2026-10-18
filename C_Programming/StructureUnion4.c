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

    };

};


int main()
{
    struct demo dobj;

    printf("%d\n",sizeof(dobj));


    return 0;
}