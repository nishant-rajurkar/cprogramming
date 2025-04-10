 #include<stdio.h>
 int main()
 {
    int i,sum=0;
    for(int i=1;i<=50;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
            sum += i;
        }
    }
    printf("%d",sum);
 }