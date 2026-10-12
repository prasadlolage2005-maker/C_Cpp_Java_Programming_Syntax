#include<stdio.h>

/*int Addition(int Value1,int Value2)
{
  int Result=0;
  Result=Value1+Value2;    //Business Logic
  return Result;
};*/

int main()
{

  int Value1=0,Value2=0,Ans=0;

  printf("Enter first Number\n");
  scanf("%d",&Value1);

  printf("Enter Second Number\n");
  scanf("%d",&Value2);

  Ans=Value1+Value2;    //Business Logic
  printf("Addition of Two Numbers is:%d",Ans);  

    return 0;
}