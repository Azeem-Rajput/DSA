#include<iostream>
using namespace std;

class customer
{
    string name;
    int *data;

    public:
    
    customer()
    {
        name="AZeem";
        data=new int;
        *data=10;
        cout<<"constructor is present"<<endl;
    }
    //destructor
    ~customer()
    {
        delete data;
        cout<<"destructor is present";
    }
};

int main()
{
    customer A1;
}