#include<iostream>
using namespace std;

class engineer
{
    public:
    string degree;

    void eng()
    {
        cout<<"I completed my degree of "<<degree<<endl;
    }
};
class youtuber
{
    public:
    int subscribers;

    void you()
    {
        cout<<"My youtube subscribers are "<<subscribers<<endl;
    }
};
class gamer:public engineer,public youtuber
{
    public:
    string game;

    gamer(string degree,int subscribers,string game)
    {
        this->degree=degree;
        this->subscribers=subscribers;
        this->game=game;
    }

    void display()
    {
        eng();
        you();
        cout<<"My game name is "<<game<<endl;
    }
};

int main()
{
    gamer A1("BSCS",400,"Arm Wrestling");
    A1.display();
}
