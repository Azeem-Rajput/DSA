#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<int>v;
    // v.push_back(2); 
    // v.push_back(8);
    // v.push_back(6);
    // v.push_back(1);
    // v.push_back(10);
    // cout<<"size of v is="<<v.size()<<endl;
    // cout<<"capacity of v is="<<v.capacity()<<endl;

    // v.erase(v.begin()+1);
    // cout<<"size of v is="<<v.size()<<endl;
    // cout<<"capacity of v is="<<v.capacity()<<endl;
    //    for(auto i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // v[1]=0;

    // for(auto i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // v.insert(v.begin()+1,34);

    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }


    vector<int>ans;
    ans.push_back(7);
    ans.push_back(50);
    ans.push_back(12);
    ans.push_back(7);
    ans.push_back(722);
    ans.push_back(110);

    // sort(vv.begin(),vv.end());
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }

    // cout<<binary_search(vv.begin(),vv.end(),12);

    // cout<<find(ans.begin(),ans.end(),722)-ans.begin();

}