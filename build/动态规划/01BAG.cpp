/*
    f[i][j]表示只看前i个物品，总体积是j的情况下，总价值最大是多少。
    result=max{f[n][0~v]}
    f[i][j]

    1.不选第i个物品 f[i][j]=f[i-1][j]；
    2.选第i个物品，f[i][j]=f[i-1][j-v[i]]+w[i];

    f[i][j]=max{1.2.}
    f[0][0]=0;
*/ 
#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

const int N =1010;

int n,m;
int f[N][N];
int v[N],w[N];

int main()
{
    cin>>n>>m;
    for (int i = 0; i <= n; i++)
    {
        cin>>v[i]>>w[i];
    }
    

    for(int i=1;i<=n;i++)
    {
        for (int j = 0; j <= m; j++)
        {
            f[i][j]=f[i-1][j];//不选
            if (j>=v[i])
            {
                f[i][j]=max(f[i][j],f[i-1][j-v[i]]+w[i]);//后面的参数表示选
            }
        }
        int res=0;
        for (int i = 0; i <= m; i++)
            res=max(res,f[n][i]);

        cout<<res<<endl;
        return 0;
    }
}
