 #include<stdio.h>
 int main()
 {
   for(int i=1;i<=4;i++)
   {
      for(int k=4;k>=i;k--)
      {
         printf("  ");
      }
      for(int h=2;h<=i;h++)
      {
         printf("%c ",h+63);
      }
      for(int j=i;j>=1;j--)
      {
         printf("%c ",j+64);
      }
      printf("\n");
   }
 }