// they are attribute of classes or class member
// static member function
#include<iostream>
using namespace std;
class customer
{
    string name;
    int accno,bal;
    static int totalcustomer;
    static int totalbalence;

    public:
    // for directly access
    //static int totalcustomer;

    customer(string x,int y,int z)
    {
        name=x;
        accno=y;
        bal=z;
        totalcustomer++;
        totalbalence+=z;
    }

    static void accessfun()
    {
        cout<<"Total customers="<<totalcustomer<<endl;
        cout<<"Total balence="<<totalbalence;
    }

    void deposit(int amount)
    {
        if(amount>0)
        {
            bal+=amount;
            totalbalence+=amount;
        }
        else
        {
            cout<<"Invalid amount"<<endl;
        }
    }

    void withdraw(int amount)
    {
        if(amount>0 && amount<totalbalence)
        {
            bal-=amount;
            totalbalence-=amount;
        }
    }

    void display()
    {
        cout<<name<<" "<<accno<<" "<<bal<<" "<<totalcustomer<<endl;
    }

    void tot()
    {
        cout<<totalcustomer<<endl;
    }

};
int customer::totalcustomer=0;
int customer::totalbalence=0;


int main()
{
    customer A1("AZEEM",3910,1000);
    customer A2("RAJPUT",3210,1200);
    customer A3("HAMZA",3390,1000);

    // Directly access by using static function using below
    A1.deposit(-10);
    customer::accessfun();
    

}