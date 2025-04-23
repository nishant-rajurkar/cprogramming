#include<stdio.h>
int main()
{
   printf("\t1");
   printf("\n");
   for(int i=1;i<3;i++)
   {
      printf("\t%d",i);
   }
   printf("\n");
   for(int i=1;i<4;i++)
   {
      printf("%d\t",i);
   }
}