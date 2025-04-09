#include<stdio.h>
int main()
{
    float a;
    float b;
    float c;
    float perimeter;
    printf("Enter the value of a");
    scanf("%f",&a);
    printf("Enter the value of b");
    scanf("%f",&b);
    printf("Enter the value of c");
    scanf("%f",&c);
    perimeter=a+b+c;
    printf("perimeter of a triangle is %f",perimeter);
}