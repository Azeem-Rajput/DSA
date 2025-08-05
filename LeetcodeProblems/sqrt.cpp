#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number=";
    cin >> n;
    if (n < 1)
    {
        cout << "Enter a valid number";
    }
    for (int i = 1; i <= n; i++)
    {
        if (i*i==n)
        {
            cout << "The square root of number is=" << i;
            return 0;
        }
        else if(i*i>n)
        {
            cout<<"The square root of number is="<<i-1;
            return 0;
        }
    }
}