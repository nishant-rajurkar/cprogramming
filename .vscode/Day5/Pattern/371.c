#include<stdio.h>
int main()
{
  for(int i=0;i<=3;i++)
  {
     for(int k=3;k>=i;k--)
     {
        printf("  ");
     }
     for(int h=i;h>=1;h--)
     {
        printf("%d ",h);
     }
     for(int j=0;j<=i;j++)
     {
        printf("%d ",j);
     }
     printf("\n");
  }
}