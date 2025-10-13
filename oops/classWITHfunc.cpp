#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    int age,rollno;
    string grade;
    // function
    public:
    void setname(string n)
    {
        name=n;
    }
    void setage(int x)
    {
        age=x;
    }
    void prname()
    {
        cout<<name;
    }
    void prage()
    {
        cout<<age;
    }
};
int main()
{
    student s1;
    s1.setname("Azeem");
    s1.setage(10);
    s1.prname();
    s1.prage();

}