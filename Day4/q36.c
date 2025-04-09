#include<stdio.h>
int main()
{
    int i;
    for(int i=10;i<70;i++)
    {
        if(i%7==2 || i%7==3)
        {
            printf("%d is divisible by 7 and 2 or 3 will be remainder",i);
        }
        printf("\n");
    }
}
