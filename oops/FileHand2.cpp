#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    // Pehly file ko open krna ha
    fin.open("zoom.txt");
    // Phir read krna ha
    char c;
    // fin>>c;
    c=fin.get();
    while(!fin.eof()) // eof() stands for "End Of File"    (And again i remind that condition only true when it is 1)
    {
        cout<<c;
        // fin>>c;
        c=fin.get();
    }
    fin.close();
}
