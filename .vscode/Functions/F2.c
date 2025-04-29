#include<stdio.h>
int sub(int a,int b)
{
   int c;
   c=a-b;
   return c;
}
int main()
{
   int r;
   r=sub(4,2);
   printf("%d",r);
}