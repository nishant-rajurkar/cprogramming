#include<stdio.h>
int main()
{
   for(int r=3;r>=0;r--)
   {
       for(int c=3;c>=r;c--)
       {
           printf("%d ",c);
       }
       printf("\n");
   }
   for(int i=3;i>=1;i--)
   {
       for(int j=1;j<=i;j++)
       {
           printf("%d ",j);
       }
       printf("\n");
   }
}