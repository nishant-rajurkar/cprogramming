#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the values");
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        printf("values are in ascending order");
    }
    else
    {
        printf("values are in descending order");
    }
}
