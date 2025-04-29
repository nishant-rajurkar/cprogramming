 #include<iostream>
 using namespace std;
 class Number
 {
    public:
    int num;
    void value()
    {
        cout << "the value is : " << num << endl;
    }
 };
 int main()
 {
    Number n;
    n.num = 20;
    n.value();
    return 0;
 }