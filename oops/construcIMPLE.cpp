#include<iostream>
using namespace std;

class customer
{
    string name;
    int accno;
    int balence;

    public:
    //Default Constructor    
    customer()
    {
        name="AZeem";
        accno=200;
        balence=10000;
    }
    //Parameterized Constructor
    // customer(string name,int accno,int balence)
    // { 
    //     this->name=name;
    //     this->accno=accno;
    //     this->balence=balence;
    // }
    //Constructor Overloading
    customer(string a ,int b)
    {
        name=a;
        accno=b;
    }
    //inline constructor
    inline customer(string a,int b,int c): name(a),accno(b),balence(c){

    }
    //copy constructor
    customer(customer &B)
    {
        name=B.name;
        accno=B.accno;
        balence=B.balence;
    }
    void show()
    {
        cout<<name<<" "<<accno<<" "<<balence<<endl;
    }
};
int main()
{
    customer A1;
    customer A2("Rajut",55,10000);//file open
    customer A3("Rajput",290);
    customer A4(A3);
    customer A5;
    A5=A3;
    A1.show();
    A2.show();
    A3.show();
    A4.show();
    A5.show();
}