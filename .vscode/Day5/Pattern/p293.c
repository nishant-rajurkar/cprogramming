#include<stdio.h>
int main()
{
   for(int r=1;r<=5;r++)
   {
       for(int c=5;c>=r;c--)
       {
           printf("%c",r+64);
       }
       printf("\n");
   }
}