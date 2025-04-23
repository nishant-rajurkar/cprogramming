#include<stdio.h>
int main()
{
   for(int r=5;r>=4;r--)
   {
       for(int c=5;c>=1;c--)
       {
           printf("%c",r+64);
       }
       printf("\n");
   }
   for(int r=2;r>=1;r--)
   {
       for(int c=5;c>=1;c--)
       {
           printf("%c",r+64);
       }
       printf("\n");
   }
}