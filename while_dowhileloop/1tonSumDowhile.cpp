 #include<iostream>
 using namespace std;
 int main()
 {
    int n;
    cout<<"Enter a number=";
    cin>>n;
    int i=1;
    int sum=0;
    do
    {
        sum=sum+i;
        cout<<sum<<endl;
        i++;
    }while(i<=n);
 }