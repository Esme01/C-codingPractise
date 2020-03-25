#include<deque>
#include<iostream>

using namespace std;
int main()
{
    deque<int> dq;
    int n,t;
    cin>>n;
    for (int i = n; i >=1 ; i--)dq.push_front(i);//先输入的是队尾back
    while (dq.size()>=2)
    {
        cout<<dq.front()<<" ";
        dq.pop_front();
        t=dq.front();
        dq.pop_front();
        dq.push_back(t);
    }
    
    cout<<dq.front()<<endl;
    return 0;
}