#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int age,rollno;
    string grade;
};
int main()
{
    student *s=new student;
    (*s).name="Azeem";
    (*s).age=20;
    (*s).grade="A+";

    cout<<s->name<<" ";
    cout<<s->age<<" ";
    cout<<s->grade<<" ";


}