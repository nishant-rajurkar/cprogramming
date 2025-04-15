 #include<stdio.h>
 int main()
 {
    int t1=0,t2=1;
    int next=t1+t2;

    for(int i=1;next<=10;i++)
    {
        printf("%d ",next);
        t1=t2;
        t2=next;
        next=t1+t2;
      
    }
 }