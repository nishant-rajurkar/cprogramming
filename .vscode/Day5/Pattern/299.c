#include<stdio.h>
int main()
{
   for(int r=1;r<=3;r++)
   {
       for(int k=3;k>=r;k--)
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