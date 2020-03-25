//queue的队列实现
#include<cstdio>
#include<queue>
#include<iostream>

using namespace std;
queue<int> q;
int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)q.push(i);
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
        q.push(q.front());
        q.pop();
    }
    return 0;
}