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
};

class student:public human
{
    int rollno,fees;
    public:
    student(string name,int age,int rollno,int fees)
    {
        this->name=name;
        this->age=age;
        this->rollno=rollno;
        this->fees=fees;
    }
};

int main()
{
    student A1("Azeem",10,12,11);
    A1.prove();

}