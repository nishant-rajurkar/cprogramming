 #include<stdio.h>
 int main()
 {
    int a[3]={4,5,6};
    int b[3]={7,8,9};
    for(int i=0;i<3;i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\n");
    for(int j=0;j<3;j++)
    {
        printf(" %d ",b[j]);
    }
    printf("\n");
    int sum1=a[0]+a[1]+a[2];
    printf("addition of first array is %d",sum1);
    printf("\n");
    int sum2=b[0]+b[1]+b[2];
    printf("addition of second array is %d",sum2);
    printf("\n");
    if(sum1>sum2)
    {
        printf("first array has the largest sum");
    }
    else
    {
        printf("second array has the largest sum");
    }
 }