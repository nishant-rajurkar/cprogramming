#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    int sum;
    printf("enter the values");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a%2!=0 || b%2!=0 || c%2!=0 || d%2!=0 || e%2!=0 )
    {
        sum=a+b+c+d+e;
        printf("sum of all odd values are %d",sum);
    }
}