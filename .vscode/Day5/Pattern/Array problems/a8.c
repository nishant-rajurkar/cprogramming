#include<stdio.h>
int main()
{
   int a[4]={10,50,30,40};
   for(int i=0;i<4;i++)
   {
       printf(" %d ",a[i]);
   }
   printf("\n");
   if(a[1]==20)
   {
        printf("present");
   }
   else
   {
        printf("not present");
   }
}