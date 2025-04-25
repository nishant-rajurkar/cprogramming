#include<stdio.h>
int main()
{
   int a[5]={10,20,30,40,50,60};
   for(int i=0;i<5;i++)
   {
       printf(" %d ",a[i]);
   }
   printf("\n");
   int b[4]={5,a[2],a[4],10};
   for(int j=0;j<4;j++)
   {
        printf(" %d ",b[j]);
   }
}