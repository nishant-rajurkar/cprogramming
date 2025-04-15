 #include<stdio.h>
 int main()
 {
    int n;
    printf("enter sie of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements in array",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the position is :%d",arr[i]);
    printf("the value is %d",arr[3]);

}