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
        cout<<"male class is working";
    }
};
class boy:public student,public male
{
    public:
    void by()
    {
        cout<<"boy class is working";
    }
};
class female
{
    public:
    void fm()
    {
        cout<<"female class is working";
    }
};
class girl:public student,public female
{
    public:
    void grl()
    {
        cout<<"girl class is working";
    }
};

int main()
{
    girl A1;
    A1.fm();
}