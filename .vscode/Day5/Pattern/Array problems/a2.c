#include<stdio.h>
int main()
{
   int a[5]={10,20,30,40,50};
   int b[5]={10,60,70,80,90};
   for(int i=0;i<5;i++)
   {
       printf(" %d ",a[i]);
   }
   printf("\n");
   for(int j=0;j<5;j++)
   {
       printf(" %d ",b[j]);
   }
    printf("\n");
   if(a[0]==b[0])
   {
       printf("true");
   }
}