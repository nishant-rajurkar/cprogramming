#include<stdio.h>
int main()
{
for(int i=4;i>=1;i--)
{
   for(int k=i;k<=4;k++)
   {  
       printf("  ");
   }
   for(int j=1;j<=i;j++)
   {
       printf("%d ",i);
   }
   printf("\n");
}
for(int i=4;i>=2;i--)
    {
        for(int j=i;j>=2;j--)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}

