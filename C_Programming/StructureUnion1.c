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
    printf("%d\n",sizeof(struct demo));

    return 0;
}