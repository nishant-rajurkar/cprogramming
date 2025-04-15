 #include<stdio.h>
 int main()
 {
   int i,j,a[]={3,4,5,6,7,8};
   for(int i=0;i<6;i++)
   {
      printf("%d",a[i]);
   }
   for(int j=0;j<6;j++)
   {
      a[5]=a[0];
      a[4]=a[1];
      a[3]=a[2];
   }
      printf("%d",a[j]);
   }
 }