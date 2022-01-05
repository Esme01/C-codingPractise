//hash 时间复杂度要比 set 低
#include<iostream>
#include<set>
// #include<unordered_set>

using namespace std;
const int N=10010;
// bool existed[N];
int height[N];//差分数组

int main()
{
    int n,p,h,m;
    cin>>n>>p>>h>>m;
    height[1]=h;
    set<pair<int,int> > existed;//去重
    for (int i = 0,a,b; i < m; i++)//初始化a,b
    {
        cin>>a>>b;
        if (a>b)swap(a,b);
        if (!existed.count({a,b}))
        {
            existed.insert({a,b});
            height[a+1]--,height[b]++;
        }
    }

    //计算前缀和数组
    for (int i = 1; i <= n; i++)
    {
        height[i]+=height[i-1];
        cout<<height[i]<<endl;
    }
    return 0;
}