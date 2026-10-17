#include<stdio.h>
// 1 2 4 8
#pragma pack(1) 

struct Demo
{
  int i;
  float f;
   
};

int main()
{
      struct Demo Arr[3];

      Arr[0].i=11;
      Arr[0].f=11.0f;

      Arr[1].i=21;
      Arr[1].f=21.0f;
      
      Arr[2].i=51;
      Arr[2].f=51.0f;
      
      printf("%d\n",sizeof(Arr));
      printf("%d\n",Arr[0].i);
      printf("%f\n",Arr[0].f);
    return 0;
}