#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(2); 
    v.push_back(8);
    v.push_back(6);
    v.push_back(1);
    v.push_back(10);
    cout<<"size of v is="<<v.size()<<endl;
    cout<<"capacity of v is="<<v.capacity()<<endl;

    v.erase(v.begin()+1);
    cout<<"size of v is="<<v.size()<<endl;
    cout<<"capacity of v is="<<v.capacity()<<endl;


}