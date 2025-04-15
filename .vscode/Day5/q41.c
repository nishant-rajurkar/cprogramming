 #include<stdio.h>
 int main()
 {
    int i,S;
    for(int i=0;i<50;i++)
    {
        S=S+(1/(i+1));
    }
    printf("%d",S);
 }

