 #include<stdio.h>
 int main()
 {
    int a[5]={2,3,4,5,6};
    for(int i=0;i<5;i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\n");
   if(a[0]==5 || a[1]==5 || a[2]==5 || a[3]==5 || a[4]==5)
    {
            printf("5 is found");
    }
    else
    {
        printf("5 is not found");
    }
    
}