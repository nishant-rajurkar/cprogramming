#include<stdio.h>
int main()
{
   for(int r=7;r>=1;r--)
   {
       for(int k=7;k>=r;k--)
       {
           printf(" ");
       }
       for(int c=1;c<=r;c++)
       {
            if(r%2!=0)
            {
                printf(" %c ",c+64);
            }
       }
       printf("\n");
   }
}