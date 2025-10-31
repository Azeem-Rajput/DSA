#include<iostream>
using namespace std;

class human
{
    public:
    string name;

    void display()
    {
        cout<<"My name is "<<name<<endl;
    }
};
class engineer:public virtual human
{
    public:
    string degree;

    void eng()
    {
        cout<<"I completed my degree of "<<degree<<endl;
    }
};
class youtuber:public virtual human
{
    public:
    int subscribers;

    void you()
    {
        cout<<"My youtube subscribers are "<<subscribers<<endl;
    }
};
class codeteacher:public engineer,public youtuber
{
    public:
    string salary;

    codeteacher(string degree,int subscribers,string salary,string name)
    {
        this->degree=degree;
        this->subscribers=subscribers;
        this->salary=salary;
        this->name=name;
    }

    void print()
    {
        eng();
        you();
        cout<<"My game name is "<<salary<<endl;
    }
};

int main()
{
    codeteacher A1("BSCS",400,"Arm Wrestling","Coder");
    A1.display();
}
