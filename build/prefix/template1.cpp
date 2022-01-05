//全局变量初始化，自动设置为 0
#include<iostream>
using namespace std;

const int N=100010;
int n,m;
int a[N],s[N];

int main()
{
    // ios::sync_with_stdio(false);
    //输入和输出可以不同步，但是cin scanf不可混用了


    // int n,m;
    cin>>n>>m;
    for (int i = 1; i <= n; i++)scanf("%d",&a[i]);
    //从1开始，这样从第 1 个数开始计算的时候，就不用特殊对待
    for (int i = 1; i <= n; i++)s[i]=s[i-1]+a[i];//前缀和的初始化

    while (m--)
    {
        int l,r;
        scanf("%d%d",&l,&r);
        printf("%d\n",s[r]-s[l-1]);//计算前缀和
    }
    return 0;
}