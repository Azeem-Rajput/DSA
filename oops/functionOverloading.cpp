#include<iostream>
using namespace std;

class area
{
    public:
    int calculateArea(int r)
    {
        return 3.14*r*r;
    }
    int calculateArea(int l,int b)
    {
        return l*b;
    }
};

int main()
{
    area A1;
    cout<<A1.calculateArea(2)<<endl;
    cout<<A1.calculateArea(2,2);
}
