#include<iostream>
using namespace std;
void lowerToupper(string &str,int index)
{
    //base case
    if(index==-1)
    {
        return;
    }

    str[index]='A'+str[index]-'a';
    lowerToupper(str,index-1);
}
int main()
{
    string str="azeem";
    lowerToupper(str,4);
    cout<<str;
}