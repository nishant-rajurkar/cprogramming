#include<stdio.h>
int main()
{
   int a = 10;
   int *ptr;
   ptr = &a;
   printf("Address of a : %p\n",ptr);
   printf("value at ptr : %d\n",*ptr);
   return 0;
}