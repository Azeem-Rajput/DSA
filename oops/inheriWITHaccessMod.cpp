#include<iostream>
using namespace std;

class human
{
    string relegion,color;
    protected:
    string name;
    int age,weight;
};

class student:private human //protected or public
{
    int rollno,fee;

    public:

    student(string name,int age,int weight,int rollno,int fee)
    {
       this->name=name;
       this->age=age;
       this->weight=weight;
       this->rollno=rollno;
       this->fee=fee;
    }
    void prnt()
    {
        cout<<"The name is="<<name<<" ,the age is="<<age<<" ,the weight is="<<weight<<" ,roll number is="<<rollno<<" & the fee is="<<fee<<endl;
    }
};
int main()
{
    student azeem("Rjput",10,30,24,2000);
    azeem.prnt();
    
}