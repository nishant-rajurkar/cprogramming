#include<stdio.h>
int mul(int a,int b)
{
   int c;
   c=a*b;
   return c;
}
int main()
{
   int r;
   r=mul(2,4);
   printf("%d",r);
}