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
    student s1;
    s1.name="Azeem";
    s1.age=10;
    s1.rollno=23;
    s1.grade="A+";
    cout<<s1.name;

}