#include<stdio.h>
int main()
{
   int a = 10;
   int b = 15;
   int *ptr1;
   int *ptr2;
   ptr1 = &a;
   ptr2 = &b;
   printf("Address of a : %p\n",ptr1);
   printf("value at ptr1 : %d\n",*ptr1);
   printf("Address of b : %p\n",ptr2);
   printf("value at ptr2 : %d\n",*ptr2);
   printf("addition of two numbers are : %d",*ptr1+*ptr2); 
   return 0;
}