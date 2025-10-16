#include<iostream>
using namespace std;

class customer
{
    string name;
    int accno;
    int balence;

    public:
    customer()
    {
        cout<<"this is DEFAULT CONSTRUCTOR";
    }
};
int main()
{
    customer A1;
}