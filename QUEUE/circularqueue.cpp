#include<iostream>
using namespace std;
class queue
{
    int *arr;
    int front,rare,size;
    public:
    queue(int n)
    {
        arr=new int[n];
        front=-1;
        rare=-1;
        size=n;
    }
    bool isempty()
    {
        return front==-1;
    }
    bool isfull()
    {
        return (rare+1)%size==front;
    }
    void push(int x)
    {
        if(isempty())
        {
            front=rare=0;
        }
        else if(rare==size-1)
        {
            cout<<"queue overflow"<<endl;
            return;
        }
        else
        {
            rare=(rare+1)%size;
            arr[rare]=x;
        }
    }
    int pop()
    {
        if(isempty())
        {
            cout<<"queue underflow"<<endl;
            return -1;
        }
        else
        {
            if(front==rare)
            {
                front=rare=-1;
            }
            else
            {
                front=(front+1)%size;
            }
        }
    }
    int start()
    {
        if(isempty())
        {
            cout<<"queue is empty"<<endl;
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
};
int main()
{
    queue q(5);
    q.push(5);
    q.push(51);
    q.push(52);
    q.push(15);
    q.pop();
    q.pop();
    q.pop();
    
    int x=q.start();
    if(!q.isempty())
    {
        cout<<x<<" "<<endl;
    }
}
