#include<stdio.h>
#pragma Pack(1)


struct demo
{
    int i;
    float f;
    double d;

};
int main()
{
    struct demo dobj;

    dobj.i=11;
    dobj.f=12.00f;
    dobj.d=3.14546;

    printf("%d\n",dobj.i);
    printf("%f\n",dobj.f);
    printf("%lf\n",dobj.d);


    return 0;
}