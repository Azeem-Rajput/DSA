#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    vector<int>arr(6);
    cout<<"Enter an Array:";
    for(int i=0;i<6;i++)
    {
        cin>>arr[i];
    }

    ofstream fout;

    fout.open("task.txt");
    fout<<"Original Array"<<endl;
    for(int i=0;i<6;i++)
    {
        fout<<arr[i]<<" ";
    }
    ifstream fin;

    fin.open("task.txt");
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    fout<<endl;
    fout<<"Sorted Array"<<endl;
    sort(arr.begin(),arr.end());

      for(int i=0;i<6;i++)
    {
        fout<<arr[i]<<" ";
    }
    fout.close();


}