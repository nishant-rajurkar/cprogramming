#include<stdio.h>
int main()
{
   int a[3]={7,5,8};
   for(int i=0;i<3;i++)
   {
       printf(" %d ",a[i]);
   }
   printf("\n");
   if(a[0]==7 && a[1]==5)
   {
        printf("5 is just immediately followed by the 7");
   }
   printf("\n");
   int b[3]={1,5,8};
   for(int j=0;j<3;j++)
   {
        printf(" %d ",b[j]);
   }
}