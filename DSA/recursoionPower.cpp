#include<iostream>
using namespace std;
int pow(int Num,int N)
{
    if(N==0)
    {
        return 1;
    }
    //break case
    if(N==1)
    {
        return Num;
    }
    return Num*pow(Num,N-1);
}
int main()
{
    int num;
    cout<<"Enter a number which power=";
    cin>>num;
    int n;
    cout<<"How many times power taken=";
    cin>>n;
    cout<<pow(num,n);

}