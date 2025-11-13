#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // File ko open krna
    ofstream fout;
    fout.open("zoom.txt");// agar ye file available na hui tou isko create kr dy ga
    // Write krna
    fout<<"Hello Azeem";

    fout.close();//  Resources release karwa paoo 
}