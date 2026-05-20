#include<iostream>
using namespace std;
void fn3(int n)
{
    // Base Case
    if(n==0)
    {
        cout<<"Happy Birthday"<<endl;
        return;
    }
    cout<<n<<" days left for birthday"<<endl;
    fn3(n-1);
}
int main()
{
    // int n=5;
    // for(int i=n;i>0;i--)
    // {
    //     cout<<i<<" days left for birthday"<<endl;
    // }
    // cout<<"Happy Birthday";


    fn3(5);
}
