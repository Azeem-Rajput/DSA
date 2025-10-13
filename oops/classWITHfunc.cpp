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
      void setgrade(string g)
    {
        grade=g;
    }
    void prname()
    {
        cout<<name<<endl;
    }
    void prage()
    {
        cout<<age<<endl;
    }
    void prgrade(int pin)
    {
        if(pin==123)
        {
            cout<<grade<<endl;
        } 
        else
        {
            cout<<"please enter valid pin";
        }
    }
};
int main()
{
    student s1;
    s1.setname("Azeem");
    s1.setage(10);
    s1.setgrade("A+");
    s1.prname();
    s1.prage();
    s1.prgrade(3);

}