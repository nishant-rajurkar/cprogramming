#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    int avg;
    printf("enter the values");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    avg=(a+b+c+d+e)/5;
    printf("avg of positive numbers is %d",avg);
}