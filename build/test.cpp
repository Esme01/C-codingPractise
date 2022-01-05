#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
//高精度加法
vector<int> add(vector<int> &A,vector<int> &B)
{
    vector<int> C;
    int t=0;
    for(int i=0;i<A.size()||i<B.size();i++)
    {
        if(i<A.size())t+=A[i];
        if(i<B.size())t+=B[i];
        C.push_back(t%10);
        t/=10;
    }
    if(t)C.push_back(1);
    return C;
}

//高精度乘法
vector<int> mul(vector<int> &A,int b)
{
    vector<int> C;
    for(int i=0,t=0;i<A.size();i++)
    {
        t+=A[i]*b;
        C.push_back(t%10);
        t/=10;
    }
    while (C.size()>1&&C.back()==0)C.pop_back();//去掉前导0
    return C;
}

//高精度减法
vector<int> sub(vector<int> &A,vector<int> &B)
{
    //默认A>B
    vector<int> C;
    for (int i = 0,t=0; i < A.size(); i++)
    {
        t=A[i]-t;
        if(i<B.size())t-=B[i];
        C.push_back((t+10)%10);
        if(t<0)t=1;
        else t=0;
    }
    while(C.size()>1&&C.back()==0)C.pop_back();
    return C;
}

//高精度除法
vector<int> div(vector<int> &A,int b,int &r)
{
    vector<int> C;
    //从高位除起
    for(int i=A.size()-1;i>=0;i--)
    {
        r=r*10+A[i];
        C.push_back(r/b);
        r=r%b;
    }
    reverse(C.begin(),C.end());
    while(C.size()>1&&C.back()==0)C.pop_back();
    return C;
}

int main()
{
    return 0;
}