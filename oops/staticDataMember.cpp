//they are attribute of classes or class member
#include<iostream>
using namespace std;
class customer
{
    string name;
    int accno,bal;
    static int totalcustomer;

    public:

    customer(string x,int y,int z)
    {
        name=x;
        accno=y;
        bal=z;
        totalcustomer++;
    }
    void display()
    {
        cout<<name<<" "<<accno<<" "<<bal<<" "<<totalcustomer<<endl;
    }
};
int customer::totalcustomer=0;


int main()
{
    customer A1("AZEEM",3910,1000);
    A1.display();
    customer A2("RAJPUT",3210,1200);
    A2.display();
    customer A3("HAMZA",3390,9021);
    A3.display();
}