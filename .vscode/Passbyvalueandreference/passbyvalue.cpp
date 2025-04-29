 #include<iostream>
 using namespace std;
 class One 
 {
 public:   
    int a,b;
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void add(One cob2)
    {
        int c=a+cob2.a;
        int d=b+cob2.b;
    }
    void getdata()
   {
        cout << a << b << endl;
   }
 };
 int main()
 {
    One ob1,ob2;
    ob1.setdata(4,5);
    ob2.setdata(3,6);
    ob1.add(ob2);
    ob1.getdata();
    ob2.getdata();
}