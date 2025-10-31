#include<iostream>
using namespace std;

class student
{
    public:
    void std()
    {
        cout<<"student class is working"<<endl;
    }
};
class male
{
    public:
    void ml()
    {
        cout<<"male class is working"<<endl;
    }
};
class boy:public student,public male
{
    public:
    void by()
    {
        cout<<"boy class is working"<<endl;
    }
};
class female
{
    public:
    void fm()
    {
        cout<<"female class is working"<<endl;
    }
};
class girl:public student,public female
{
    public:
    void grl()
    {
        cout<<"girl class is working"<<endl;
    }
};

int main()
{
    girl A1;
    A1.fm();
    boy A2;
    A2.by();
}