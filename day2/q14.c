#include<stdio.h>
int main()
{
    int d;
    int f;
    int avg;
    printf("Enter the distance");
    scanf("%d",&d);
    printf("Enter the fuel");
    scanf("%d",&f);
    avg=d/f;
    printf("Average is %d",avg);
}