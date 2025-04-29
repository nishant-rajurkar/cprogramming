#include<stdio.h>
int main()
{
    for(int i=1;i<=7;i++)
   {
       for(int k=7;k>=i;k--)
       {
           printf("  ");
       }
       for(int j=i;j>=1;j--)
       {
           if(i%2!=0)
           {
            printf(" %c ",j+64);
           }
       }
       printf("\n");
   }
 }