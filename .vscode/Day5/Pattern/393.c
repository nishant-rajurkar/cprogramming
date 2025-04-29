
#include<stdio.h>
int main()
{
   for(int r=4;r>=1;r--)
   {
       for(int k=4;k>=r;k--)
       {
           printf(" ");
       }
       for(int c=r;c>=r;c--)
       {
            
            {
                printf(" %d ",r);
            }
       }
       printf("\n");
   }
}