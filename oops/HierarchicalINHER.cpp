#include<iostream>
using namespace std;

class human
{
    string relegion,color;
    public:
    string name;
    int age;
};

class student:private human
{
    int rollno,fee;

    public:

    student(string name,int age,int weight,int rollno,int fee)
    {
       this->name=name;
       this->age=age;
       this->rollno=rollno;
       this->fee=fee;

    }
    void prnt()
    {
        cout<<"The name is="<<name<<" ,the age is="<<age<<" ,roll number is="<<rollno<<" & the fee is="<<fee<<endl;
    }
};

class teacher:public human
{
    public:
    int salary;

    teacher(string name,int age,int salary)
    {
        this->name=name;
        this->age=age;
        this->salary=salary;
    }

    void display()
    {
        cout<<name<<" "<<age<<" "<<salary<<" "<<endl;
    }
};
int main()
{
    student azeem("Rjput",10,30,24,2000);
    azeem.prnt();
    teacher A2("zulqarain",34,100000);
    A2.display();
}