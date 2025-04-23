#include<stdio.h>
int main()
{
   int a=67;
   for(int r=1;r<=4;r++)
   {
      for(int k=r;k<=3;k++)
      {
         printf("  ");
      }
      for(int c=1;c<=r;c++)
      {
         printf("%c ",c+a);
      }
      a--;
      printf("\n");
   }
   a=64;
   for(int i=4;i>=2;i--)
    {
       for(int k=i;k<=4;k++)
       {  
           printf("  ");
       }
       for(int j=2;j<=i;j++)
       {
           printf("%c ",j+a);
       }
       a++;
       printf("\n");
   }
}