#include<stdio.h>
int main()
{
   int a = 10;
   int b = 8;
   int *ptr1;
   int *ptr2;
   ptr1 = &a;
   ptr2 = &b;
   printf("Address of a : %p\n",ptr1);
   printf("value at ptr1 : %d\n",*ptr1);
   printf("Address of b : %p\n",ptr2);
   printf("value at ptr2 : %d\n",*ptr2);
   if(*ptr2>*ptr1)
   {
        printf("The value at ptr2 is maximum");
   } 
   else
   {
        printf("The value at ptr2 is minimum");
   }

   return 0;
}