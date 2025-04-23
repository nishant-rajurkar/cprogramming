#include<stdio.h>
int main()
{
    for(int r=4;r>=1;r--)
    {
        for(int c=5;c>=1;c--)
        {
            printf("%c",c+64);
        }
        printf("\n");
    }
}
