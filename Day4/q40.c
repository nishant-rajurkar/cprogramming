 #include<stdio.h>
 int main()
 {
    int std1,std2,std3;
    int avg;
    printf("enter the marks of mathematics of std1");
    scanf("%d",&std1);
    printf("enter the marks of mathematics of std2");
    scanf("%d",&std2);
    printf("enter the marks of mathematics of std3");
    scanf("%d",&std3);
    avg=(std1+std2+std3)/3;
    printf("Average is %d",avg);
 }