#include<stdio.h>
#include<conio.h>
int main()
{
    int height=7;
    int width=5;
    int perimeter = 2*(height + width);
    int area = height * width;
    printf("height of rectangle with %d inches",height);
    printf("\nwidth of rectangle with %d inches",width);
    printf("\nPerimeter %d",perimeter);
    printf("\nArea %d",area);
    return 0;
}