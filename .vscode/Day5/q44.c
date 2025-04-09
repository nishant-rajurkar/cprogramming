 #include<stdio.h>
 int main()
 {
      int b=100;
      int a[]={3,-4,5,6,7,8,9};
      for(int i=0;i<7;i++)
      {
            if(a[i]>0)
            {
                  printf("%d\n",a[i]);   
            }
            else
            {
                  printf("%d\n",b);
            } 
      }
}