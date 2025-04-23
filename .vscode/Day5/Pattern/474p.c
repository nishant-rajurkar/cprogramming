#include<stdio.h>
int main()
{
    for(int r=3;r>=0;r--)
    {
        for(int k=0;k<=r;k++) 
        {
            printf("   ");
        }
        for(int c=3;c>=r;c--)
       {
          printf("  %d",c);
       }
       printf("\n");
     }
     for(int i=1;i<=3;i++)
    {
       for(int k=0;k<=i;k++)
       {  
           printf("   ");
       }
       for(int j=3;j>=i;j--)
       {
           printf("  %d",j);
       }
       printf("\n");
   }

}
