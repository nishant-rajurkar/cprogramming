#include<stdio.h>
int main()
{
   int a[3]={10,20,30};
   int b[3]={15,25,35};
   int c[6]={a[0],a[1],a[2],b[0],b[1],b[2]};
   for(int i=0;i<3;i++)
   {
       printf(" %d ",a[i]);
   }
   printf("\n");
   for(int j=0;j<3;j++)
   
   {
        printf(" %d ",b[j]);
   }
   printf("\n");
   for(int k=0;k<6;k++)
   {
        printf(" %d ",c[k]);
   }
}