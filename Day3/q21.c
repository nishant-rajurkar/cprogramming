#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of a");
    scanf("%d",&a);
    if(a<0 || a>80)
    {
        printf("%d does not belongs to range",a);
    }
}