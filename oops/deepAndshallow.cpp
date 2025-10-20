#include<iostream>
using namespace std;

class customer
{
    int a;
    int *p;

    public:
    customer()
    {
        a=0;
        p=new int;
        p=0;
    }

    customer(int x,int y)
    {
        a=x;
        p=new int;
        *p=y;
    }
    void update()
    {
        a=a+1;
        *p=*p+1;
    }
    void print()
    {
        cout<<a <<*p<<endl;
    }
};

int main()
{
    customer A1(1,2);
    customer A2(A1);
    A1.print();
    A2.print();
}