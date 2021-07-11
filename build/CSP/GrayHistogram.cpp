#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAXN 501
#define L 257
using namespace std;

int main()
{
    //new
    int a[MAXN][MAXN] = {0};
    //创建一维数组即可，最后结果与数组形态无关
    int count[L]={0};
    int n, m, l, t;
    //cin
    cin >> n >> m >> l;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> t;
            a[i][j] = t;
        }
    }
    //输入结束后无法正常输出

    //count
    for (int c = 0; c < l; c++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (c==a[i][j])
                {
                    count[c]+=1;
                }
            }
        }
    }

    //cout
    for (int o = 0; o < l; o++)
    {
        cout<<count[o]<<" ";
    }
    cout<<endl;

    return 0;
}