#include<stdio.h>
int main()
{
    int a=800;
    int year = a/365;
    int weeks = a/7;
    int days = a/(year+weeks);
    printf("%d year %d weeks %d days",year,weeks,days);
}