#include<stdio.h>
int main()
{
   int a[4]={10,20,30,40};
   for(int i=0;i<4;i++)
   {
       printf(" %d ",a[i]);
   }
   printf("\n");
   printf("after swapping first and last element");
   printf("\n");
   a[0] = a[0]+a[3];
   a[3] = a[0]-a[3];
   a[0] = a[0]-a[3];
   for(int i=0;i<4;i++)
   {
       printf(" %d ",a[i]);
   }
}