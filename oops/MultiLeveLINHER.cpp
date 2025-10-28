#include<iostream>
using namespace std;

class person
{
    protected:
    string name;
    int age;

    public:
    void per()
    {
        cout<<"person class works with name & age="<<name<<" "<<age<<endl;
    }
};

class employee:public person
{
    protected:
    int salary;

    public:
    void emp()
    {
    cout<<"employe class works with salary="<<salary<<endl;
    }
};
class manager:public employee
{
    public:
    string dep;

    public:
    manager(string name,int age,int salary, string dep)
    {
        this->name=name;
        this->age=age;
        this->salary=salary;
        this->dep=dep;
    }
    
    void print_manage()
    {
        cout<<name<<" "<<age<<" "<<salary<<" "<<dep<<endl;
    }

    void man()
    {
        cout<<"manager class is working and his departement is="<<dep<<endl;
    }
};

int main()
{
    manager A1("Azeem",12,110,"socialmedia");
    A1.print_manage();

}
