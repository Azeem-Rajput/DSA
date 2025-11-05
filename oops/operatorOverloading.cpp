#include<iostream>
using namespace std;

class complex
{
    int real,img;
    public:
    complex(int real,int img)
    {
        this->real=real;
        this->img=img;
    }
    void display()
    {
        cout<<real<<" +i"<<img;
    }
    complex operator+(complex &C)
    {

    }
    
};

int main()
{
    complex C1(2,2);
    complex C2(2,2);
    complex C3=C1+C2;
    C3.display();
}