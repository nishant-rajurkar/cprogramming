#include<stdio.h>
int main()
{
   for(int r=1;r<=4;r++)
   {
      for(int k=r;k<=4;k++) 
      {
         printf("  ");
      }
      for(int c=1;c<=r;c++)
       {
           printf(" * ");
       }
       printf("\n");
   }
}