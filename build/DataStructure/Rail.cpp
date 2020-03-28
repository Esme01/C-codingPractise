//LIFO in C
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    stack<int> s;
    int cur=1;
    bool f=1;

    //模拟每个push元素
    for (int i = 0; i < n; i++)
    {
        while (s.empty()||s.top()!=a[i]&&cur<=n)
        //栈为空的时候也需要push
        //cur的限制，因为元素也就那么多个
        {
            s.push(cur);
            cur++;
        }
        if(s.empty()||s.top()!=a[i]){
            //找不到，或者栈为空的处理方法
            f=0;
            break;
        }
        else s.pop();
    }
    if (f)//模拟完成之后，依然为true，则是合法的
        cout<<"legal"<<endl;
    else cout<<"illegal"<<endl;
    return 0;
}