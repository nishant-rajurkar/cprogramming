 #include<stdio.h>
 int main()
 {
    int i;
    printf("enter the value of i");
    scanf("%d",&i);
    if(i%i==0)
    {
        printf("number is prime");
    }
    else
    {
        printf("number is not prime");
    }
 }