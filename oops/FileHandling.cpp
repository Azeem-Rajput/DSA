#include<iostream>
#include<fstream>
#include <algorithm>
#include<vector>
using namespace std;
int main()
{
    // File ko open krna
    //ofstream fout;
    //fout.open("zoom.txt");---------------------------// agar ye file available na hui tou isko create kr dy ga
    // Write krna
    //fout<<"Hello Azeem";

    //fout.close();-------------------------------------//  Resources release karwa paoo 


    vector<int>arr(5);
    cout<<"Enter the array:";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    // file ko open kro
    ofstream fout;
    fout.open("written.txt");
    fout<<"Original Data"<<endl;
    // file me write karo
    for(int i=0;i<5;i++)
    {
        fout<<arr[i]<<" ";
    };
    fout<<endl;
    fout<<"Sorted Data"<<endl;
    sort(arr.begin(),arr.end());
      for(int i=0;i<5;i++)
    {
        fout<<arr[i]<<" ";
    };

}