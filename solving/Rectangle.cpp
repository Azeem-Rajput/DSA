#include <iostream>
using namespace std;
bool rec(float a,float b,float c,float d)
{
    if((a==b&&c==d)||(a==c&&b==d)||(a==d&&b==c))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    float n,m,o,p;
    cout << "Enter the values of sides=";
    cin >> n>>m>>o>>p;
    cout << rec(n,m,o,p);
}