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
         printf("%d ",c);
      }
      printf("\n");
   }
   for(int n=0;n<=3;n++)
   {
      printf("%d ",n);
   }
   printf("\n");
   for(int i=3;i>=1;i--)
    {
       for(int k=i;k<=3;k++)
       {  
           printf("  ");
       }
       for(int j=1;j<=i;j++)
       {
           printf("%d ",j);
       }
       printf("\n");
   }
  
}