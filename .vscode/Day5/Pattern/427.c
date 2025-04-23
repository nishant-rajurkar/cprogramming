#include<stdio.h>
int main()
{
   for(int r=3;r>=0;r--)
   {
       for(int c=r;c<=3;c++)
       {
           printf("%d ",c);
       }
       printf("\n");
   }
   for(int i=1;i<=3;i++)
   {
       for(int j=i;j<=3;j++)
       {
           printf("%d ",j);
       }
       printf("\n");
   }
}