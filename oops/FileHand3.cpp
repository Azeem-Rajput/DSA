#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // Right
    ofstream fout;

    fout.open("Right.txt");
    fout<<"Hello Azeem"<<endl;
    fout<<"Hello Rajput"<<endl;
    fout<<"Hello Bhai"<<endl;
    fout.close();

    // Read
    ifstream fin;

    fin.open("Right.txt");
    string line;
    while(getline(fin,line))
    {
        cout<<line<<endl;
    }
    fin.close();
}