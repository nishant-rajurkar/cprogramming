#include<stdio.h>
int main()
{
    int a,b;
    int div;
    printf("Enter the values");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        div=a/b;
        printf("division of two numbers are %d",div);
    }
    else
    {
        printf("Division is not possible");
    }
}
