#include<stdio.h>
int main()
{
    int Eid;
    int twh;
    float amount;
    printf("Enter the ID");
    scanf("%d",&Eid);
    printf("Enter the twh");
    scanf("%d",&twh);
    printf("Enter the Amount");
    scanf("%f",&amount);
    printf("Employee Id is %d",Eid);
    amount=twh*amount;
    printf("\nSalary is %f",amount);
}
