#include<iostream>
using namespace std;
class One 
{
public:   
   int a,b;
   int setdata(int x,int y)
   {
       a=x;
       b=y;
   }
   int value(int &a,int &b)
   {
        a=10;
        b=20;
   }
   int getdata()
  {
       cout << a << b << endl;
  }
};
int main()
{
   One ob1;
   ob1.setdata(4,5);
   ob1.value(10,20);
   ob1.getdata();
}