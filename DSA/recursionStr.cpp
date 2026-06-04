#include<iostream>
using namespace std;
bool checkpa(string str,int start,int end)
{
    if(start>=end) // base condition
    {
        return 1;
    }

    if(str[start]!=str[end])
    {
        return 0;
    }
    else
    return checkpa(str,start+1,end-1);
}
int main()
{
    // check palindome
    string str = "naman";
    cout<<checkpa(str,0,4);

}   