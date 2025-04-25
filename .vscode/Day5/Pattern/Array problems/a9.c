#include<stdio.h>
int main()
{
   int a[3]={10,20,20};
   for(int i=0;i<3;i++)
   {
       printf(" %d ",a[i]);
   }
   printf("\n");
   if(a[1]==a[2])
   {
        printf("true");
   }
}