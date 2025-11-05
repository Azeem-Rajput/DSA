#include<iostream>
#include<vector>
using  namespace std;

class animal
{
    public:
    virtual void speak()=0; // also known as Abstract Function ( not create object directly)
};
class dog:public animal
{
    public:
    void speak()
    {
        cout<<"bark"<<endl;
    }
};
class cat:public animal
{
    public:
    void speak()
    {
        cout<<"meaow"<<endl;
    }
};

int main()
{
    // animal *p;
    // p=new dog();
    // p->speak();

    animal*p;
    vector<animal*>nimal;
    nimal.push_back(new dog());
    nimal.push_back(new cat());
    // nimal.push_back(new animal());
    nimal.push_back(new dog());
    nimal.push_back(new cat());
    nimal.push_back(new dog());
    //kaisy ho ga
    for(int i=0;i<nimal.size();i++)
    {
        p=nimal[i];
        p->speak();
    }
}