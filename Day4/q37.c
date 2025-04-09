#include<stdio.h>
int main()
{
    int i,n,j;
    int num=1;
    printf("Enter the number of lines: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}
