 #include<stdio.h>
 int main()
 {
    int a[5]={10,20,30,40,10};
    for(int i=0;i<5;i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\n");
    if(a[0]==a[4])
    {
        printf("true");
    }
 }