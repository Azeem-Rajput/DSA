#include<iostream>
using namespace std;

class customer
{
    string name;
    int *data;

    public:
    
    // customer()
    // {
    //     name="AZeem";
    //     data=new int;
    //     *data=10;
    //     cout<<"constructor is present"<<endl;
    // }
    // //destructor
    // ~customer()
    // {
    //     delete data;
    //     cout<<"destructor is present";
    // }
    customer()
    {
        name="4";
        cout<<"contructor call "<<name<<endl;   
    }
    customer(string name)
    {
        this->name=name;
        cout<<"contructor call "<<name<<endl;
    }
    ~customer()
    {
        cout<<"destructor call "<<name<<endl;
    }
};

int main()
{
    customer A1("Azeem");
    customer A2("29");
    customer A3("64");
    customer *A4=new customer;
    delete A4;
}