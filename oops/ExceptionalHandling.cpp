#include<iostream>
using namespace std;

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
            throw "amount should greater than 0\n";
      
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
            throw "your should greater than zero\n";
        }
        else
        {
            throw  "your present balence is low than amount\n";
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
    catch(const char *e)
    {
        cout<<"Exception Occur "<<e<<endl;
    }
}