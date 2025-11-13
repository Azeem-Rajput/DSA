#include<iostream>
using namespace std;
// class exception
// {
//     protected:
//     string msg;

//     public:
//     exception(string msg)
//     {
//         this->msg=msg;
//     }
//     string what()
//     {
//         return msg;
//     }
// };


// class runtime_error : public exception
// {
//     public:
//     runtime_error(const string &msg):exception(msg);
// };

class invalidAmount:public runtime_error
{
    public:
    invalidAmount(const string &msg):runtime_error(msg)
    {};
};
class insufficientBal:public runtime_error
{
    public:
    insufficientBal(const string &msg):runtime_error(msg)
    {};
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
            throw invalidAmount ("amount should greater than 0\n");
      
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
            throw invalidAmount("your should greater than zero\n");
        }
        else
        {
            throw  insufficientBal("your present balence is low than amount\n");
        }
    }
};

int main()
{
    customer A1("azeem",5000,232);
    try
    {
    A1.debit(1000);  
    A1.withdraw(7000);                              // exception
    A1.debit(100);
    }
    
    catch(const runtime_error &e)
    {
        cout<<"Exception Occur "<<e.what()<<endl;       // These custom function only made for easibility to read
    }

    catch(const insufficientBal &e)
    {
        cout<<"Exception Occur: "<<e.what()<<endl;
    }

    catch(...)
    {
        cout<<"Exception occur"<<endl;
    }
}