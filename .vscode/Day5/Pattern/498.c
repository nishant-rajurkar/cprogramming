 #include<stdio.h>
 int main()
 {
   for(int r=4;r>=1;r--)
   {
      for(int k=r;k>=1;k--)
      {
         printf("  ");
      }
      for(int c=4;c>=r;c--)
      {
         printf("%c ",c+64);
      }
      printf("\n");
   }
   for(int i=2;i<=4;i++)
    {
       for(int h=i;h>=2;h--)
       {  
           printf("  ");
       }
       for(int j=4;j>=i;j--)
       {
           printf(" %c",j+64);
       }
       printf("\n");
   }
 }