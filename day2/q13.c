#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("enter the first number");
    scanf("%d",&a);
    printf("enter the second number");
    scanf("%d",&b);
    printf("enter the third number");
    scanf("%d",&c);
    if(a>b)
    {
        printf("%d is greater",a);
    }
    if(b>c)
    {
        printf("%d is greater",b);
    }
    if(c>a)
    {
        printf("%d is greater",c);
    }
}