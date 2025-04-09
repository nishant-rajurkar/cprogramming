#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("enter the value of a");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d is multiplied\n",a);
    }
    printf("enter the value of b");
    scanf("%d",&b);
    if(b%2==0)
    {
        printf("%d is multiplied",b);
    }
}