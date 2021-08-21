#include<iostream>
using namespace std;
//3412
const int N=610;
int n,l,r,t;
int a[N][N],s[N][N];

int main()
{
    scanf("%d%d%d%d",&n,&l,&r,&t);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin>>a[i][j];   

    //计算前缀和
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+a[i][j];
    
    //计算领域均值
    int cnt=0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            //确定计算边界
            int x1,y1,x2,y2;
            if(i-r>=1)x1=i-r;else x1=1;
            if(j-r>=1)y1=j-r;else y1=1;
            if(i+r<=n)x2=i+r;else x2=n;
            if(j+r>=n)y2=j+r;else y2=n;
            //计算子矩阵元素个数
            int c=(x2-x1+1)*(y2-y1+1);
            //计算子矩阵之和
            int s1=s[x2][y2]-s[x1-1][y2]-s[x2][y1-1]+s[x1-1][y1-1];
            if(s1/c<=t)cnt++;//可以在时间复杂度为 O（1）下计算
        }
    }
    printf("%d\n",cnt);
    return 0;
}

// 整个算法复杂度为O（n^2）