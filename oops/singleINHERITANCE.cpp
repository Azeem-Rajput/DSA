#include<iostream>
using namespace std;

class human
{
    protected:
    string name;
    int age;

    public:

    void prove()
    {
    cout<<"That's working";
    }

    human(string name,int age)
    {
        this->name=name;
        this->age=age;
    }

    void print()
    {
        cout<<name<<" "<<age<<endl;
    }

    // human()
    // {
    //     cout<<"constructor of human"<<endl;
    // }
};

class student:public human
{
    int rollno,fees;
    public:
    student(string name,int age,int rollno,int fees):human(name,age)
    {
        this->rollno=rollno;
        this->fees=fees;
    }

    void print()
    {
        cout<<name<<" "<<age<<" "<<rollno<<" "<<fees<<" "<<endl;
    }


    // public:
    // student()
    // {
    //     cout<<"Student constructor"<<endl;
    // }
};

int main()
{
    student A1("Azeem",10,14,22);
    A1.print();

}