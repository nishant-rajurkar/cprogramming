 #include<iostream>
 using namespace std;
 int num1()
 {
    int a=2;
    cout << "The value of a is : " << a << endl;
 }
 class One 
 {
 public:   
    int b=3;
    int num1()
    {
        cout << "The value of b is : " << b << endl;
    }
 };
 int main()
 {
    num1();
    One obj;
    obj.num1();
 }
