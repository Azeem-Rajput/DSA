#include<iostream>
using namespace std;
class exception
{
    protected:
    string msg;

    public:
    exception(string msg)
    {
        this->msg=msg;
    }
    string what()
    {
        return msg;
    }
};



class customer
{
    string name;
    int balence,accno;

    public:
    customer(string name,int balence,int accno)
    {
        this->name=name;
        this->balence=balence;
        this->accno=accno;
    }

    void debit(int amount)
    {
        if(amount<=0)
            throw runtime_error ("amount should greater than 0\n");
      
            balence+=amount;
            cout<<amount<<" is depit successfully"<<endl;
    }

    void withdraw(int amount)
    {
        if(amount>0 && amount<=balence)
        {
            balence-=amount;
            cout<<amount<<" is withdraw successfully"<<endl;
        }
        else if(amount<0)
        {
            throw runtime_error ("your should greater than zero\n");
        }
        else
        {
            throw  runtime_error ("your present balence is low tha)n amount\n");
        }
    }
};

int main()
{
    customer A1("azeem",5000,232);
    try
    {
    A1.debit(1000); 
    A1.debit(0);
    A1.withdraw(6100);                              // exception
    A1.debit(1000);
    }
    catch(const runtime_error &e)
    {
        cout<<"Exception Occur "<<e.what()<<endl;
    }
}