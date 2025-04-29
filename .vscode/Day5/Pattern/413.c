#include<stdio.h>
int main()
{
    int a=7;
   for(int r=4;r>=1;r--)
   {
       for(int k=r;k<=4;k++)
       {
           printf("  ");
       }
       for(int c=1;c<=a;c++)
       {
            {
                printf("%c ",r+64); 
            }
       }
       printf("\n");
       a-=2;
    }
}